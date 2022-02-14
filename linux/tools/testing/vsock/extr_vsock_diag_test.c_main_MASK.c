
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; void (* run_client ) (unsigned int) ;void (* run_server ) (unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (char const*,char const*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int,char**,int ,int ,int *) ;
 int FUNC_5 () ;
 int VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 unsigned int FUNC_6 (char*) ;
 int FUNC_7 (char*,...) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (char*,char*) ;
 TYPE_1__* VAR_11 ;
 int FUNC_9 () ;

int FUNC_10(int VAR_12, char **VAR_13)
{
 const char *VAR_14 = ((void*)0);
 const char *VAR_15 = ((void*)0);
 int VAR_16 = VAR_4;
 unsigned int VAR_17 = VAR_5;
 int VAR_18;

 FUNC_5();

 for (;;) {
  int VAR_19 = FUNC_4(VAR_12, VAR_13, VAR_8, VAR_6, ((void*)0));

  if (VAR_19 == -1)
   break;

  switch (VAR_19) {
  case 'H':
   VAR_14 = VAR_7;
   break;
  case 'm':
   if (FUNC_8(VAR_7, "client") == 0)
    VAR_16 = VAR_2;
   else if (FUNC_8(VAR_7, "server") == 0)
    VAR_16 = VAR_3;
   else {
    FUNC_3(VAR_9, "--mode must be \"client\" or \"server\"\n");
    return VAR_0;
   }
   break;
  case 'p':
   VAR_17 = FUNC_6(VAR_7);
   break;
  case 'P':
   VAR_15 = VAR_7;
   break;
  case '?':
  default:
   FUNC_9();
  }
 }

 if (!VAR_15)
  FUNC_9();
 if (VAR_16 == VAR_4)
  FUNC_9();
 if (VAR_17 == VAR_5)
  FUNC_9();

 if (!VAR_14) {
  if (VAR_16 != VAR_3)
   FUNC_9();
  VAR_14 = "0.0.0.0";
 }

 FUNC_1(VAR_14, VAR_15, VAR_16 == VAR_3);

 for (VAR_18 = 0; VAR_11[VAR_18].name; VAR_18++) {
  void (*VAR_20)(unsigned int VAR_21);

  FUNC_7("%s...", VAR_11[VAR_18].name);
  FUNC_2(VAR_10);

  if (VAR_16 == VAR_2)
   VAR_20 = VAR_11[VAR_18].run_client;
  else
   VAR_20 = VAR_11[VAR_18].run_server;

  if (VAR_20)
   VAR_20(VAR_17);

  FUNC_7("ok\n");
 }

 FUNC_0();
 return VAR_1;
}
