
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * priv_key; int group; } ;
typedef TYPE_1__ EC_KEY ;


 int FUNC_0 (int *,unsigned char*,size_t) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;

size_t FUNC_3(const EC_KEY *VAR_2,
                              unsigned char *VAR_3, size_t VAR_4)
{
    size_t VAR_5;

    VAR_5 = (FUNC_1(VAR_2->group) + 7) / 8;
    if (VAR_2->priv_key == ((void*)0))
        return 0;
    if (VAR_3 == ((void*)0))
        return VAR_5;
    else if (VAR_4 < VAR_5)
        return 0;



    if (FUNC_0(VAR_2->priv_key, VAR_3, VAR_5) == -1) {
        FUNC_2(VAR_0, VAR_1);
        return 0;
    }

    return VAR_5;
}
