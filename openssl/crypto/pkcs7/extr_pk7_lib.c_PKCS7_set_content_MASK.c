
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* digest; TYPE_1__* sign; } ;
struct TYPE_11__ {TYPE_2__ d; int type; } ;
struct TYPE_10__ {TYPE_4__* contents; } ;
struct TYPE_8__ {TYPE_4__* contents; } ;
typedef TYPE_4__ PKCS7 ;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(PKCS7 *VAR_2, PKCS7 *VAR_3)
{
    int VAR_4;

    VAR_4 = FUNC_0(VAR_2->type);
    switch (VAR_4) {
    case 129:
        FUNC_1(VAR_2->d.sign->contents);
        VAR_2->d.sign->contents = VAR_3;
        break;
    case 132:
        FUNC_1(VAR_2->d.digest->contents);
        VAR_2->d.digest->contents = VAR_3;
        break;
    case 133:
    case 130:
    case 128:
    case 131:
    default:
        FUNC_2(VAR_0, VAR_1);
        goto err;
    }
    return 1;
 err:
    return 0;
}
