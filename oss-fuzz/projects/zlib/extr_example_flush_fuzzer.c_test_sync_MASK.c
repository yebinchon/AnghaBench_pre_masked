
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned char* next_in; int avail_in; unsigned char* next_out; unsigned int avail_out; void* opaque; int zfree; int zalloc; } ;
typedef TYPE_1__ z_stream ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_7(unsigned char *VAR_6, size_t VAR_7, unsigned char *VAR_8,
               size_t VAR_9) {
  int VAR_10;
  z_stream VAR_11;

  VAR_11.zalloc = VAR_4;
  VAR_11.zfree = VAR_5;
  VAR_11.opaque = (void *)0;

  VAR_11.next_in = VAR_6;
  VAR_11.avail_in = 2;

  VAR_10 = FUNC_5(&VAR_11);
  FUNC_0(VAR_10, "inflateInit");

  VAR_11.next_out = VAR_8;
  VAR_11.avail_out = (unsigned int)VAR_9;

  VAR_10 = FUNC_3(&VAR_11, VAR_2);
  FUNC_0(VAR_10, "inflate");

  VAR_11.avail_in = (unsigned int)VAR_7 - 2;
  VAR_10 = FUNC_6(&VAR_11);
  FUNC_0(VAR_10, "inflateSync");

  VAR_10 = FUNC_3(&VAR_11, VAR_1);
  if (VAR_10 != VAR_0) {
    FUNC_2(VAR_3, "inflate should report DATA_ERROR\n");

    FUNC_1(1);
  }
  VAR_10 = FUNC_4(&VAR_11);
  FUNC_0(VAR_10, "inflateEnd");
}
