
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t stack_top; TYPE_1__* stack; } ;
typedef TYPE_2__ json_stream ;
typedef enum json_type { ____Placeholder_json_type } json_type ;
struct TYPE_5__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,char*,int) ;

__attribute__((used)) static enum json_type
FUNC_1(json_stream *VAR_4, int VAR_5, enum json_type VAR_6)
{
    if (VAR_4->stack == ((void*)0) || VAR_4->stack[VAR_4->stack_top].type != VAR_6) {
        FUNC_0(VAR_4, "unexpected byte, '%c'", VAR_5);
        return VAR_2;
    }
    VAR_4->stack_top--;
    return VAR_6 == VAR_0 ? VAR_1 : VAR_3;
}
