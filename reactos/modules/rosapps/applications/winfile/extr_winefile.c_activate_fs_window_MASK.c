
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_6__ {scalar_t__ hmdiclient; } ;
struct TYPE_4__ {int fs; } ;
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
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static BOOL FUNC_6(LPCWSTR VAR_8)
{
 HWND VAR_9;


 for(VAR_9=FUNC_0(VAR_4.hmdiclient,VAR_2); VAR_9; VAR_9=FUNC_0(VAR_9, VAR_3)) {
  ChildWnd* VAR_10 = (ChildWnd*) FUNC_1(VAR_9, VAR_1);

  if (VAR_10) {
   if (!FUNC_5(VAR_10->root.fs, VAR_8)) {
    FUNC_3(VAR_4.hmdiclient, VAR_7, (WPARAM)VAR_9, 0);

    if (FUNC_2(VAR_9))
     FUNC_4(VAR_9, VAR_5);

    return VAR_6;
   }
  }
 }

 return VAR_0;
}
