
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* meth; } ;
struct TYPE_5__ {int * (* dso_bind_func ) (TYPE_2__*,char const*) ;} ;
typedef int * DSO_FUNC_TYPE ;
typedef TYPE_2__ DSO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int * FUNC_1 (TYPE_2__*,char const*) ;

DSO_FUNC_TYPE FUNC_2(DSO *VAR_4, const char *VAR_5)
{
    DSO_FUNC_TYPE VAR_6 = ((void*)0);

    if ((VAR_4 == ((void*)0)) || (VAR_5 == ((void*)0))) {
        FUNC_0(VAR_0, VAR_3);
        return ((void*)0);
    }
    if (VAR_4->meth->dso_bind_func == ((void*)0)) {
        FUNC_0(VAR_0, VAR_2);
        return ((void*)0);
    }
    if ((VAR_6 = VAR_4->meth->dso_bind_func(VAR_4, VAR_5)) == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return ((void*)0);
    }

    return VAR_6;
}
