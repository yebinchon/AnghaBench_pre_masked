
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int len; } ;
struct TYPE_6__ {unsigned char* list; } ;
union codeview_reftype {TYPE_2__ generic; TYPE_1__ fieldlist; } ;
struct TYPE_10__ {int id; } ;
struct TYPE_9__ {int value; } ;
struct TYPE_8__ {int value; } ;
union codeview_fieldtype {TYPE_5__ generic; TYPE_4__ enumerate_v3; TYPE_3__ enumerate_v1; } ;
struct symt_enum {int dummy; } ;
struct p_string {int namelen; } ;
struct module {int dummy; } ;
typedef unsigned char BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;


 int VAR_1 ;
 int FUNC_1 (int*,int *) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (struct module*,struct symt_enum*,char const*,int) ;
 char const* FUNC_4 (struct p_string const*) ;

__attribute__((used)) static BOOL FUNC_5(struct module* VAR_2,
                                              struct symt_enum* VAR_3,
                                              const union codeview_reftype* VAR_4)
{
    const unsigned char* VAR_5 = VAR_4->fieldlist.list;
    const unsigned char* VAR_6 = (const BYTE*)VAR_4 + VAR_4->generic.len + 2;
    const union codeview_fieldtype* VAR_7;

    while (VAR_5 < VAR_6)
    {
        if (*VAR_5 >= 0xf0)
        {
            VAR_5 += *VAR_5 & 0x0f;
            continue;
        }

        VAR_7 = (const union codeview_fieldtype*)VAR_5;

        switch (VAR_7->generic.id)
        {
        case 129:
        {
            int VAR_8, VAR_9 = FUNC_1(&VAR_8, &VAR_7->enumerate_v1.value);
            const struct p_string* VAR_10 = (const struct p_string*)((const unsigned char*)&VAR_7->enumerate_v1.value + VAR_9);

            FUNC_3(VAR_2, VAR_3, FUNC_4(VAR_10), VAR_8);
            VAR_5 += 2 + 2 + VAR_9 + (1 + VAR_10->namelen);
            break;
        }
        case 128:
        {
            int VAR_11, VAR_12 = FUNC_1(&VAR_11, &VAR_7->enumerate_v3.value);
            const char* VAR_13 = (const char*)&VAR_7->enumerate_v3.value + VAR_12;

            FUNC_3(VAR_2, VAR_3, VAR_13, VAR_11);
            VAR_5 += 2 + 2 + VAR_12 + (1 + FUNC_2(VAR_13));
            break;
        }

        default:
            FUNC_0("Unsupported type %04x in ENUM field list\n", VAR_7->generic.id);
            return VAR_0;
        }
    }
    return VAR_1;
}
