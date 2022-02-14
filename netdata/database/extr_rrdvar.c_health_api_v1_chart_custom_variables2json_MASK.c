
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct variable2json_helper {int options; int counter; int * buf; } ;
struct TYPE_3__ {int rrdvar_root_index; } ;
typedef TYPE_1__ RRDSET ;
typedef int BUFFER ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,void*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int VAR_1 ;

void FUNC_3(RRDSET *VAR_2, BUFFER *VAR_3) {
    struct variable2json_helper VAR_4 = {
            .buf = VAR_3,
            .counter = 0,
            .options = VAR_0
    };

    FUNC_1(VAR_3, "{");
    FUNC_0(&VAR_2->rrdvar_root_index, VAR_1, (void *)&VAR_4);
    FUNC_2(VAR_3, "\n\t\t\t}");
}
