
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct menu {int sym; } ;






 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (char const*,char const*,int,int,int ) ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* FUNC_2 (struct menu*) ;
 int FUNC_3 (struct menu*) ;
 int FUNC_4 (int *,char*,int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(struct menu *VAR_4)
{
 const char *VAR_5 = FUNC_2(VAR_4);

 while (1) {
  int VAR_6;
  const char *VAR_7;

  switch (FUNC_6(VAR_4->sym)) {
  case 129:
   VAR_7 = VAR_2;
   break;
  case 130:
   VAR_7 = VAR_1;
   break;
  case 128:
   VAR_7 = VAR_3;
   break;
  default:
   VAR_7 = "Internal mconf error!";
  }
  FUNC_0();
  VAR_6 = FUNC_1(VAR_5 ? VAR_5 : "Main Menu",
          VAR_7, 10, 75,
          FUNC_5(VAR_4->sym));
  switch (VAR_6) {
  case 0:
   if (FUNC_7(VAR_4->sym, VAR_0))
    return;
   FUNC_4(((void*)0), "You have made an invalid entry.", 5, 43);
   break;
  case 1:
   FUNC_3(VAR_4);
   break;
  case 131:
   return;
  }
 }
}
