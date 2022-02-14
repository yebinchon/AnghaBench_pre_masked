
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_7__ {int hInstance; } ;
struct TYPE_6__ {struct TYPE_6__* up; } ;
struct TYPE_5__ {TYPE_3__* cur; int hwnd; } ;
typedef TYPE_1__ Pane ;
typedef char* LPWSTR ;
typedef int LPARAM ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ) ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char*,int *,int *,char*,char*) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char const*,char*,char*,char*) ;

__attribute__((used)) static BOOL FUNC_8(Pane* VAR_9, LPWSTR VAR_10, LPWSTR VAR_11)
{
 WCHAR VAR_12[VAR_5];
 int VAR_13;

 FUNC_3(VAR_9->cur, VAR_12);

 if (FUNC_0(VAR_2.hInstance, FUNC_1(VAR_3), VAR_9->hwnd, VAR_0, (LPARAM)VAR_12) != VAR_4)
  return VAR_1;

 FUNC_3(VAR_9->cur, VAR_10);


 if (VAR_12[0]!='/' && VAR_12[1]!=':') {
  FUNC_3(VAR_9->cur->up, VAR_11);
  VAR_13 = FUNC_6(VAR_11);

  if (VAR_11[VAR_13-1]!='\\' && VAR_11[VAR_13-1]!='/')
   VAR_11[VAR_13++] = '/';

  FUNC_5(VAR_11+VAR_13, VAR_12);
 } else
  FUNC_5(VAR_11, VAR_12);


 if (FUNC_4(VAR_12)) {
  WCHAR VAR_14[VAR_8], VAR_15[VAR_7];
  static const WCHAR VAR_16[] = {'%','s','/','%','s','%','s','\0'};

  FUNC_2(VAR_10, ((void*)0), ((void*)0), VAR_14, VAR_15);

  FUNC_7(VAR_11, VAR_16, VAR_12, VAR_14, VAR_15);
 }

 return VAR_6;
}
