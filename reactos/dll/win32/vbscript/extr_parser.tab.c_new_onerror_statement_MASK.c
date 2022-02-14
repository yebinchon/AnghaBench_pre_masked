
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int statement_t ;
typedef int parser_ctx_t ;
struct TYPE_3__ {int stat; int resume_next; } ;
typedef TYPE_1__ onerror_statement_t ;
typedef int BOOL ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ,int) ;

__attribute__((used)) static statement_t *FUNC_1(parser_ctx_t *VAR_1, BOOL VAR_2)
{
    onerror_statement_t *VAR_3;

    VAR_3 = FUNC_0(VAR_1, VAR_0, sizeof(*VAR_3));
    if(!VAR_3)
        return ((void*)0);

    VAR_3->resume_next = VAR_2;
    return &VAR_3->stat;
}
