
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int height; int minHeight; } ;
typedef TYPE_1__ STATUS_INFO ;
typedef int INT ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static BOOL
FUNC_3 (STATUS_INFO *VAR_2, INT VAR_3)
{
    DWORD VAR_4 = FUNC_0(VAR_0);
    if (VAR_4 & 1) VAR_4--;
    VAR_2->minHeight = FUNC_2(VAR_3, VAR_4);
    VAR_2->height = FUNC_1(VAR_2);

    return VAR_1;
}
