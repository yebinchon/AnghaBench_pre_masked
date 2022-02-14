
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_4__ {int dwFileAttributes; int cFileName; } ;
typedef TYPE_1__ WIN32_FIND_DATAW ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__,TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int* FUNC_3 (int*) ;
 int FUNC_4 (int*) ;
 scalar_t__ FUNC_5 (int*) ;
 int FUNC_6 (int*,int ) ;
 int FUNC_7 (int*,int*,uintptr_t) ;
 int* FUNC_8 (int*,char*) ;

int FUNC_9(wchar_t* VAR_5, int VAR_6)
{
   wchar_t* VAR_7;
   WIN32_FIND_DATAW VAR_8;
   HANDLE VAR_9;
   BOOLEAN VAR_10 = VAR_4;
   wchar_t VAR_11[VAR_3];
   uintptr_t VAR_12;

   if (VAR_6 && (VAR_7 = FUNC_8(VAR_5, L"*?")))
   {
      VAR_9 = FUNC_1(VAR_5, &VAR_8);
      if (VAR_9 != VAR_2)
      {
         while(VAR_7 != VAR_5 && *VAR_7 != L'/' && *VAR_7 != L'\\')
            VAR_7--;
         VAR_12 = VAR_7 - VAR_5;
         if (*VAR_7 == L'/' || *VAR_7 == L'\\')
            VAR_12++;
         FUNC_7(VAR_11, VAR_5, VAR_12);
         do
         {
            if (!(VAR_8.dwFileAttributes & VAR_1))
            {
               FUNC_6(&VAR_11[VAR_12], VAR_8.cFileName);
               if (FUNC_5(FUNC_3(VAR_11)) < 0)
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
      if (FUNC_5(VAR_5) < 0)
         return -1;
   }
   else
      FUNC_4(VAR_5);
   return 0;
}
