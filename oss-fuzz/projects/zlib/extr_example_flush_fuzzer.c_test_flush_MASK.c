
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned char* next_out; int avail_in; unsigned int avail_out; scalar_t__ total_out; int * next_in; void* opaque; int zfree; int zalloc; } ;
typedef TYPE_1__ z_stream ;
typedef scalar_t__ z_size_t ;
typedef int Bytef ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_4(unsigned char *VAR_8, z_size_t *VAR_9) {
  z_stream VAR_10;
  int VAR_11;
  unsigned int VAR_12 = VAR_5;

  VAR_10.zalloc = VAR_6;
  VAR_10.zfree = VAR_7;
  VAR_10.opaque = (void *)0;

  VAR_11 = FUNC_3(&VAR_10, VAR_0);
  FUNC_0(VAR_11, "deflateInit");

  VAR_10.next_in = (Bytef *)VAR_4;
  VAR_10.next_out = VAR_8;
  VAR_10.avail_in = 3;
  VAR_10.avail_out = (unsigned int)*VAR_9;
  VAR_11 = FUNC_1(&VAR_10, VAR_2);
  FUNC_0(VAR_11, "deflate flush 1");

  VAR_8[3]++;
  VAR_10.avail_in = VAR_12 - 3;

  VAR_11 = FUNC_1(&VAR_10, VAR_1);
  if (VAR_11 != VAR_3) {
    FUNC_0(VAR_11, "deflate flush 2");
  }
  VAR_11 = FUNC_2(&VAR_10);
  FUNC_0(VAR_11, "deflateEnd");

  *VAR_9 = (z_size_t)VAR_10.total_out;
}
