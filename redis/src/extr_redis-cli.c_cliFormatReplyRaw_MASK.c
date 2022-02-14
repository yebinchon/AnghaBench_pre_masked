
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char* sds ;
struct TYPE_4__ {int type; char* str; int len; char* integer; size_t elements; struct TYPE_4__** element; } ;
typedef TYPE_1__ redisReply ;
struct TYPE_5__ {int eval_ldb_end; char* mb_delim; int output; int eval_ldb; int enable_ldb_on_eval; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int const) ;
 char* FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*,char*,int) ;
 char* FUNC_6 (char*,char*,char*) ;
 char* FUNC_7 () ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int VAR_2 ;
 char* FUNC_10 (char*,char*) ;

__attribute__((used)) static sds FUNC_11(redisReply *VAR_3) {
    sds VAR_4 = FUNC_7(), VAR_5;
    size_t VAR_6;

    switch (VAR_3->type) {
    case 131:

        break;
    case 134:
        VAR_4 = FUNC_5(VAR_4,VAR_3->str,VAR_3->len);
        VAR_4 = FUNC_5(VAR_4,"\n",1);
        break;
    case 130:
    case 129:
    case 128:
        if (VAR_3->type == 130 && VAR_1.eval_ldb) {





            if (FUNC_10(VAR_3->str,"<endsession>") == VAR_3->str) {
                VAR_1.enable_ldb_on_eval = 0;
                VAR_1.eval_ldb = 0;
                VAR_1.eval_ldb_end = 1;
                VAR_1.output = VAR_0;
                FUNC_0();
            } else {
                VAR_4 = FUNC_3(VAR_4,VAR_3->str,VAR_3->len);
            }
        } else {
            VAR_4 = FUNC_5(VAR_4,VAR_3->str,VAR_3->len);
        }
        break;
    case 136:
        VAR_4 = FUNC_4(VAR_4,VAR_3->integer ? "(true)" : "(false)");
    break;
    case 133:
        VAR_4 = FUNC_6(VAR_4,"%lld",VAR_3->integer);
        break;
    case 135:
        VAR_4 = FUNC_6(VAR_4,"%s",VAR_3->str);
        break;
    case 137:
        for (VAR_6 = 0; VAR_6 < VAR_3->elements; VAR_6++) {
            if (VAR_6 > 0) VAR_4 = FUNC_4(VAR_4,VAR_1.mb_delim);
            VAR_5 = FUNC_11(VAR_3->element[VAR_6]);
            VAR_4 = FUNC_5(VAR_4,VAR_5,FUNC_9(VAR_5));
            FUNC_8(VAR_5);
        }
        break;
    case 132:
        for (VAR_6 = 0; VAR_6 < VAR_3->elements; VAR_6 += 2) {
            if (VAR_6 > 0) VAR_4 = FUNC_4(VAR_4,VAR_1.mb_delim);
            VAR_5 = FUNC_11(VAR_3->element[VAR_6]);
            VAR_4 = FUNC_5(VAR_4,VAR_5,FUNC_9(VAR_5));
            FUNC_8(VAR_5);

            VAR_4 = FUNC_5(VAR_4," ",1);
            VAR_5 = FUNC_11(VAR_3->element[VAR_6+1]);
            VAR_4 = FUNC_5(VAR_4,VAR_5,FUNC_9(VAR_5));
            FUNC_8(VAR_5);
        }
        break;
    default:
        FUNC_2(VAR_2,"Unknown reply type: %d\n", VAR_3->type);
        FUNC_1(1);
    }
    return VAR_4;
}
