
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int id; } ;
struct TYPE_5__ {unsigned int num; unsigned int* args; } ;
struct TYPE_4__ {unsigned int num; unsigned int* args; } ;
union codeview_reftype {TYPE_3__ generic; TYPE_2__ arglist_v2; TYPE_1__ arglist_v1; } ;
struct symt_function_signature {int rettype; } ;
struct codeview_type_parse {int module; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;


 int FUNC_1 (struct codeview_type_parse*,unsigned int,int ) ;
 union codeview_reftype* FUNC_2 (struct codeview_type_parse*,unsigned int) ;
 int FUNC_3 (int ,struct symt_function_signature*,int ) ;

__attribute__((used)) static void FUNC_4(struct codeview_type_parse* VAR_1,
                                             struct symt_function_signature* VAR_2,
                                             unsigned VAR_3,
                                             unsigned VAR_4)
{
    const union codeview_reftype* VAR_5;

    VAR_2->rettype = FUNC_1(VAR_1, VAR_3, VAR_0);
    if (VAR_4 && (VAR_5 = FUNC_2(VAR_1, VAR_4)))
    {
        unsigned int VAR_6;
        switch (VAR_5->generic.id)
        {
        case 129:
            for (VAR_6 = 0; VAR_6 < VAR_5->arglist_v1.num; VAR_6++)
                FUNC_3(VAR_1->module, VAR_2,
                                                      FUNC_1(VAR_1, VAR_5->arglist_v1.args[VAR_6], VAR_0));
            break;
        case 128:
            for (VAR_6 = 0; VAR_6 < VAR_5->arglist_v2.num; VAR_6++)
                FUNC_3(VAR_1->module, VAR_2,
                                                      FUNC_1(VAR_1, VAR_5->arglist_v2.args[VAR_6], VAR_0));
            break;
        default:
            FUNC_0("Unexpected leaf %x for signature's pmt\n", VAR_5->generic.id);
        }
    }
}
