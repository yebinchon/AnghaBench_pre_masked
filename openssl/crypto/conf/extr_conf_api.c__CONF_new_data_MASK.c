
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * data; } ;
typedef TYPE_1__ CONF ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int ) ;

int FUNC_1(CONF *VAR_2)
{
    if (VAR_2 == ((void*)0)) {
        return 0;
    }
    if (VAR_2->data == ((void*)0)) {
        VAR_2->data = FUNC_0(VAR_1, VAR_0);
        if (VAR_2->data == ((void*)0))
            return 0;
    }
    return 1;
}
