
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * group; } ;
typedef TYPE_1__ EC_KEY ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,unsigned char const*,long,int *) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

EC_KEY *FUNC_2(EC_KEY **VAR_3, const unsigned char **VAR_4, long VAR_5)
{
    EC_KEY *VAR_6 = ((void*)0);

    if (VAR_3 == ((void*)0) || (*VAR_3) == ((void*)0) || (*VAR_3)->group == ((void*)0)) {



        FUNC_1(VAR_0, VAR_2);
        return 0;
    }
    VAR_6 = *VAR_3;
    if (!FUNC_0(VAR_6, *VAR_4, VAR_5, ((void*)0))) {
        FUNC_1(VAR_0, VAR_1);
        return 0;
    }
    *VAR_4 += VAR_5;
    return VAR_6;
}
