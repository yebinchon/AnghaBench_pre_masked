
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int horizontalGap; int verticalBorder; int horizontalBorder; } ;
typedef TYPE_1__ STATUS_INFO ;
typedef int INT ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;

__attribute__((used)) static BOOL
FUNC_1 (const STATUS_INFO *VAR_1, INT VAR_2[])
{
    FUNC_0("\n");
    VAR_2[0] = VAR_1->horizontalBorder;
    VAR_2[1] = VAR_1->verticalBorder;
    VAR_2[2] = VAR_1->horizontalGap;

    return VAR_0;
}
