
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* ptr; char* end; } ;
typedef TYPE_1__ parser_ctx_t ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char) ;
 int FUNC_2 (char) ;

__attribute__((used)) static BOOL FUNC_3(parser_ctx_t *VAR_2)
{
    if(VAR_2->ptr+1 >= VAR_2->end)
        return VAR_0;

    if(*VAR_2->ptr != '/') {
        if(*VAR_2->ptr == '@' && VAR_2->ptr+2 < VAR_2->end && VAR_2->ptr[1] == '*' && VAR_2->ptr[2] == '/') {
            VAR_2->ptr += 3;
            return VAR_1;
        }

        return VAR_0;
    }

    switch(VAR_2->ptr[1]) {
    case '*':
        VAR_2->ptr += 2;
        if(VAR_2->ptr+2 < VAR_2->end && *VAR_2->ptr == '@' && FUNC_2(VAR_2->ptr[1]))
            return VAR_0;
        while(VAR_2->ptr+1 < VAR_2->end && (VAR_2->ptr[0] != '*' || VAR_2->ptr[1] != '/'))
            VAR_2->ptr++;

        if(VAR_2->ptr[0] == '*' && VAR_2->ptr[1] == '/') {
            VAR_2->ptr += 2;
        }else {
            FUNC_0("unexpected end of file (missing end of comment)\n");
            VAR_2->ptr = VAR_2->end;
        }
        break;
    case '/':
        VAR_2->ptr += 2;
        if(VAR_2->ptr+2 < VAR_2->end && *VAR_2->ptr == '@' && FUNC_2(VAR_2->ptr[1]))
            return VAR_0;
        while(VAR_2->ptr < VAR_2->end && !FUNC_1(*VAR_2->ptr))
            VAR_2->ptr++;
        break;
    default:
        return VAR_0;
    }

    return VAR_1;
}
