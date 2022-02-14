
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int implicit_nl_semicolon; int ptr; TYPE_1__* script; } ;
typedef TYPE_2__ parser_ctx_t ;
typedef int WCHAR ;
struct TYPE_9__ {scalar_t__ min_version; int token; int no_nl; int word; } ;
struct TYPE_7__ {scalar_t__ version; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int const**) ;
 int FUNC_3 (int ) ;
 TYPE_3__* VAR_0 ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(parser_ctx_t *VAR_1, const WCHAR **VAR_2)
{
    int VAR_3 = 0, VAR_4 = FUNC_0(VAR_0)-1, VAR_5, VAR_6;

    while(VAR_3 <= VAR_4) {
        VAR_6 = (VAR_3+VAR_4)/2;

        VAR_5 = FUNC_2(VAR_1, VAR_0[VAR_6].word, VAR_2);
        if(!VAR_5) {
            if(VAR_1->script->version < VAR_0[VAR_6].min_version) {
                FUNC_1("ignoring keyword %s in incompatible mode\n",
                      FUNC_3(VAR_0[VAR_6].word));
                VAR_1->ptr -= FUNC_4(VAR_0[VAR_6].word);
                return 0;
            }
            VAR_1->implicit_nl_semicolon = VAR_0[VAR_6].no_nl;
            return VAR_0[VAR_6].token;
        }

        if(VAR_5 > 0)
            VAR_3 = VAR_6+1;
        else
            VAR_4 = VAR_6-1;
    }

    return 0;
}
