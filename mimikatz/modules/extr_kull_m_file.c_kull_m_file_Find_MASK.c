
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char wchar_t ;
struct TYPE_4__ {char* cFileName; int dwFileAttributes; } ;
typedef TYPE_1__ WIN32_FIND_DATA ;
typedef char* PWCHAR ;
typedef int PVOID ;
typedef scalar_t__ (* PKULL_M_FILE_FIND_CALLBACK ) (int,char*,char*,int ) ;
typedef char* PCWCHAR ;
typedef int HANDLE ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ,int) ;
 int FUNC_5 (char*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,...) ;
 scalar_t__ FUNC_8 (char*,int,char*) ;
 scalar_t__ FUNC_9 (char*,int,char*) ;
 scalar_t__ FUNC_10 (char*) ;

BOOL FUNC_11(PCWCHAR VAR_7, PCWCHAR VAR_8, BOOL VAR_9 , DWORD VAR_10, BOOL VAR_11, PKULL_M_FILE_FIND_CALLBACK VAR_12, PVOID VAR_13)
{
 BOOL VAR_14 = VAR_0;
 DWORD VAR_15;
 HANDLE VAR_16;
 WIN32_FIND_DATA VAR_17;
 PWCHAR VAR_18;

 VAR_15 = FUNC_3(VAR_7);
 if((VAR_15 != VAR_2) && (VAR_15 & VAR_1))
 {
  if(VAR_11 && !VAR_10)
  {
   FUNC_7(L"%*s" L"Directory \'%s\'", VAR_10 << 1, L"", VAR_7);
   if(VAR_8)
    FUNC_7(L" (%s)", VAR_8);
   FUNC_7(L"\n");
  }
  if((VAR_18 = (wchar_t *) FUNC_4(VAR_4, VAR_5 * sizeof(wchar_t))))
  {
   if(FUNC_9(VAR_18, VAR_5, VAR_7) == 0)
   {
    if(FUNC_8(VAR_18, VAR_5, L"\\") == 0)
    {
     if(FUNC_8(VAR_18, VAR_5, VAR_8 ? VAR_8 : L"*") == 0)
     {
      VAR_16 = FUNC_1(VAR_18, &VAR_17);
      if(VAR_16 != VAR_3)
      {
       do
       {
        if(FUNC_6(VAR_17.cFileName, L".") && FUNC_6(VAR_17.cFileName, L".."))
        {
         if(FUNC_9(VAR_18, VAR_5, VAR_7) == 0)
         {
          if(FUNC_8(VAR_18, VAR_5, L"\\") == 0)
          {
           VAR_15 = (DWORD) FUNC_10(VAR_18);
           if(FUNC_8(VAR_18, VAR_5, VAR_17.cFileName) == 0)
           {
            if(VAR_11)
             FUNC_7(L"%*s" L"%3u %c|'%s\'\n", VAR_10 << 1, L"", VAR_10, (VAR_17.dwFileAttributes & VAR_1) ? L'D' : L'F' , VAR_17.cFileName);
            if(!(VAR_17.dwFileAttributes & VAR_1))
            {
             if(VAR_12)
              VAR_14 = VAR_12(VAR_10, VAR_18, VAR_18 + VAR_15, VAR_13);
            }
            else if(VAR_9 && VAR_17.cFileName)
             VAR_14 = FUNC_11(VAR_18, VAR_8, VAR_6, VAR_10 + 1, VAR_11, VAR_12, VAR_13);
           }
          }
         }
        }
       } while(!VAR_14 && FUNC_2(VAR_16, &VAR_17));
       FUNC_0(VAR_16);
      }
     }
    }
   }
  }
  FUNC_5(VAR_18);
 }
 return VAR_14;
}
