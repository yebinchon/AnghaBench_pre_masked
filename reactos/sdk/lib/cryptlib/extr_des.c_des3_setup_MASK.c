
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * dk; int * ek; } ;
typedef TYPE_1__ des3_key ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned char const*,int ,int ) ;

int FUNC_1(const unsigned char *VAR_5, int VAR_6, int VAR_7, des3_key *VAR_8)
{
    if(VAR_7 != 0 && VAR_7 != 16) {
        return VAR_1;
    }

    if (VAR_6 != 24) {
        return VAR_0;
    }

    FUNC_0(VAR_5, VAR_4, VAR_8->ek[0]);
    FUNC_0(VAR_5+8, VAR_3, VAR_8->ek[1]);
    FUNC_0(VAR_5+16, VAR_4, VAR_8->ek[2]);

    FUNC_0(VAR_5, VAR_3, VAR_8->dk[2]);
    FUNC_0(VAR_5+8, VAR_4, VAR_8->dk[1]);
    FUNC_0(VAR_5+16, VAR_3, VAR_8->dk[0]);

    return VAR_2;
}
