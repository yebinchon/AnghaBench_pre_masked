
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int o_num; } ;
struct TYPE_11__ {int av_val; scalar_t__ av_len; } ;
struct TYPE_9__ {char* av_len; int av_val; } ;
struct TYPE_10__ {unsigned char p_number; TYPE_1__ p_aval; TYPE_5__ p_object; } ;
struct TYPE_12__ {int p_type; TYPE_3__ p_name; TYPE_2__ p_vu; } ;
typedef TYPE_4__ AMFObjectProperty ;
typedef TYPE_5__ AMFObject ;





 TYPE_4__* FUNC_0 (TYPE_5__*,int *,int) ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,scalar_t__,int ,...) ;
 int FUNC_2 (char*,int,char*,...) ;

__attribute__((used)) static int
FUNC_3(AMFObject *VAR_2)
{
    AMFObjectProperty *VAR_3;
    int VAR_4, VAR_5;
    for (VAR_4 = 0; VAR_4 < VAR_2->o_num; VAR_4++)
    {
        char VAR_6[256] = "";
        VAR_3 = FUNC_0(VAR_2, ((void*)0), VAR_4);
        switch (VAR_3->p_type)
        {
        case 130:
        case 132:
        case 129:
            if (VAR_3->p_name.av_len)
                FUNC_1(VAR_1, "%.*s:", VAR_3->p_name.av_len, VAR_3->p_name.av_val);
            FUNC_3(&VAR_3->p_vu.p_object);
            break;
        case 131:
            FUNC_2(VAR_6, 255, "%.2f", VAR_3->p_vu.p_number);
            break;
        case 134:
            FUNC_2(VAR_6, 255, "%s",
                     VAR_3->p_vu.p_number != 0. ? "TRUE" : "FALSE");
            break;
        case 128:
            VAR_5 = FUNC_2(VAR_6, 255, "%.*s", VAR_3->p_vu.p_aval.av_len,
                           VAR_3->p_vu.p_aval.av_val);
            if (VAR_5 >= 1 && VAR_6[VAR_5-1] == '\n')
                VAR_6[VAR_5-1] = '\0';
            break;
        case 133:
            FUNC_2(VAR_6, 255, "timestamp:%.2f", VAR_3->p_vu.p_number);
            break;
        default:
            FUNC_2(VAR_6, 255, "INVALID TYPE 0x%02x",
                     (unsigned char)VAR_3->p_type);
        }
        if (VAR_6[0] && VAR_3->p_name.av_len)
        {
            FUNC_1(VAR_1, "  %-22.*s%s", VAR_3->p_name.av_len,
                     VAR_3->p_name.av_val, VAR_6);
        }
    }
    return VAR_0;
}
