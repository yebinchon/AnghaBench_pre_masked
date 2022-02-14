
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mask; } ;
typedef int LPARAM ;
typedef int HWND ;
typedef TYPE_1__ HDITEMA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int,char*) ;

__attribute__((used)) static void FUNC_3(HWND VAR_3, HDITEMA *VAR_4, int VAR_5, HDITEMA *VAR_6)
{
    FUNC_2(FUNC_0(VAR_3, VAR_2, 0, (LPARAM)VAR_4)!=-1, "Adding item failed\n");
    FUNC_1(VAR_6, sizeof(HDITEMA));
    VAR_6->mask = VAR_5;
    FUNC_2(FUNC_0(VAR_3, VAR_1, 0, (LPARAM)VAR_6)!=0, "Getting item data failed\n");
    FUNC_2(FUNC_0(VAR_3, VAR_0, 0, 0)!=0, "Deleting item failed\n");
}
