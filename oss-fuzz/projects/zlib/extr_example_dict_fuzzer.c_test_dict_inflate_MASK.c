
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned char* next_in; unsigned int avail_in; unsigned char* next_out; unsigned int avail_out; scalar_t__ adler; void* opaque; int zfree; int zalloc; } ;
typedef TYPE_1__ z_stream ;
typedef unsigned char uint8_t ;


 int CHECK_ERR (int,char*) ;
 int Z_NEED_DICT ;
 int Z_NO_FLUSH ;
 int Z_STREAM_END ;
 scalar_t__ calloc (int,scalar_t__) ;
 scalar_t__ data ;
 scalar_t__ dataLen ;
 scalar_t__ dictId ;
 int dictionaryLen ;
 int exit (int) ;
 int fprintf (int ,char*) ;
 int free (unsigned char*) ;
 int inflate (TYPE_1__*,int ) ;
 int inflateEnd (TYPE_1__*) ;
 int inflateInit (TYPE_1__*) ;
 int inflateSetDictionary (TYPE_1__*,unsigned char const*,int ) ;
 scalar_t__ memcmp (unsigned char*,scalar_t__,scalar_t__) ;
 int stderr ;
 int zalloc ;
 int zfree ;

void test_dict_inflate(unsigned char *compr, size_t comprLen) {
  int err;
  z_stream d_stream;
  unsigned char *uncompr;

  d_stream.zalloc = zalloc;
  d_stream.zfree = zfree;
  d_stream.opaque = (void *)0;

  d_stream.next_in = compr;
  d_stream.avail_in = (unsigned int)comprLen;

  err = inflateInit(&d_stream);
  CHECK_ERR(err, "inflateInit");

  uncompr = (uint8_t *)calloc(1, dataLen);
  d_stream.next_out = uncompr;
  d_stream.avail_out = (unsigned int)dataLen;

  for (;;) {
    err = inflate(&d_stream, Z_NO_FLUSH);
    if (err == Z_STREAM_END)
      break;
    if (err == Z_NEED_DICT) {
      if (d_stream.adler != dictId) {
        fprintf(stderr, "unexpected dictionary");
        exit(1);
      }
      err = inflateSetDictionary(
          &d_stream, (const unsigned char *)data, dictionaryLen);
    }
    CHECK_ERR(err, "inflate with dict");
  }

  err = inflateEnd(&d_stream);
  CHECK_ERR(err, "inflateEnd");

  if (memcmp(uncompr, data, dataLen)) {
    fprintf(stderr, "bad inflate with dict\n");
    exit(1);
  }

  free(uncompr);
}
