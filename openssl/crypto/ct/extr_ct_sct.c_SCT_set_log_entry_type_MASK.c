
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ct_log_entry_type_t ;
struct TYPE_3__ {int entry_type; int validation_status; } ;
typedef TYPE_1__ SCT ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;

int FUNC_1(SCT *VAR_3, ct_log_entry_type_t VAR_4)
{
    VAR_3->validation_status = VAR_2;

    switch (VAR_4) {
    case 128:
    case 129:
        VAR_3->entry_type = VAR_4;
        return 1;
    case 130:
        break;
    }
    FUNC_0(VAR_0, VAR_1);
    return 0;
}
