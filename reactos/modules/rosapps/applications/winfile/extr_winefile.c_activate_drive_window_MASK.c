
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WPARAM ;
typedef int WCHAR ;
struct TYPE_6__ {scalar_t__ hmdiclient; } ;
struct TYPE_4__ {int path; } ;
struct TYPE_5__ {TYPE_1__ root; } ;
typedef int LPCWSTR ;
typedef scalar_t__ HWND ;
typedef TYPE_2__ ChildWnd ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 TYPE_3__ VAR_4 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_3 (scalar_t__,int ,int ,int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ,int *,int ,int ,int ) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static BOOL FUNC_7(LPCWSTR VAR_9)
{
 WCHAR VAR_10[VAR_8], VAR_11[VAR_8];
 HWND VAR_12;

 FUNC_5(VAR_9, VAR_10, 0, 0, 0);


 for(VAR_12=FUNC_0(VAR_4.hmdiclient,VAR_2); VAR_12; VAR_12=FUNC_0(VAR_12, VAR_3)) {
  ChildWnd* VAR_13 = (ChildWnd*)FUNC_1(VAR_12, VAR_1);

  if (VAR_13) {
   FUNC_5(VAR_13->root.path, VAR_11, 0, 0, 0);

   if (!FUNC_6(VAR_11, VAR_10)) {
    FUNC_3(VAR_4.hmdiclient, VAR_7, (WPARAM)VAR_12, 0);

    if (FUNC_2(VAR_12))
     FUNC_4(VAR_12, VAR_5);

    return VAR_6;
   }
  }
 }

 return VAR_0;
}
