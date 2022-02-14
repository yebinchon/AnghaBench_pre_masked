
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int compiler_ctx_t ;
struct TYPE_9__ {unsigned int length; TYPE_4__* element_list; } ;
typedef TYPE_3__ array_literal_expression_t ;
struct TYPE_10__ {int expr; scalar_t__ elision; struct TYPE_10__* next; } ;
typedef TYPE_4__ array_element_t ;
struct TYPE_8__ {TYPE_1__* arg; } ;
struct TYPE_11__ {TYPE_2__ u; } ;
struct TYPE_7__ {unsigned int uint; } ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ) ;
 TYPE_5__* FUNC_2 (int *,unsigned int) ;
 unsigned int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,unsigned int) ;

__attribute__((used)) static HRESULT FUNC_5(compiler_ctx_t *VAR_4, array_literal_expression_t *VAR_5)
{
    unsigned VAR_6 = 0;
    array_element_t *VAR_7;
    unsigned VAR_8;
    HRESULT VAR_9;

    VAR_8 = FUNC_3(VAR_4, VAR_0);

    for(VAR_7 = VAR_5->element_list; VAR_7; VAR_7 = VAR_7->next) {
        VAR_6 += VAR_7->elision;

        VAR_9 = FUNC_1(VAR_4, VAR_7->expr, VAR_3);
        if(FUNC_0(VAR_9))
            return VAR_9;

        VAR_9 = FUNC_4(VAR_4, VAR_1, VAR_6);
        if(FUNC_0(VAR_9))
            return VAR_9;

        VAR_6++;
    }

    FUNC_2(VAR_4, VAR_8)->u.arg[0].uint = VAR_6 + VAR_5->length;
    return VAR_2;
}
