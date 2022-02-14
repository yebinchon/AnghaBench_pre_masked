
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {int d_type; int d_name; } ;
typedef int DIR ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,char*,int) ;
 int * FUNC_6 (int) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,char*) ;
 struct dirent* FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(DIR *VAR_2, unsigned int VAR_3)
{
 struct dirent *VAR_4;

 VAR_4 = FUNC_9(VAR_2);
 FUNC_0(VAR_4->d_type == 130);
 FUNC_0(FUNC_8(VAR_4->d_name, "."));

 VAR_4 = FUNC_9(VAR_2);
 FUNC_0(VAR_4->d_type == 130);
 FUNC_0(FUNC_8(VAR_4->d_name, ".."));

 while ((VAR_4 = FUNC_9(VAR_2))) {
  FUNC_0(!FUNC_8(VAR_4->d_name, "."));
  FUNC_0(!FUNC_8(VAR_4->d_name, ".."));

  switch (VAR_4->d_type) {
   DIR *VAR_5;
   int VAR_6;

  case 128:
   if (VAR_3 == 0 && FUNC_8(VAR_4->d_name, "sysrq-trigger")) {
    FUNC_5(VAR_2, VAR_4->d_name, "h", 1);
   } else if (VAR_3 == 1 && FUNC_8(VAR_4->d_name, "clear_refs")) {
    FUNC_5(VAR_2, VAR_4->d_name, "1", 1);
   } else if (VAR_3 == 3 && FUNC_8(VAR_4->d_name, "clear_refs")) {
    FUNC_5(VAR_2, VAR_4->d_name, "1", 1);
   } else {
    FUNC_4(VAR_2, VAR_4->d_name);
   }
   break;
  case 130:
   VAR_6 = FUNC_7(FUNC_2(VAR_2), VAR_4->d_name, VAR_0|VAR_1);
   if (VAR_6 == -1)
    continue;
   VAR_5 = FUNC_6(VAR_6);
   if (!VAR_5)
    continue;
   FUNC_10(VAR_5, VAR_3 + 1);
   FUNC_1(VAR_5);
   break;
  case 129:
   FUNC_3(VAR_2, VAR_4->d_name);
   break;
  default:
   FUNC_0(0);
  }
 }
}
