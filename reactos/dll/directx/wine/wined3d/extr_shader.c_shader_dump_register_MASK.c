
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_version {int major; int type; } ;
struct TYPE_4__ {size_t* immconst_data; size_t fp_body_idx; } ;
struct wined3d_shader_register {int type; int immconst_type; size_t data_type; TYPE_2__ u; TYPE_1__* idx; } ;
typedef size_t UINT ;
struct TYPE_3__ {size_t offset; scalar_t__ rel_addr; } ;


 int FUNC_0 (char*,size_t) ;
 int VAR_0 ;
 int FUNC_1 (struct wined3d_string_buffer*,char*,...) ;
 int FUNC_2 (struct wined3d_string_buffer*,scalar_t__,struct wined3d_shader_version const*) ;
 size_t FUNC_3 (int,size_t) ;

__attribute__((used)) static void FUNC_4(struct wined3d_string_buffer *VAR_1,
        const struct wined3d_shader_register *VAR_2, const struct wined3d_shader_version *VAR_3)
{
    static const char * const VAR_4[] = {"oPos", "oFog", "oPts"};
    static const char * const VAR_5[] = {"vPos", "vFace"};
    UINT VAR_6 = VAR_2->idx[0].offset;

    switch (VAR_2->type)
    {
        case 141:
            FUNC_1(VAR_1, "r");
            break;

        case 159:
            FUNC_1(VAR_1, "v");
            break;

        case 179:
        case 178:
        case 177:
        case 176:
            FUNC_1(VAR_1, "c");
            VAR_6 = FUNC_3(VAR_2->type, VAR_6);
            break;

        case 138:
            FUNC_1(VAR_1, "%c", VAR_3->type == VAR_0 ? 't' : 'a');
            break;

        case 146:
            FUNC_1(VAR_1, "%s", VAR_4[VAR_6]);
            break;

        case 180:
            FUNC_1(VAR_1, "oC");
            break;

        case 171:
            FUNC_1(VAR_1, "oDepth");
            break;

        case 170:
            FUNC_1(VAR_1, "oDepthGE");
            break;

        case 169:
            FUNC_1(VAR_1, "oDepthLE");
            break;

        case 181:
            FUNC_1(VAR_1, "oD");
            break;

        case 139:


            if (VAR_3->major >= 3)
                FUNC_1(VAR_1, "o");
            else
                FUNC_1(VAR_1, "oT");
            break;

        case 173:
            FUNC_1(VAR_1, "i");
            break;

        case 175:
            FUNC_1(VAR_1, "b");
            break;

        case 157:
            FUNC_1(VAR_1, "l");
            break;

        case 154:
            FUNC_1(VAR_1, "aL");
            break;

        case 143:
            FUNC_1(VAR_1, "s");
            break;

        case 153:
            if (VAR_6 > 1)
            {
                FUNC_0("Unhandled misctype register %u.\n", VAR_6);
                FUNC_1(VAR_1, "<unhandled misctype %#x>", VAR_6);
            }
            else
            {
                FUNC_1(VAR_1, "%s", VAR_5[VAR_6]);
            }
            break;

        case 148:
            FUNC_1(VAR_1, "p");
            break;

        case 162:
            FUNC_1(VAR_1, "l");
            break;

        case 174:
            FUNC_1(VAR_1, "cb");
            break;

        case 161:
            FUNC_1(VAR_1, "icb");
            break;

        case 147:
            FUNC_1(VAR_1, "primID");
            break;

        case 152:
            FUNC_1(VAR_1, "null");
            break;

        case 145:
            FUNC_1(VAR_1, "t");
            break;

        case 135:
            FUNC_1(VAR_1, "u");
            break;

        case 150:
            FUNC_1(VAR_1, "vOutputControlPointID");
            break;

        case 168:
            FUNC_1(VAR_1, "vForkInstanceId");
            break;

        case 158:
            FUNC_1(VAR_1, "vJoinInstanceId");
            break;

        case 160:
            FUNC_1(VAR_1, "vicp");
            break;

        case 151:
            FUNC_1(VAR_1, "vocp");
            break;

        case 149:
            FUNC_1(VAR_1, "vpc");
            break;

        case 140:
            FUNC_1(VAR_1, "vDomainLocation");
            break;

        case 165:
            FUNC_1(VAR_1, "g");
            break;

        case 136:
            FUNC_1(VAR_1, "vThreadID");
            break;

        case 137:
            FUNC_1(VAR_1, "vThreadGroupID");
            break;

        case 156:
            FUNC_1(VAR_1, "vThreadIDInGroup");
            break;

        case 155:
            FUNC_1(VAR_1, "vThreadIDInGroupFlattened");
            break;

        case 163:
            FUNC_1(VAR_1, "x");
            break;

        case 142:
            FUNC_1(VAR_1, "m");
            break;

        case 167:
            FUNC_1(VAR_1, "fb");
            break;

        case 166:
            FUNC_1(VAR_1, "fp");
            break;

        case 172:
            FUNC_1(VAR_1, "vCoverage");
            break;

        case 144:
            FUNC_1(VAR_1, "oMask");
            break;

        case 164:
            FUNC_1(VAR_1, "vGSInstanceID");
            break;

        default:
            FUNC_1(VAR_1, "<unhandled_rtype(%#x)>", VAR_2->type);
            break;
    }

    if (VAR_2->type == 162)
    {
        FUNC_1(VAR_1, "(");
        switch (VAR_2->immconst_type)
        {
            case 129:
                switch (VAR_2->data_type)
                {
                    case 134:
                        FUNC_1(VAR_1, "%.8e", *(const float *)VAR_2->u.immconst_data);
                        break;
                    case 133:
                        FUNC_1(VAR_1, "%d", VAR_2->u.immconst_data[0]);
                        break;
                    case 132:
                    case 131:
                    case 130:
                        FUNC_1(VAR_1, "%u", VAR_2->u.immconst_data[0]);
                        break;
                    default:
                        FUNC_1(VAR_1, "<unhandled data type %#x>", VAR_2->data_type);
                        break;
                }
                break;

            case 128:
                switch (VAR_2->data_type)
                {
                    case 134:
                        FUNC_1(VAR_1, "%.8e, %.8e, %.8e, %.8e",
                                *(const float *)&VAR_2->u.immconst_data[0], *(const float *)&VAR_2->u.immconst_data[1],
                                *(const float *)&VAR_2->u.immconst_data[2], *(const float *)&VAR_2->u.immconst_data[3]);
                        break;
                    case 133:
                        FUNC_1(VAR_1, "%d, %d, %d, %d",
                                VAR_2->u.immconst_data[0], VAR_2->u.immconst_data[1],
                                VAR_2->u.immconst_data[2], VAR_2->u.immconst_data[3]);
                        break;
                    case 132:
                    case 131:
                    case 130:
                        FUNC_1(VAR_1, "%u, %u, %u, %u",
                                VAR_2->u.immconst_data[0], VAR_2->u.immconst_data[1],
                                VAR_2->u.immconst_data[2], VAR_2->u.immconst_data[3]);
                        break;
                    default:
                        FUNC_1(VAR_1, "<unhandled data type %#x>", VAR_2->data_type);
                        break;
                }
                break;

            default:
                FUNC_1(VAR_1, "<unhandled immconst_type %#x>", VAR_2->immconst_type);
                break;
        }
        FUNC_1(VAR_1, ")");
    }
    else if (VAR_2->type != 146
            && VAR_2->type != 153
            && VAR_2->type != 152)
    {
        if (VAR_6 != ~0u)
        {
            FUNC_1(VAR_1, "[");
            if (VAR_2->idx[0].rel_addr)
            {
                FUNC_2(VAR_1, VAR_2->idx[0].rel_addr, VAR_3);
                FUNC_1(VAR_1, " + ");
            }
            FUNC_1(VAR_1, "%u]", VAR_6);

            if (VAR_2->idx[1].offset != ~0u)
            {
                FUNC_1(VAR_1, "[");
                if (VAR_2->idx[1].rel_addr)
                {
                    FUNC_2(VAR_1, VAR_2->idx[1].rel_addr, VAR_3);
                    FUNC_1(VAR_1, " + ");
                }
                FUNC_1(VAR_1, "%u]", VAR_2->idx[1].offset);
            }
        }

        if (VAR_2->type == 166)
            FUNC_1(VAR_1, "[%u]", VAR_2->u.fp_body_idx);
    }
}
