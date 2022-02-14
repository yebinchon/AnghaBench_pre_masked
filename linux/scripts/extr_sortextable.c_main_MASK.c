
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int * VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;

int
FUNC_4(int VAR_5, char *VAR_6[])
{
 int VAR_7 = 0;
 int VAR_8;

 if (VAR_5 < 2) {
  FUNC_2(VAR_4, "usage: sortextable vmlinux...\n");
  return 0;
 }


 for (VAR_8 = 1; VAR_8 < VAR_5; VAR_8++) {
  char *VAR_9 = VAR_6[VAR_8];
  int const VAR_10 = FUNC_3(VAR_2);

  switch (VAR_10) {
  default:
   FUNC_2(VAR_4, "internal error: %s\n", VAR_9);
   FUNC_1(1);
   break;
  case 129:

   VAR_1 = -1;
   VAR_0 = ((void*)0);
   VAR_3 = 1;
   FUNC_0(VAR_9);
   break;
  case 130:
   ++VAR_7;
   break;
  case 128:

   break;
  }
 }
 return !!VAR_7;
}
