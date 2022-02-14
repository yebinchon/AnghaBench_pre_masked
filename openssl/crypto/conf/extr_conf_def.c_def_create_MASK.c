
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ (* init ) (int *) ;} ;
typedef TYPE_1__ CONF_METHOD ;
typedef int CONF ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static CONF *FUNC_3(CONF_METHOD *VAR_0)
{
    CONF *VAR_1;

    VAR_1 = FUNC_1(sizeof(*VAR_1));
    if (VAR_1 != ((void*)0))
        if (VAR_0->init(VAR_1) == 0) {
            FUNC_0(VAR_1);
            VAR_1 = ((void*)0);
        }
    return VAR_1;
}
