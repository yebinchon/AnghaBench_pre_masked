
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gchar ;





 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int * FUNC_9 (char*,char*,char*,...) ;
 char* FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int*,char***) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (int *) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_20(int VAR_3, char *VAR_4[])
{
 const char *VAR_5;
 char *VAR_6;
 gchar *VAR_7;


 FUNC_14();
 FUNC_12(&VAR_3, &VAR_4);
 FUNC_11();





 VAR_6 = FUNC_10(VAR_0);
 if (VAR_6)
  VAR_7 = FUNC_9(VAR_6, "/scripts/kconfig/gconf.glade", ((void*)0));
 else if (VAR_4[0][0] == '/')
  VAR_7 = FUNC_9(VAR_4[0], ".glade", ((void*)0));
 else
  VAR_7 = FUNC_9(FUNC_8(), "/", VAR_4[0], ".glade", ((void*)0));


 if (VAR_3 > 1 && VAR_4[1][0] == '-') {
  switch (VAR_4[1][1]) {
  case 'a':

   break;
  case 's':
   FUNC_2(((void*)0));
   break;
  case 'h':
  case '?':
   FUNC_19("%s [-s] <config>\n", VAR_4[0]);
   FUNC_6(0);
  }
  VAR_5 = VAR_4[2];
 } else
  VAR_5 = VAR_4[1];

 FUNC_0(VAR_5);
 FUNC_7(&VAR_1);
 FUNC_1(((void*)0));


 FUNC_16(VAR_7);
 FUNC_18();
 FUNC_15();
 FUNC_17();

 switch (VAR_2) {
 case 129:
  FUNC_5();
  break;
 case 128:
  FUNC_3();
  break;
 case 130:
  FUNC_4(&VAR_1);
  break;
 }

 FUNC_13();

 return 0;
}
