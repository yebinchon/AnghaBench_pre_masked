
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwFileAttributes; int cFileName; } ;
typedef TYPE_1__ WIN32_FIND_DATA ;
typedef int TCHAR ;
typedef int * LPTSTR ;
typedef scalar_t__ HANDLE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *,int ,TYPE_1__*,int ,int *,int ) ;
 int FUNC_2 (scalar_t__,TYPE_1__*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int VAR_7 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int ,int *) ;

BOOL
FUNC_9(LPTSTR VAR_8)
{
  WIN32_FIND_DATA VAR_9;
  TCHAR VAR_10[VAR_6];
  HANDLE VAR_11;
  BOOL VAR_12;

  if(!VAR_0)
  {
    FUNC_8 (FUNC_4("Processing %s ...\n"), VAR_8);
  }

  FUNC_7 (VAR_10, VAR_8);
  FUNC_5 (VAR_10, FUNC_4("\\*.*"));

  VAR_11 = FUNC_1 (VAR_10,
    VAR_3,
    &VAR_9,
    VAR_4,
    ((void*)0),
    0);
  if (VAR_11 != VAR_5)
  {
    VAR_12 = VAR_7;
    while (VAR_12)
    {
     if ((VAR_9.dwFileAttributes & VAR_2)
      && (FUNC_6 (VAR_9.cFileName, FUNC_4(".")) != 0)
      && (FUNC_6 (VAR_9.cFileName, FUNC_4("..")) != 0)
      && (FUNC_6 (VAR_9.cFileName, FUNC_4("CVS")) != 0)
      && (FUNC_6 (VAR_9.cFileName, FUNC_4(".svn")) != 0))
   {
     FUNC_7 (VAR_10, VAR_8);
     FUNC_5 (VAR_10, FUNC_4("\\"));
     FUNC_5 (VAR_10, VAR_9.cFileName);
       if (!FUNC_9 (VAR_10))
          return VAR_1;
       if (!FUNC_3 (VAR_10))
          return VAR_1;
   }
      VAR_12 = FUNC_2 (VAR_11, &VAR_9);
    }
    FUNC_0 (VAR_11);
  }
  return VAR_7;
}
