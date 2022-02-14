
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int boolean; scalar_t__ ptr; int object; } ;
struct TYPE_6__ {int type; TYPE_1__ value; } ;
typedef TYPE_2__ ASN1_TYPE ;
typedef int ASN1_STRING ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int ) ;
int FUNC_2(const ASN1_TYPE *VAR_0, const ASN1_TYPE *VAR_1)
{
    int VAR_2 = -1;

    if (!VAR_0 || !VAR_1 || VAR_0->type != VAR_1->type)
        return -1;

    switch (VAR_0->type) {
    case 139:
        VAR_2 = FUNC_1(VAR_0->value.object, VAR_1->value.object);
        break;
    case 148:
        VAR_2 = VAR_0->value.boolean - VAR_1->value.boolean;
        break;
    case 141:
        VAR_2 = 0;
        break;
    case 142:
    case 147:
    case 150:
    case 138:
    case 135:
    case 134:
    case 140:
    case 136:
    case 133:
    case 129:
    case 143:
    case 131:
    case 146:
    case 144:
    case 128:
    case 145:
    case 132:
    case 149:
    case 130:
    case 137:
    default:
        VAR_2 = FUNC_0((ASN1_STRING *)VAR_0->value.ptr,
                                 (ASN1_STRING *)VAR_1->value.ptr);
        break;
    }

    return VAR_2;
}
