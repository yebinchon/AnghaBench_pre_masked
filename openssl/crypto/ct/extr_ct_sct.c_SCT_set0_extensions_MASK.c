
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* ext; size_t ext_len; int validation_status; } ;
typedef TYPE_1__ SCT ;


 int FUNC_0 (unsigned char*) ;
 int VAR_0 ;

void FUNC_1(SCT *VAR_1, unsigned char *VAR_2, size_t VAR_3)
{
    FUNC_0(VAR_1->ext);
    VAR_1->ext = VAR_2;
    VAR_1->ext_len = VAR_3;
    VAR_1->validation_status = VAR_0;
}
