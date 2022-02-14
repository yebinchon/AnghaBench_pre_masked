
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rk_error ;
typedef int HCRYPTPROV ;
typedef int FILE ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *,int ,int ) ;
 scalar_t__ FUNC_1 (int ,size_t,unsigned char*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,char*) ;
 int FUNC_5 (void*,size_t,int,int *) ;

rk_error FUNC_6(void *VAR_6, size_t VAR_7, int VAR_8) {

  FILE *VAR_9;
  int VAR_10;

  if (VAR_8) {
    VAR_9 = FUNC_4(VAR_2, "rb");
  } else {
    VAR_9 = FUNC_4(VAR_3, "rb");
  }
  if (VAR_9 == ((void*)0)) {
    return VAR_4;
  }
  VAR_10 = FUNC_5(VAR_6, VAR_7, 1, VAR_9);
  FUNC_3(VAR_9);
  if (VAR_10) {
    return VAR_5;
  }
  return VAR_4;
}
