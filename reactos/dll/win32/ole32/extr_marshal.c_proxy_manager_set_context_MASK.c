
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proxy_manager {int dest_context; int dest_context_data; } ;
typedef int PLONG ;
typedef int MSHCTX ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int *,void*) ;






__attribute__((used)) static inline void FUNC_2(struct proxy_manager *VAR_0, MSHCTX VAR_1, void *VAR_2)
{
    MSHCTX VAR_3;
    MSHCTX VAR_4;

    do
    {
        VAR_3 = VAR_0->dest_context;
        VAR_4 = VAR_3;


        switch (VAR_3)
        {
        case 130:
            VAR_4 = VAR_1;
            break;
        case 132:
            switch (VAR_1)
            {
            case 130:
                break;
            default:
                VAR_4 = VAR_1;
            }
            break;
        case 129:
            switch (VAR_1)
            {
            case 130:
            case 132:
                break;
            default:
                VAR_4 = VAR_1;
            }
            break;
        case 128:
            switch (VAR_1)
            {
            case 131:
                VAR_4 = VAR_1;
                break;
            default:
                break;
            }
            break;
        default:
            break;
        }

        if (VAR_3 == VAR_4) break;

        VAR_4 = FUNC_0((PLONG)&VAR_0->dest_context, VAR_4, VAR_3);
    } while (VAR_4 != VAR_3);

    if (VAR_2)
        FUNC_1(&VAR_0->dest_context_data, VAR_2);
}
