
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
struct TYPE_6__ {char* c; int len; int member_0; } ;
typedef TYPE_1__ smart_string ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,int ,char*) ;
 int FUNC_7 (TYPE_1__*,int ,int ) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (TYPE_1__*,int,int ,int ) ;

int FUNC_11(zval *VAR_3, int VAR_4, char **VAR_5, int *VAR_6)
{
    smart_string VAR_7 = {0};
    int VAR_8;


    if (FUNC_4(VAR_3[0]) != 128) {
        FUNC_6(((void*)0), VAR_0,
            "When sending a 'raw' command, the first argument must be a string!");
        return VAR_1;
    }


    FUNC_10(&VAR_7, VAR_4-1, FUNC_3(VAR_3[0]), FUNC_2(VAR_3[0]));

    for (VAR_8 = 1; VAR_8 < VAR_4; VAR_8++) {
       switch (FUNC_4(VAR_3[VAR_8])) {
            case 128:
                FUNC_7(&VAR_7, FUNC_3(VAR_3[VAR_8]),
                    FUNC_2(VAR_3[VAR_8]));
                break;
            case 129:
                FUNC_9(&VAR_7,FUNC_1(VAR_3[VAR_8]));
                break;
            case 130:
                FUNC_8(&VAR_7,FUNC_0(VAR_3[VAR_8]));
                break;
            default:
                FUNC_6(((void*)0), VAR_0,
                    "Raw command arguments must be scalar values!");
                FUNC_5(VAR_7.c);
                return VAR_1;
        }
    }


    *VAR_5 = VAR_7.c;
    *VAR_6 = VAR_7.len;

    return VAR_2;
}
