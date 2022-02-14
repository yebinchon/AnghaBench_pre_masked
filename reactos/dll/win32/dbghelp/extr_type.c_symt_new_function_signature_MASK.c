
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tag; } ;
struct symt_function_signature {int call_conv; TYPE_1__ symt; int vchildren; struct symt* rettype; } ;
struct symt {int dummy; } ;
struct module {int pool; } ;
typedef enum CV_call_e { ____Placeholder_CV_call_e } CV_call_e ;


 int VAR_0 ;
 struct symt_function_signature* FUNC_0 (int *,int) ;
 int FUNC_1 (struct module*,TYPE_1__*) ;
 int FUNC_2 (int *,int,int) ;

struct symt_function_signature* FUNC_3(struct module* VAR_1,
                                                            struct symt* VAR_2,
                                                            enum CV_call_e VAR_3)
{
    struct symt_function_signature* VAR_4;

    if ((VAR_4 = FUNC_0(&VAR_1->pool, sizeof(*VAR_4))))
    {
        VAR_4->symt.tag = VAR_0;
        VAR_4->rettype = VAR_2;
        FUNC_2(&VAR_4->vchildren, sizeof(struct symt*), 4);
        VAR_4->call_conv = VAR_3;
        FUNC_1(VAR_1, &VAR_4->symt);
    }
    return VAR_4;
}
