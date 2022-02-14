
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int version; int entry_type; } ;
typedef TYPE_1__ SCT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int) ;
 int VAR_3 ;

SCT *FUNC_2(void)
{
    SCT *VAR_4 = FUNC_1(sizeof(*VAR_4));

    if (VAR_4 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_2);
        return ((void*)0);
    }

    VAR_4->entry_type = VAR_1;
    VAR_4->version = VAR_3;
    return VAR_4;
}
