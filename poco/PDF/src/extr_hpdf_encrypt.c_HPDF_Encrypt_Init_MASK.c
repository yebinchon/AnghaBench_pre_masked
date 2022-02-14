
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int key_len; int permission; int user_passwd; int owner_passwd; int mode; } ;
typedef int HPDF_Encrypt_Rec ;
typedef TYPE_1__* HPDF_Encrypt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void
FUNC_2 (HPDF_Encrypt VAR_8)
{
    FUNC_1 (VAR_8, 0, sizeof(HPDF_Encrypt_Rec));
    VAR_8->mode = VAR_4;
    VAR_8->key_len = 5;
    FUNC_0 (VAR_8->owner_passwd, VAR_5, VAR_6);
    FUNC_0 (VAR_8->user_passwd, VAR_5, VAR_6);
    VAR_8->permission = VAR_3 | VAR_2 |
        VAR_0 | VAR_1 | VAR_7;
}
