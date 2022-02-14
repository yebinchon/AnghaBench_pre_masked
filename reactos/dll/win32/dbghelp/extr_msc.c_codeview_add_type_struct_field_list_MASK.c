
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_74__ TYPE_9__ ;
typedef struct TYPE_73__ TYPE_8__ ;
typedef struct TYPE_72__ TYPE_7__ ;
typedef struct TYPE_71__ TYPE_6__ ;
typedef struct TYPE_70__ TYPE_5__ ;
typedef struct TYPE_69__ TYPE_4__ ;
typedef struct TYPE_68__ TYPE_3__ ;
typedef struct TYPE_67__ TYPE_37__ ;
typedef struct TYPE_66__ TYPE_36__ ;
typedef struct TYPE_65__ TYPE_35__ ;
typedef struct TYPE_64__ TYPE_34__ ;
typedef struct TYPE_63__ TYPE_33__ ;
typedef struct TYPE_62__ TYPE_32__ ;
typedef struct TYPE_61__ TYPE_31__ ;
typedef struct TYPE_60__ TYPE_30__ ;
typedef struct TYPE_59__ TYPE_2__ ;
typedef struct TYPE_58__ TYPE_29__ ;
typedef struct TYPE_57__ TYPE_28__ ;
typedef struct TYPE_56__ TYPE_27__ ;
typedef struct TYPE_55__ TYPE_26__ ;
typedef struct TYPE_54__ TYPE_25__ ;
typedef struct TYPE_53__ TYPE_24__ ;
typedef struct TYPE_52__ TYPE_23__ ;
typedef struct TYPE_51__ TYPE_22__ ;
typedef struct TYPE_50__ TYPE_21__ ;
typedef struct TYPE_49__ TYPE_20__ ;
typedef struct TYPE_48__ TYPE_1__ ;
typedef struct TYPE_47__ TYPE_19__ ;
typedef struct TYPE_46__ TYPE_18__ ;
typedef struct TYPE_45__ TYPE_17__ ;
typedef struct TYPE_44__ TYPE_16__ ;
typedef struct TYPE_43__ TYPE_15__ ;
typedef struct TYPE_42__ TYPE_14__ ;
typedef struct TYPE_41__ TYPE_13__ ;
typedef struct TYPE_40__ TYPE_12__ ;
typedef struct TYPE_39__ TYPE_11__ ;
typedef struct TYPE_38__ TYPE_10__ ;


struct TYPE_61__ {int len; } ;
struct TYPE_60__ {unsigned char* list; } ;
union codeview_reftype {TYPE_31__ generic; TYPE_30__ fieldlist; } ;
struct TYPE_62__ {int id; } ;
struct TYPE_58__ {unsigned int ref; } ;
struct TYPE_57__ {unsigned int ref; } ;
struct TYPE_56__ {int attribute; char const* name; } ;
struct TYPE_55__ {char const* name; } ;
struct TYPE_53__ {int namelen; } ;
struct TYPE_54__ {int attribute; TYPE_24__ p_name; } ;
struct TYPE_51__ {int namelen; } ;
struct TYPE_52__ {TYPE_22__ p_name; } ;
struct TYPE_49__ {int namelen; } ;
struct TYPE_50__ {int attribute; TYPE_20__ p_name; } ;
struct TYPE_46__ {int namelen; } ;
struct TYPE_47__ {TYPE_18__ p_name; } ;
struct TYPE_45__ {char const* name; } ;
struct TYPE_43__ {int namelen; } ;
struct TYPE_44__ {TYPE_15__ p_name; } ;
struct TYPE_41__ {int namelen; } ;
struct TYPE_42__ {TYPE_13__ p_name; } ;
struct TYPE_40__ {char const* name; } ;
struct TYPE_38__ {int namelen; } ;
struct TYPE_39__ {TYPE_10__ p_name; } ;
struct TYPE_73__ {int namelen; } ;
struct TYPE_74__ {TYPE_8__ p_name; } ;
struct TYPE_72__ {char const* name; } ;
struct TYPE_70__ {int namelen; } ;
struct TYPE_71__ {TYPE_5__ p_name; } ;
struct TYPE_68__ {int namelen; } ;
struct TYPE_69__ {TYPE_3__ p_name; } ;
struct TYPE_59__ {unsigned short const offset; int type; } ;
struct TYPE_48__ {unsigned short const offset; int type; } ;
struct TYPE_67__ {unsigned short const offset; int type; } ;
struct TYPE_66__ {unsigned short const vbpoff; } ;
struct TYPE_65__ {unsigned short const vbpoff; } ;
struct TYPE_64__ {unsigned short const offset; } ;
struct TYPE_63__ {unsigned short const offset; } ;
union codeview_fieldtype {TYPE_32__ generic; TYPE_29__ index_v2; TYPE_28__ index_v1; TYPE_27__ onemethod_v3; TYPE_26__ onemethod_virt_v3; TYPE_25__ onemethod_v2; TYPE_23__ onemethod_virt_v2; TYPE_21__ onemethod_v1; TYPE_19__ onemethod_virt_v1; TYPE_17__ nesttype_v3; TYPE_16__ nesttype_v2; TYPE_14__ nesttype_v1; TYPE_12__ method_v3; TYPE_11__ method_v2; TYPE_9__ method_v1; TYPE_7__ stmember_v3; TYPE_6__ stmember_v2; TYPE_4__ stmember_v1; TYPE_2__ member_v3; TYPE_1__ member_v2; TYPE_37__ member_v1; TYPE_36__ vbclass_v2; TYPE_35__ vbclass_v1; TYPE_34__ bclass_v2; TYPE_33__ bclass_v1; } ;
struct symt_udt {int dummy; } ;
struct p_string {int namelen; } ;
struct codeview_type_parse {int dummy; } ;
typedef unsigned char BYTE ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int FUNC_1 (struct codeview_type_parse*,struct symt_udt*,char const*,int,int ) ;
 union codeview_reftype* FUNC_2 (struct codeview_type_parse*,unsigned int) ;
 int FUNC_3 (int*,unsigned short const*) ;
 int FUNC_4 (char const*) ;
 char const* FUNC_5 (struct p_string const*) ;

__attribute__((used)) static int FUNC_6(struct codeview_type_parse* VAR_2,
                                               struct symt_udt* VAR_3,
                                               unsigned VAR_4)
{
    const unsigned char* VAR_5;
    const unsigned char* VAR_6;
    int VAR_7, VAR_8;
    const struct p_string* VAR_9;
    const char* VAR_10;
    const union codeview_reftype*VAR_11;
    const union codeview_fieldtype* VAR_12;

    if (!VAR_4) return VAR_1;
    VAR_11 = FUNC_2(VAR_2, VAR_4);
    VAR_5 = VAR_11->fieldlist.list;
    VAR_6 = (const BYTE*)VAR_11 + VAR_11->generic.len + 2;

    while (VAR_5 < VAR_6)
    {
        if (*VAR_5 >= 0xf0)
        {
            VAR_5 += *VAR_5 & 0x0f;
            continue;
        }

        VAR_12 = (const union codeview_fieldtype*)VAR_5;

        switch (VAR_12->generic.id)
        {
        case 152:
            VAR_8 = FUNC_3(&VAR_7, &VAR_12->bclass_v1.offset);



            VAR_5 += 2 + 2 + 2 + VAR_8;
            break;

        case 151:
            VAR_8 = FUNC_3(&VAR_7, &VAR_12->bclass_v2.offset);



            VAR_5 += 2 + 2 + 4 + VAR_8;
            break;

        case 131:
        case 148:
            {
                const unsigned short int* VAR_13;
                int VAR_14, VAR_15;
                VAR_8 = FUNC_3(&VAR_7, &VAR_12->vbclass_v1.vbpoff);
                VAR_13 = (const unsigned short int*)((const char*)&VAR_12->vbclass_v1.vbpoff + VAR_8);
                VAR_15 = FUNC_3(&VAR_14, VAR_13);



                VAR_5 += 2 + 2 + 2 + 2 + VAR_8 + VAR_15;
            }
            break;

        case 130:
        case 147:
            {
                const unsigned short int* VAR_16;
                int VAR_17, VAR_18;
                VAR_8 = FUNC_3(&VAR_7, &VAR_12->vbclass_v2.vbpoff);
                VAR_16 = (const unsigned short int*)((const char*)&VAR_12->vbclass_v2.vbpoff + VAR_8);
                VAR_18 = FUNC_3(&VAR_17, VAR_16);



                VAR_5 += 2 + 2 + 4 + 4 + VAR_8 + VAR_18;
            }
            break;

        case 146:
            VAR_8 = FUNC_3(&VAR_7, &VAR_12->member_v1.offset);
            VAR_9 = (const struct p_string*)((const char*)&VAR_12->member_v1.offset + VAR_8);

            FUNC_1(VAR_2, VAR_3, FUNC_5(VAR_9), VAR_7,
                                     VAR_12->member_v1.type);

            VAR_5 += 2 + 2 + 2 + VAR_8 + (1 + VAR_9->namelen);
            break;

        case 145:
            VAR_8 = FUNC_3(&VAR_7, &VAR_12->member_v2.offset);
            VAR_9 = (const struct p_string*)((const unsigned char*)&VAR_12->member_v2.offset + VAR_8);

            FUNC_1(VAR_2, VAR_3, FUNC_5(VAR_9), VAR_7,
                                     VAR_12->member_v2.type);

            VAR_5 += 2 + 2 + 4 + VAR_8 + (1 + VAR_9->namelen);
            break;

        case 144:
            VAR_8 = FUNC_3(&VAR_7, &VAR_12->member_v3.offset);
            VAR_10 = (const char*)&VAR_12->member_v3.offset + VAR_8;

            FUNC_1(VAR_2, VAR_3, VAR_10, VAR_7, VAR_12->member_v3.type);

            VAR_5 += 2 + 2 + 4 + VAR_8 + (FUNC_4(VAR_10) + 1);
            break;

        case 134:

            VAR_5 += 2 + 2 + 2 + (1 + VAR_12->stmember_v1.p_name.namelen);
            break;

        case 133:

            VAR_5 += 2 + 4 + 2 + (1 + VAR_12->stmember_v2.p_name.namelen);
            break;

        case 132:

            VAR_5 += 2 + 4 + 2 + (FUNC_4(VAR_12->stmember_v3.name) + 1);
            break;

        case 143:

            VAR_5 += 2 + 2 + 2 + (1 + VAR_12->method_v1.p_name.namelen);
            break;

        case 142:

            VAR_5 += 2 + 2 + 4 + (1 + VAR_12->method_v2.p_name.namelen);
            break;

        case 141:

            VAR_5 += 2 + 2 + 4 + (FUNC_4(VAR_12->method_v3.name) + 1);
            break;

        case 140:

            VAR_5 += 2 + 2 + (1 + VAR_12->nesttype_v1.p_name.namelen);
            break;

        case 139:

            VAR_5 += 2 + 2 + 4 + (1 + VAR_12->nesttype_v2.p_name.namelen);
            break;

        case 138:

            VAR_5 += 2 + 2 + 4 + (FUNC_4(VAR_12->nesttype_v3.name) + 1);
            break;

        case 129:

            VAR_5 += 2 + 2;
            break;

        case 128:

            VAR_5 += 2 + 2 + 4;
            break;

        case 137:

            switch ((VAR_12->onemethod_v1.attribute >> 2) & 7)
            {
            case 4: case 6:
                VAR_5 += 2 + 2 + 2 + 4 + (1 + VAR_12->onemethod_virt_v1.p_name.namelen);
                break;

            default:
                VAR_5 += 2 + 2 + 2 + (1 + VAR_12->onemethod_v1.p_name.namelen);
                break;
            }
            break;

        case 136:

            switch ((VAR_12->onemethod_v2.attribute >> 2) & 7)
            {
            case 4: case 6:
                VAR_5 += 2 + 2 + 4 + 4 + (1 + VAR_12->onemethod_virt_v2.p_name.namelen);
                break;

            default:
                VAR_5 += 2 + 2 + 4 + (1 + VAR_12->onemethod_v2.p_name.namelen);
                break;
            }
            break;

        case 135:

            switch ((VAR_12->onemethod_v3.attribute >> 2) & 7)
            {
            case 4: case 6:
                VAR_5 += 2 + 2 + 4 + 4 + (FUNC_4(VAR_12->onemethod_virt_v3.name) + 1);
                break;

            default:
                VAR_5 += 2 + 2 + 4 + (FUNC_4(VAR_12->onemethod_v3.name) + 1);
                break;
            }
            break;

        case 150:
            if (!FUNC_6(VAR_2, VAR_3, VAR_12->index_v1.ref))
                return VAR_0;
            VAR_5 += 2 + 2;
            break;

        case 149:
            if (!FUNC_6(VAR_2, VAR_3, VAR_12->index_v2.ref))
                return VAR_0;
            VAR_5 += 2 + 2 + 4;
            break;

        default:
            FUNC_0("Unsupported type %04x in STRUCT field list\n", VAR_12->generic.id);
            return VAR_0;
        }
    }

    return VAR_1;
}
