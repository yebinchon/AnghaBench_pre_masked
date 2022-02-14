
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symt {int dummy; } ;
struct codeview_type_parse {int module; } ;
struct TYPE_2__ {struct symt symt; } ;


 int VAR_0 ;
 struct symt* FUNC_0 (struct codeview_type_parse*,unsigned int,int ) ;
 TYPE_1__* FUNC_1 (int ,int ,unsigned int,struct symt*,struct symt*) ;

__attribute__((used)) static struct symt* FUNC_2(struct codeview_type_parse* VAR_1,
                                            const char* VAR_2,
                                            unsigned int VAR_3,
                                            unsigned int VAR_4,
                                            unsigned int VAR_5)
{
    struct symt* VAR_6 = FUNC_0(VAR_1, VAR_3, VAR_0);
    struct symt* VAR_7 = FUNC_0(VAR_1, VAR_4, VAR_0);

    return &FUNC_1(VAR_1->module, 0, -VAR_5, VAR_6, VAR_7)->symt;
}
