
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acpi_status ;


 char* VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 char* VAR_11 ;
 int FUNC_2 (int,char**,int ) ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (char*,int ) ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_12 ;
 int FUNC_7 (int ,char*,...) ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 int FUNC_8 (char*,...) ;
 int VAR_19 ;
 int FUNC_9 (char*,char*) ;

__attribute__((used)) static int FUNC_10(int VAR_20, char **VAR_21)
{
 int VAR_22;
 acpi_status VAR_23;



 while ((VAR_22 =
  FUNC_2(VAR_20, VAR_21, VAR_6)) != VAR_1)
  switch (VAR_22) {



  case 'b':

   VAR_13 = VAR_9;
   continue;

  case 'c':

   if (!FUNC_9(VAR_11, "on")) {
    VAR_15 = VAR_9;
   } else if (!FUNC_9(VAR_11, "off")) {
    VAR_15 = VAR_8;
   } else {
    FUNC_7(VAR_19,
     "%s: Cannot handle this switch, please use on|off\n",
     VAR_11);
    return (-1);
   }
   continue;

  case 'h':
  case '?':

   FUNC_4();
   return (1);

  case 'o':

   if (FUNC_6(VAR_11)) {
    return (-1);
   }
   continue;

  case 'r':

   VAR_23 =
       FUNC_3(VAR_11, &VAR_16);
   if (FUNC_1(VAR_23)) {
    FUNC_7(VAR_19,
     "%s: Could not convert to a physical address\n",
     VAR_11);
    return (-1);
   }
   continue;

  case 's':

   VAR_17 = VAR_9;
   continue;

  case 'x':

   if (!VAR_10) {
    VAR_10 = VAR_9;
   } else {
    VAR_14 = VAR_9;
   }
   continue;

  case 'v':

   switch (VAR_11[0]) {
   case '^':

    FUNC_7(VAR_19,
     "%s", FUNC_0(VAR_7));
    return (1);

   case 'd':

    FUNC_7(VAR_19,
     "%s", FUNC_0(VAR_7));
    FUNC_8(VAR_0);
    return (1);

   default:

    FUNC_8("Unknown option: -v%s\n",
           VAR_11);
    return (-1);
   }
   break;

  case 'z':

   VAR_18 = VAR_9;
   FUNC_7(VAR_19, "%s", FUNC_0(VAR_7));
   continue;




  case 'a':

   if (FUNC_5
       (VAR_11, VAR_3)) {
    return (-1);
   }
   break;

  case 'f':

   if (FUNC_5
       (VAR_11, VAR_4)) {
    return (-1);
   }
   break;

  case 'n':

   if (FUNC_5
       (VAR_11, VAR_5)) {
    return (-1);
   }
   break;

  default:

   FUNC_4();
   return (-1);
  }



 if (VAR_12 == 0) {
  if (FUNC_5(((void*)0), VAR_2)) {
   return (-1);
  }
 }

 return (0);
}
