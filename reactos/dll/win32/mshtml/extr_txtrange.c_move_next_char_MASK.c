
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int type; int off; int node; } ;
typedef TYPE_1__ rangepoint_t ;
typedef int nsIDOMNode ;
typedef int nsAString ;
typedef char WCHAR ;
typedef char PRUnichar ;




 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int *,char const**) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (char const) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static WCHAR FUNC_9(rangepoint_t *VAR_2)
{
    rangepoint_t VAR_3;
    nsIDOMNode *VAR_4;
    WCHAR VAR_5 = 0;
    const WCHAR *VAR_6;

    do {
        switch(VAR_2->type) {
        case 128: {
            const PRUnichar *VAR_7;
            nsAString VAR_8;
            WCHAR VAR_9;

            FUNC_2(VAR_2->node, &VAR_8, &VAR_7);
            VAR_6 = VAR_7+VAR_2->off;
            if(!*VAR_6) {
                FUNC_6(&VAR_8);
                break;
            }

            VAR_9 = *VAR_6;
            if(FUNC_5(VAR_9)) {
                while(FUNC_5(*VAR_6))
                    VAR_6++;

                if(VAR_5)
                    FUNC_0(&VAR_3);
                else
                    VAR_5 = ' ';

                VAR_2->off = VAR_6-VAR_7;
                VAR_9 = *VAR_6;
                FUNC_6(&VAR_8);
                if(!VAR_9) {
                    FUNC_3(&VAR_3, VAR_2->node, VAR_2->off);
                    break;
                }

                return VAR_5;
            }else {
                FUNC_6(&VAR_8);
            }


            if(VAR_5) {
                FUNC_0(VAR_2);
                *VAR_2 = VAR_3;
                return VAR_5;
            }

            VAR_2->off++;
            return VAR_9;
        }
        case 129:
            VAR_4 = FUNC_1(VAR_2->node, VAR_2->off);
            if(!VAR_4)
                break;

            if(FUNC_4(VAR_4, VAR_0)) {
                if(VAR_5) {
                    FUNC_7(VAR_4);
                    FUNC_0(VAR_2);
                    *VAR_2 = VAR_3;
                    return VAR_5;
                }

                VAR_5 = '\n';
                FUNC_3(&VAR_3, VAR_2->node, VAR_2->off+1);
            }else if(FUNC_4(VAR_4, VAR_1)) {
                FUNC_7(VAR_4);
                if(VAR_5) {
                    FUNC_0(VAR_2);
                    *VAR_2 = VAR_3;
                    return VAR_5;
                }

                VAR_2->off++;
                return '\n';
            }

            FUNC_7(VAR_4);
        }
    }while(FUNC_8(VAR_2));

    return VAR_5;
}
