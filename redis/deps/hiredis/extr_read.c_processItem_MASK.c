
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {size_t ridx; TYPE_2__* rstack; } ;
typedef TYPE_1__ redisReader ;
struct TYPE_10__ {int type; } ;
typedef TYPE_2__ redisReadTask ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 char* FUNC_5 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_6(redisReader *VAR_1) {
    redisReadTask *VAR_2 = &(VAR_1->rstack[VAR_1->ridx]);
    char *VAR_3;


    if (VAR_2->type < 0) {
        if ((VAR_3 = FUNC_5(VAR_1,1)) != ((void*)0)) {
            switch (VAR_3[0]) {
            case '-':
                VAR_2->type = 135;
                break;
            case '+':
                VAR_2->type = 130;
                break;
            case ':':
                VAR_2->type = 134;
                break;
            case ',':
                VAR_2->type = 136;
                break;
            case '_':
                VAR_2->type = 132;
                break;
            case '$':
                VAR_2->type = 129;
                break;
            case '*':
                VAR_2->type = 138;
                break;
            case '%':
                VAR_2->type = 133;
                break;
            case '~':
                VAR_2->type = 131;
                break;
            case '#':
                VAR_2->type = 137;
                break;
            case '=':
                VAR_2->type = 128;
                break;
            default:
                FUNC_0(VAR_1,*VAR_3);
                return VAR_0;
            }
        } else {

            return VAR_0;
        }
    }


    switch(VAR_2->type) {
    case 135:
    case 130:
    case 134:
    case 136:
    case 132:
    case 137:
        return FUNC_4(VAR_1);
    case 129:
    case 128:
        return FUNC_3(VAR_1);
    case 138:
    case 133:
    case 131:
        return FUNC_2(VAR_1);
    default:
        FUNC_1(((void*)0));
        return VAR_0;
    }
}
