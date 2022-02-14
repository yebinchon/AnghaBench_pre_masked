
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symt {int dummy; } ;
struct codeview_type_parse {int module; } ;
struct TYPE_2__ {struct symt symt; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct symt* FUNC_0 (struct symt*,int ) ;
 struct symt* FUNC_1 (struct codeview_type_parse*,unsigned int,int ) ;
 TYPE_1__* FUNC_2 (int ,struct symt*,int) ;

__attribute__((used)) static struct symt* FUNC_3(struct codeview_type_parse* VAR_2,
                                              struct symt* VAR_3,
                                              unsigned int VAR_4)
{
    struct symt* VAR_5;

    if (VAR_3)
    {
        VAR_3 = FUNC_0(VAR_3, VAR_1);
        return VAR_3;
    }
    VAR_5 = FUNC_1(VAR_2, VAR_4, VAR_0);
    return &FUNC_2(VAR_2->module, VAR_5, sizeof(void *))->symt;
}
