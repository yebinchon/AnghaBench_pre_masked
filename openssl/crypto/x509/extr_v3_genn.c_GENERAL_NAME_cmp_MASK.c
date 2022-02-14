
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rid; int ip; int dirn; int ia5; int otherName; int other; } ;
struct TYPE_6__ {int type; TYPE_1__ d; } ;
typedef TYPE_2__ GENERAL_NAME ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;

int FUNC_6(GENERAL_NAME *VAR_0, GENERAL_NAME *VAR_1)
{
    int VAR_2 = -1;

    if (!VAR_0 || !VAR_1 || VAR_0->type != VAR_1->type)
        return -1;
    switch (VAR_0->type) {
    case 128:
    case 134:
        VAR_2 = FUNC_2(VAR_0->d.other, VAR_1->d.other);
        break;

    case 131:
        VAR_2 = FUNC_4(VAR_0->d.otherName, VAR_1->d.otherName);
        break;

    case 133:
    case 135:
    case 129:
        VAR_2 = FUNC_1(VAR_0->d.ia5, VAR_1->d.ia5);
        break;

    case 136:
        VAR_2 = FUNC_5(VAR_0->d.dirn, VAR_1->d.dirn);
        break;

    case 132:
        VAR_2 = FUNC_0(VAR_0->d.ip, VAR_1->d.ip);
        break;

    case 130:
        VAR_2 = FUNC_3(VAR_0->d.rid, VAR_1->d.rid);
        break;
    }
    return VAR_2;
}
