
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * priv_key; } ;
typedef TYPE_1__ EC_KEY ;


 int * FUNC_0 (unsigned char const*,size_t,int *) ;
 int * FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_3(EC_KEY *VAR_3, const unsigned char *VAR_4, size_t VAR_5)
{
    if (VAR_3->priv_key == ((void*)0))
        VAR_3->priv_key = FUNC_1();
    if (VAR_3->priv_key == ((void*)0)) {
        FUNC_2(VAR_0, VAR_2);
        return 0;
    }
    VAR_3->priv_key = FUNC_0(VAR_4, VAR_5, VAR_3->priv_key);
    if (VAR_3->priv_key == ((void*)0)) {
        FUNC_2(VAR_0, VAR_1);
        return 0;
    }
    return 1;
}
