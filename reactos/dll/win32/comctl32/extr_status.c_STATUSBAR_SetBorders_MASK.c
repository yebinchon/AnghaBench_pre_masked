
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Self; int horizontalGap; int verticalBorder; int horizontalBorder; } ;
typedef TYPE_1__ STATUS_INFO ;
typedef int INT ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;

__attribute__((used)) static BOOL
FUNC_2 (STATUS_INFO *VAR_2, const INT VAR_3[])
{
    FUNC_1("\n");
    VAR_2->horizontalBorder = VAR_3[0];
    VAR_2->verticalBorder = VAR_3[1];
    VAR_2->horizontalGap = VAR_3[2];
    FUNC_0(VAR_2->Self, ((void*)0), VAR_0);

    return VAR_1;
}
