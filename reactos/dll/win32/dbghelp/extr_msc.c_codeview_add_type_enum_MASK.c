
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union codeview_reftype {int dummy; } codeview_reftype ;
struct symt {int dummy; } ;
struct symt_enum {struct symt symt; } ;
struct codeview_type_parse {int module; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct symt_enum*,union codeview_reftype const*) ;
 struct symt_enum* FUNC_1 (struct symt*,int ) ;
 int FUNC_2 (struct codeview_type_parse*,unsigned int,int ) ;
 union codeview_reftype* FUNC_3 (struct codeview_type_parse*,unsigned int) ;
 struct symt_enum* FUNC_4 (int ,char const*,int ) ;

__attribute__((used)) static struct symt* FUNC_5(struct codeview_type_parse* VAR_2,
                                           struct symt* VAR_3,
                                           const char* VAR_4,
                                           unsigned VAR_5,
                                           unsigned VAR_6)
{
    struct symt_enum* VAR_7;

    if (VAR_3)
    {
        if (!(VAR_7 = FUNC_1(VAR_3, VAR_1))) return ((void*)0);

    }
    else
    {
        VAR_7 = FUNC_4(VAR_2->module, VAR_4,
                             FUNC_2(VAR_2, VAR_6, VAR_0));
        if (VAR_5)
        {
            const union codeview_reftype* VAR_8;
            VAR_8 = FUNC_3(VAR_2, VAR_5);
            FUNC_0(VAR_2->module, VAR_7, VAR_8);
        }
    }
    return &VAR_7->symt;
}
