
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_22__ {int o_num; TYPE_6__* o_props; } ;
struct TYPE_16__ {char* av_val; int av_len; } ;
struct TYPE_17__ {void* p_number; TYPE_3__ p_aval; } ;
struct TYPE_15__ {char* av_val; int av_len; } ;
struct TYPE_14__ {int member_1; int member_0; } ;
struct TYPE_21__ {scalar_t__ p_type; TYPE_4__ p_vu; TYPE_2__ p_name; TYPE_1__ member_0; } ;
struct TYPE_20__ {char* av_val; int av_len; } ;
struct TYPE_18__ {TYPE_9__ p_object; } ;
struct TYPE_19__ {TYPE_5__ p_vu; } ;
typedef TYPE_7__ AVal ;
typedef TYPE_8__ AMFObjectProperty ;
typedef TYPE_9__ AMFObject ;


 int FUNC_0 (TYPE_9__*,TYPE_8__*) ;
 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 void* FUNC_1 (char*) ;
 char* FUNC_2 (char*,char) ;
 void* FUNC_3 (char*,int *) ;

__attribute__((used)) static int
FUNC_4(AMFObject *VAR_5, AVal *VAR_6, int *VAR_7)
{
    AMFObjectProperty VAR_8 = {{0,0}};
    int VAR_9;
    char *VAR_10, *VAR_11 = VAR_6->av_val;

    if (VAR_11[1] == ':')
    {
        VAR_10 = (char *)VAR_11+2;
        switch(VAR_11[0])
        {
        case 'B':
            VAR_8.p_type = VAR_0;
            VAR_8.p_vu.p_number = FUNC_1(VAR_10);
            break;
        case 'S':
            VAR_8.p_type = VAR_4;
            VAR_8.p_vu.p_aval.av_val = VAR_10;
            VAR_8.p_vu.p_aval.av_len = VAR_6->av_len - (VAR_10-VAR_11);
            break;
        case 'N':
            VAR_8.p_type = VAR_2;
            VAR_8.p_vu.p_number = FUNC_3(VAR_10, ((void*)0));
            break;
        case 'Z':
            VAR_8.p_type = VAR_1;
            break;
        case 'O':
            VAR_9 = FUNC_1(VAR_10);
            if (VAR_9)
            {
                VAR_8.p_type = VAR_3;
            }
            else
            {
                (*VAR_7)--;
                return 0;
            }
            break;
        default:
            return -1;
        }
    }
    else if (VAR_11[2] == ':' && VAR_11[0] == 'N')
    {
        VAR_10 = FUNC_2(VAR_11+3, ':');
        if (!VAR_10 || !*VAR_7)
            return -1;
        VAR_8.p_name.av_val = (char *)VAR_11+3;
        VAR_8.p_name.av_len = VAR_10 - (VAR_11+3);

        VAR_10++;
        switch(VAR_11[1])
        {
        case 'B':
            VAR_8.p_type = VAR_0;
            VAR_8.p_vu.p_number = FUNC_1(VAR_10);
            break;
        case 'S':
            VAR_8.p_type = VAR_4;
            VAR_8.p_vu.p_aval.av_val = VAR_10;
            VAR_8.p_vu.p_aval.av_len = VAR_6->av_len - (VAR_10-VAR_11);
            break;
        case 'N':
            VAR_8.p_type = VAR_2;
            VAR_8.p_vu.p_number = FUNC_3(VAR_10, ((void*)0));
            break;
        case 'O':
            VAR_8.p_type = VAR_3;
            break;
        default:
            return -1;
        }
    }
    else
        return -1;

    if (*VAR_7)
    {
        AMFObject *VAR_12;
        for (VAR_9=0; VAR_9<*VAR_7; VAR_9++)
        {
            VAR_12 = &VAR_5->o_props[VAR_5->o_num-1].p_vu.p_object;
            VAR_5 = VAR_12;
        }
    }
    FUNC_0(VAR_5, &VAR_8);
    if (VAR_8.p_type == VAR_3)
        (*VAR_7)++;
    return 0;
}
