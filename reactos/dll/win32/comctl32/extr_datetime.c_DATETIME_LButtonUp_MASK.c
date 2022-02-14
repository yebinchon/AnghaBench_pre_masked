
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int calbutton; int hwndSelf; scalar_t__ bCalDepressed; } ;
typedef int LRESULT ;
typedef TYPE_1__ DATETIME_INFO ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static LRESULT
FUNC_1 (DATETIME_INFO *VAR_2)
{
    if(VAR_2->bCalDepressed) {
        VAR_2->bCalDepressed = VAR_0;
        FUNC_0(VAR_2->hwndSelf, &(VAR_2->calbutton), VAR_1);
    }

    return 0;
}
