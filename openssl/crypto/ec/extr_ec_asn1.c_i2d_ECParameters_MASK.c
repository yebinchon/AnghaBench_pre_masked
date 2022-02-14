
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int group; } ;
typedef TYPE_1__ EC_KEY ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,unsigned char**) ;

int FUNC_2(const EC_KEY *VAR_2, unsigned char **VAR_3)
{
    if (VAR_2 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }
    return FUNC_1(VAR_2->group, VAR_3);
}
