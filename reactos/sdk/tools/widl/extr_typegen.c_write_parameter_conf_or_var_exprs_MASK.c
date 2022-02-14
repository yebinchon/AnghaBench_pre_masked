
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int attrs; int * type; } ;
typedef TYPE_1__ var_t ;
typedef int type_t ;
struct TYPE_9__ {int type; } ;
typedef TYPE_2__ expr_t ;
typedef enum remoting_phase { ____Placeholder_remoting_phase } remoting_phase ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 TYPE_2__* FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int,char*) ;
 TYPE_2__* FUNC_4 (int const*) ;
 TYPE_2__* FUNC_5 (int const*) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int const*) ;
 int * FUNC_9 (int const*) ;
 int FUNC_10 (int const*,int ,int) ;
 int FUNC_11 (int *,TYPE_2__*,int,int,int *,int *,char const*) ;

void FUNC_12(FILE *VAR_6, int VAR_7, const char *VAR_8,
                                       enum remoting_phase VAR_9, const var_t *VAR_10, int VAR_11)
{
    const type_t *VAR_12 = VAR_10->type;

    for (;;)
    {
        switch (FUNC_10(VAR_12, VAR_10->attrs, VAR_4|VAR_3))
        {
        case 140:
            if (FUNC_2(VAR_9))
            {
                if (FUNC_6(VAR_12) &&
                    FUNC_4(VAR_12)->type != VAR_2)
                {
                    FUNC_3(VAR_6, VAR_7, "__frame->_StubMsg.MaxCount = (ULONG_PTR)");
                    FUNC_11(VAR_6, FUNC_4(VAR_12), 1, 1, ((void*)0), ((void*)0), VAR_8);
                    FUNC_0(VAR_6, ";\n\n");
                }
                if (FUNC_7(VAR_12))
                {
                    FUNC_3(VAR_6, VAR_7, "__frame->_StubMsg.Offset = 0;\n");
                    if (VAR_11)
                    {
                        FUNC_3(VAR_6, VAR_7, "__frame->_StubMsg.ActualCount = (ULONG_PTR)");
                        FUNC_11(VAR_6, FUNC_5(VAR_12), 1, 1, ((void*)0), ((void*)0), VAR_8);
                        FUNC_0(VAR_6, ";\n\n");
                    }
                    else
                        FUNC_3(VAR_6, VAR_7, "__frame->_StubMsg.ActualCount = __frame->_StubMsg.MaxCount;\n\n");
                }
            }
            break;
        case 129:
            if (FUNC_8(VAR_12) == VAR_5 &&
                FUNC_2(VAR_9))
            {
                FUNC_3(VAR_6, VAR_7, "__frame->_StubMsg.MaxCount = (ULONG_PTR)");
                FUNC_11(VAR_6, FUNC_1(VAR_10->attrs, VAR_1), 1, 1, ((void*)0), ((void*)0), VAR_8);
                FUNC_0(VAR_6, ";\n\n");
            }
            break;
        case 135:
        {
            expr_t *VAR_13;

            if (FUNC_2(VAR_9) && (VAR_13 = FUNC_1( VAR_10->attrs, VAR_0 )))
            {
                FUNC_3( VAR_6, VAR_7, "__frame->_StubMsg.MaxCount = (ULONG_PTR) " );
                FUNC_11( VAR_6, VAR_13, 1, 1, ((void*)0), ((void*)0), VAR_8 );
                FUNC_0( VAR_6, ";\n\n" );
            }
            break;
        }
        case 133:
            VAR_12 = FUNC_9(VAR_12);
            continue;
        case 134:
        case 128:
        case 138:
        case 137:
        case 131:
        case 139:
        case 136:
        case 130:
        case 132:
            break;
        }
        break;
    }
}
