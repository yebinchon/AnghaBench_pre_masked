
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned char* next_in; unsigned int avail_in; unsigned char* next_out; unsigned int avail_out; scalar_t__ total_out; void* opaque; int zfree; int zalloc; } ;
typedef TYPE_1__ z_stream ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_6(unsigned char *VAR_6, size_t VAR_7,
                        unsigned char *VAR_8, size_t VAR_9) {
  int VAR_10;
  z_stream VAR_11;

  VAR_11.zalloc = VAR_4;
  VAR_11.zfree = VAR_5;
  VAR_11.opaque = (void *)0;

  VAR_11.next_in = VAR_6;
  VAR_11.avail_in = (unsigned int)VAR_7;

  VAR_10 = FUNC_5(&VAR_11);
  FUNC_0(VAR_10, "inflateInit");

  for (;;) {
    VAR_11.next_out = VAR_8;
    VAR_11.avail_out = (unsigned int)VAR_9;
    VAR_10 = FUNC_3(&VAR_11, VAR_0);
    if (VAR_10 == VAR_1)
      break;
    FUNC_0(VAR_10, "large inflate");
  }

  VAR_10 = FUNC_4(&VAR_11);
  FUNC_0(VAR_10, "inflateEnd");

  if (VAR_11.total_out != 2 * VAR_9 + VAR_2) {
    FUNC_2(VAR_3, "bad large inflate: %zu\n", VAR_11.total_out);
    FUNC_1(1);
  }
}
