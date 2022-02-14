
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int ofc ;
struct TYPE_10__ {int lStructSize; int nFilterIndex; int Flags; int nMaxFile; struct TYPE_10__* lpstrFile; int lpstrDefExt; int lpstrTitle; int lpstrFilter; } ;
typedef TYPE_1__ TCHAR ;
typedef TYPE_1__ OPENFILENAME ;
typedef int FileName ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_1 (int *,int *,TYPE_1__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int ,int *,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int ,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

int
FUNC_7(int VAR_10, TCHAR *VAR_11[])
{
 TCHAR VAR_12[VAR_4 + 32];

 if (VAR_10 <= 1)
 {
  TCHAR VAR_13[VAR_4 + 1];
  OPENFILENAME VAR_14;
  int VAR_15;

  FUNC_4(&VAR_14, sizeof(VAR_14));
  FUNC_4(VAR_13, VAR_4 + 1);
  VAR_14.lStructSize = sizeof(VAR_14);
  VAR_14.lpstrFilter = VAR_1;
  VAR_14.nFilterIndex = 1;
  VAR_14.lpstrTitle = VAR_2;
  VAR_14.Flags = VAR_7 | VAR_8 | VAR_9;
  VAR_14.lpstrDefExt = VAR_0;
  VAR_14.lpstrFile = VAR_13;
  VAR_14.nMaxFile = sizeof(VAR_13) / sizeof(TCHAR);

  VAR_15 = FUNC_0(&VAR_14);

  if (VAR_15 == 0)
   return 1;

  FUNC_5(VAR_12, VAR_3, VAR_13);
 }
 else
 {
  if (FUNC_6(VAR_11[1]) > VAR_4)
  {
   FUNC_2(((void*)0), FUNC_3("Command line too long to be a valid file name"), ((void*)0), VAR_6 | VAR_5);
   return 2;
  }
  FUNC_5(VAR_12, VAR_3, VAR_11[1]);
 }

 FUNC_1(((void*)0), ((void*)0), VAR_12, 0);

 return 0;
}
