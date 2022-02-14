
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int parser_ctx_t ;
struct TYPE_3__ {int token; int word; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_2(parser_ctx_t *VAR_1)
{
    int VAR_2 = 0, VAR_3 = FUNC_0(VAR_0)-1, VAR_4, VAR_5;

    while(VAR_2 <= VAR_3) {
        VAR_5 = (VAR_2+VAR_3)/2;

        VAR_4 = FUNC_1(VAR_1, VAR_0[VAR_5].word);
        if(!VAR_4)
            return VAR_0[VAR_5].token;

        if(VAR_4 > 0)
            VAR_2 = VAR_5+1;
        else
            VAR_3 = VAR_5-1;
    }

    return 0;
}
