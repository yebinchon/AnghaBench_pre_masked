
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned char* next_out; unsigned int avail_out; unsigned char* next_in; unsigned int avail_in; void* opaque; int zfree; int zalloc; } ;
typedef TYPE_1__ z_stream ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 unsigned int VAR_7 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

void FUNC_7(unsigned char *VAR_11, size_t VAR_12,
                        unsigned char *VAR_13, size_t VAR_14) {
  z_stream VAR_15;
  int VAR_16;

  VAR_15.zalloc = VAR_9;
  VAR_15.zfree = VAR_10;
  VAR_15.opaque = (void *)0;

  VAR_16 = FUNC_3(&VAR_15, VAR_0);
  FUNC_0(VAR_16, "deflateInit");

  VAR_15.next_out = VAR_11;
  VAR_15.avail_out = (unsigned int)VAR_12;




  VAR_15.next_in = VAR_13;
  VAR_15.avail_in = (unsigned int)VAR_14;
  VAR_16 = FUNC_1(&VAR_15, VAR_5);
  FUNC_0(VAR_16, "deflate large 1");
  if (VAR_15.avail_in != 0) {
    FUNC_6(VAR_8, "deflate not greedy\n");
    FUNC_5(1);
  }


  FUNC_4(&VAR_15, VAR_4, VAR_1);
  VAR_15.next_in = VAR_11;
  VAR_7 = (unsigned int)(VAR_15.next_out - VAR_11);
  VAR_15.avail_in = VAR_7;
  VAR_16 = FUNC_1(&VAR_15, VAR_5);
  FUNC_0(VAR_16, "deflate large 2");


  FUNC_4(&VAR_15, VAR_0, VAR_2);
  VAR_15.next_in = VAR_13;
  VAR_15.avail_in = (unsigned int)VAR_14;
  VAR_16 = FUNC_1(&VAR_15, VAR_5);
  FUNC_0(VAR_16, "deflate large 3");

  VAR_16 = FUNC_1(&VAR_15, VAR_3);
  if (VAR_16 != VAR_6) {
    FUNC_6(VAR_8, "deflate large should report Z_STREAM_END\n");
    FUNC_5(1);
  }
  VAR_16 = FUNC_2(&VAR_15);
  FUNC_0(VAR_16, "deflateEnd");
}
