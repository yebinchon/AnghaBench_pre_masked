
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* comp; } ;
typedef TYPE_1__ SSL3_RECORD ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

void FUNC_1(SSL3_RECORD *VAR_0, size_t VAR_1)
{
    unsigned char *VAR_2;
    size_t VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
        VAR_2 = VAR_0[VAR_3].comp;

        FUNC_0(&VAR_0[VAR_3], 0, sizeof(*VAR_0));
        VAR_0[VAR_3].comp = VAR_2;
    }
}
