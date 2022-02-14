
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ position; } ;
struct TYPE_13__ {char token; TYPE_1__ stream; scalar_t__ depth; } ;
typedef TYPE_2__ lex_t ;
typedef int json_t ;
struct TYPE_14__ {int position; } ;
typedef TYPE_3__ json_error_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 char VAR_2 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 int * FUNC_3 (TYPE_2__*,size_t,TYPE_3__*) ;

__attribute__((used)) static json_t *FUNC_4(lex_t *VAR_3, size_t VAR_4, json_error_t *VAR_5)
{
    json_t *VAR_6;

    VAR_3->depth = 0;

    FUNC_2(VAR_3, VAR_5);
    if(!(VAR_4 & VAR_0)) {
        if(VAR_3->token != '[' && VAR_3->token != '{') {
            FUNC_0(VAR_5, VAR_3, "'[' or '{' expected");
            return ((void*)0);
        }
    }

    VAR_6 = FUNC_3(VAR_3, VAR_4, VAR_5);
    if(!VAR_6)
        return ((void*)0);

    if(!(VAR_4 & VAR_1)) {
        FUNC_2(VAR_3, VAR_5);
        if(VAR_3->token != VAR_2) {
            FUNC_0(VAR_5, VAR_3, "end of file expected");
            FUNC_1(VAR_6);
            return ((void*)0);
        }
    }

    if(VAR_5) {

        VAR_5->position = (int)VAR_3->stream.position;
    }

    return VAR_6;
}
