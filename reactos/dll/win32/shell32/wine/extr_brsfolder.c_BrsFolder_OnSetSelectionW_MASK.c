
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hwndTreeView; } ;
typedef TYPE_1__ browse_info ;
typedef int LPVOID ;
typedef int LPARAM ;
typedef scalar_t__ HTREEITEM ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ,scalar_t__,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static BOOL FUNC_2(browse_info *VAR_3, LPVOID VAR_4, BOOL VAR_5) {
    HTREEITEM VAR_6;
    BOOL VAR_7;

    if (!VAR_4) return VAR_0;

    VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_5, &VAR_6);
    if (VAR_7)
        FUNC_1(VAR_3->hwndTreeView, VAR_2, VAR_1, (LPARAM)VAR_6 );
    return VAR_7;
}
