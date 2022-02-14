
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; TYPE_1__* obj; } ;
struct TYPE_4__ {long length; unsigned long nid; int ln; int sn; scalar_t__ data; } ;
typedef TYPE_1__ ASN1_OBJECT ;
typedef TYPE_2__ ADDED_OBJ ;






 unsigned long FUNC_0 (int ) ;

__attribute__((used)) static unsigned long FUNC_1(const ADDED_OBJ *VAR_0)
{
    const ASN1_OBJECT *VAR_1;
    int VAR_2;
    unsigned long VAR_3 = 0;
    unsigned char *VAR_4;

    VAR_1 = VAR_0->obj;
    switch (VAR_0->type) {
    case 131:
        VAR_3 = VAR_1->length << 20L;
        VAR_4 = (unsigned char *)VAR_1->data;
        for (VAR_2 = 0; VAR_2 < VAR_1->length; VAR_2++)
            VAR_3 ^= VAR_4[VAR_2] << ((VAR_2 * 3) % 24);
        break;
    case 128:
        VAR_3 = FUNC_0(VAR_1->sn);
        break;
    case 130:
        VAR_3 = FUNC_0(VAR_1->ln);
        break;
    case 129:
        VAR_3 = VAR_1->nid;
        break;
    default:

        return 0;
    }
    VAR_3 &= 0x3fffffffL;
    VAR_3 |= ((unsigned long)VAR_0->type) << 30L;
    return VAR_3;
}
