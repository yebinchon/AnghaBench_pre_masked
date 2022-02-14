
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,void*,int ,char*,int) ;
 int VAR_2 ;
 int FUNC_1 (int*,int,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (scalar_t__,int,int ,int *) ;
 int FUNC_5 (char*,...) ;
 int VAR_4 ;

int FUNC_6() {
  FILE *VAR_5 = FUNC_3("../obj/panda.bin", "rb");
  int VAR_6 = FUNC_4(VAR_3, 1, VAR_0, VAR_5);
  FUNC_2(VAR_5);
  FUNC_5("read %d\n", VAR_6);
  uint32_t *VAR_7 = (uint32_t *)VAR_3;

  int VAR_8 = VAR_7[0];
  char VAR_9[VAR_2];
  FUNC_1(&VAR_7[1], VAR_8-4, VAR_9);
  FUNC_5("SHA hash done\n");

  if (!FUNC_0(&VAR_4, ((void*)&VAR_7[0]) + VAR_8, VAR_1, VAR_9, VAR_2)) {
    FUNC_5("RSA fail\n");
  } else {
    FUNC_5("RSA match!!!\n");
  }

  return 0;
}
