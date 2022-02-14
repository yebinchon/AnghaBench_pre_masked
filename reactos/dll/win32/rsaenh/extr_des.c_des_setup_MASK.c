
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dk; int ek; } ;
typedef TYPE_1__ des_key ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned char const*,int ,int ) ;

int FUNC_1(const unsigned char *VAR_5, int VAR_6, int VAR_7, des_key *VAR_8)
{
    if (VAR_7 != 0 && VAR_7 != 16) {
        return VAR_1;
    }

    if (VAR_6 != 8) {
        return VAR_0;
    }

    FUNC_0(VAR_5, VAR_4, VAR_8->ek);
    FUNC_0(VAR_5, VAR_3, VAR_8->dk);

    return VAR_2;
}
