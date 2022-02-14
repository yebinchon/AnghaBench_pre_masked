
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwFileAttributes; int cFileName; } ;
typedef TYPE_1__ WIN32_FIND_DATAA ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__,TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,char*,uintptr_t) ;
 char* FUNC_8 (char*,char*) ;

int FUNC_9(char* VAR_5, int VAR_6)
{
   char* VAR_7;
   WIN32_FIND_DATAA VAR_8;
   HANDLE VAR_9;
   BOOLEAN VAR_10 = VAR_4;
   char VAR_11[VAR_3];
   uintptr_t VAR_12;

   if (VAR_6 && (VAR_7 = FUNC_8(VAR_5, "*?")))
   {
      VAR_9 = FUNC_1(VAR_5, &VAR_8);
      if (VAR_9 != VAR_2)
      {
         while(VAR_7 != VAR_5 && *VAR_7 != '/' && *VAR_7 != '\\')
            VAR_7--;
         VAR_12 = VAR_7 - VAR_5;
         if (*VAR_7 == '/' || *VAR_7 == '\\')
            VAR_12++;
         FUNC_7(VAR_11, VAR_5, VAR_12);
         do
         {
            if (!(VAR_8.dwFileAttributes & VAR_1))
            {
               FUNC_6(&VAR_11[VAR_12], VAR_8.cFileName);
               if (FUNC_4(FUNC_3(VAR_11)) < 0)
               {
                  FUNC_0(VAR_9);
                  return -1;
               }
               VAR_10 = VAR_0;
            }
         }
         while(FUNC_2(VAR_9, &VAR_8));
         FUNC_0(VAR_9);
      }
   }
   if (VAR_10)
   {
      if (FUNC_4(VAR_5) < 0)
         return -1;
   }
   else
      FUNC_5(VAR_5);
   return 0;
}
