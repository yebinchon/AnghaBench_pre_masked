
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symt {int dummy; } ;
struct symt_function_signature {struct symt symt; } ;
struct codeview_type_parse {int module; } ;
typedef enum CV_call_e { ____Placeholder_CV_call_e } CV_call_e ;


 int VAR_0 ;
 struct symt_function_signature* FUNC_0 (struct symt*,int ) ;
 struct symt_function_signature* FUNC_1 (int ,int *,int) ;

__attribute__((used)) static struct symt* FUNC_2(struct codeview_type_parse* VAR_1,
                                                struct symt* VAR_2,
                                                enum CV_call_e VAR_3)
{
    struct symt_function_signature* VAR_4;

    if (VAR_2)
    {
        VAR_4 = FUNC_0(VAR_2, VAR_0);
        if (!VAR_4) return ((void*)0);
    }
    else
    {
        VAR_4 = FUNC_1(VAR_1->module, ((void*)0), VAR_3);
    }
    return &VAR_4->symt;
}
