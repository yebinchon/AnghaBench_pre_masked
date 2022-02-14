
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int hWnd; } ;
typedef TYPE_1__ TreeListData ;
struct TYPE_6__ {int idFrom; int hwndFrom; } ;
typedef TYPE_2__ NMHDR ;
typedef int LRESULT ;
typedef int LPARAM ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static LRESULT FUNC_3(TreeListData *VAR_2, NMHDR *VAR_3) {

 VAR_3->hwndFrom = VAR_2->hWnd;
 VAR_3->idFrom = FUNC_1(VAR_3->hwndFrom, VAR_0);

 return FUNC_2(FUNC_0(VAR_3->hwndFrom), VAR_1, VAR_3->idFrom, (LPARAM)VAR_3);
}
