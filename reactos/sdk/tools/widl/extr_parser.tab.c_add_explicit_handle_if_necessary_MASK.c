
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int type; int attrs; } ;
typedef TYPE_1__ var_t ;
typedef int type_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int const*,TYPE_1__*,unsigned char*,unsigned char*) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(const type_t *VAR_1, var_t *VAR_2)
{
    unsigned char VAR_3, VAR_4;


    if (!FUNC_2( VAR_1, VAR_2, &VAR_3, &VAR_4 ) || !VAR_3)
    {



        var_t *VAR_5 = FUNC_4(FUNC_6("IDL_handle"));
        VAR_5->attrs = FUNC_0(((void*)0), FUNC_3(VAR_0));
        VAR_5->type = FUNC_1("handle_t", 0);
        FUNC_5(VAR_2->type, VAR_5);
    }
}
