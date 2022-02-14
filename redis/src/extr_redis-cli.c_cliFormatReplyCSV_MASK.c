
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sds ;
struct TYPE_3__ {int type; unsigned int elements; struct TYPE_3__** element; int integer; int len; int str; } ;
typedef TYPE_1__ redisReply ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_0 ;
 int FUNC_9 (int ) ;

__attribute__((used)) static sds FUNC_10(redisReply *VAR_1) {
    unsigned int VAR_2;

    sds VAR_3 = FUNC_6();
    switch (VAR_1->type) {
    case 134:
        VAR_3 = FUNC_2(VAR_3,"ERROR,");
        VAR_3 = FUNC_5(VAR_3,VAR_1->str,FUNC_9(VAR_1->str));
    break;
    case 130:
        VAR_3 = FUNC_5(VAR_3,VAR_1->str,VAR_1->len);
    break;
    case 133:
        VAR_3 = FUNC_4(VAR_3,"%lld",VAR_1->integer);
    break;
    case 135:
        VAR_3 = FUNC_4(VAR_3,"%s",VAR_1->str);
        break;
    case 129:
    case 128:
        VAR_3 = FUNC_5(VAR_3,VAR_1->str,VAR_1->len);
    break;
    case 131:
        VAR_3 = FUNC_2(VAR_3,"NULL");
    break;
    case 136:
        VAR_3 = FUNC_2(VAR_3,VAR_1->integer ? "true" : "false");
    break;
    case 137:
    case 132:
        for (VAR_2 = 0; VAR_2 < VAR_1->elements; VAR_2++) {
            sds VAR_4 = FUNC_10(VAR_1->element[VAR_2]);
            VAR_3 = FUNC_3(VAR_3,VAR_4,FUNC_8(VAR_4));
            if (VAR_2 != VAR_1->elements-1) VAR_3 = FUNC_2(VAR_3,",");
            FUNC_7(VAR_4);
        }
    break;
    default:
        FUNC_1(VAR_0,"Unknown reply type: %d\n", VAR_1->type);
        FUNC_0(1);
    }
    return VAR_3;
}
