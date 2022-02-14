
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int st_mode; } ;
typedef TYPE_1__ zend_stat_t ;
struct TYPE_5__ {char* executable_location; } ;
typedef char* PG ;


 scalar_t__ FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int) ;
 char* FUNC_10 (char*,char*,char**) ;
 TYPE_2__ VAR_2 ;
 int FUNC_11 (char*,int,char*,char*,char*) ;
 int FUNC_12 (char*,char) ;

__attribute__((used)) static void FUNC_13(void)
{
 char *VAR_3 = ((void*)0);







 if (VAR_2.executable_location) {
  VAR_3 = (char *)FUNC_9(VAR_0);
  if (VAR_3 && !FUNC_12(VAR_2.executable_location, '/')) {
   char *VAR_4, *VAR_5;
   int VAR_6 = 0;

   if ((VAR_4 = FUNC_8("PATH")) != ((void*)0)) {
    char *VAR_7, VAR_8[VAR_0];
    char *VAR_9 = ((void*)0);
    zend_stat_t VAR_10;

    VAR_5 = FUNC_6(VAR_4);
    VAR_7 = FUNC_10(VAR_5, ":", &VAR_9);

    while (VAR_7) {
     FUNC_11(VAR_8, VAR_0, "%s/%s", VAR_7, VAR_2.executable_location);
     if (FUNC_3(VAR_8, VAR_3) && !FUNC_2(VAR_3, VAR_1) && FUNC_4(VAR_3, &VAR_10) == 0 && FUNC_1(VAR_10.st_mode)) {
      VAR_6 = 1;
      break;
     }
     VAR_7 = FUNC_10(((void*)0), ":", &VAR_9);
    }
    FUNC_5(VAR_5);
   }
   if (!VAR_6) {
    FUNC_7(VAR_3);
    VAR_3 = ((void*)0);
   }
  } else if (!FUNC_3(VAR_2.executable_location, VAR_3) || FUNC_2(VAR_3, VAR_1)) {
   FUNC_7(VAR_3);
   VAR_3 = ((void*)0);
  }
 }

 PG(VAR_11) = VAR_3;
}
