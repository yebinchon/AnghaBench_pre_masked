
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int group; } ;
typedef TYPE_1__ EC_KEY ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,unsigned char const**,long) ;

EC_KEY *FUNC_4(EC_KEY **VAR_4, const unsigned char **VAR_5, long VAR_6)
{
    EC_KEY *VAR_7;

    if (VAR_5 == ((void*)0) || *VAR_5 == ((void*)0)) {
        FUNC_2(VAR_0, VAR_3);
        return ((void*)0);
    }

    if (VAR_4 == ((void*)0) || *VAR_4 == ((void*)0)) {
        if ((VAR_7 = FUNC_1()) == ((void*)0)) {
            FUNC_2(VAR_0, VAR_2);
            return ((void*)0);
        }
    } else
        VAR_7 = *VAR_4;

    if (!FUNC_3(&VAR_7->group, VAR_5, VAR_6)) {
        FUNC_2(VAR_0, VAR_1);
        if (VAR_4 == ((void*)0) || *VAR_4 != VAR_7)
             FUNC_0(VAR_7);
        return ((void*)0);
    }

    if (VAR_4)
        *VAR_4 = VAR_7;

    return VAR_7;
}
