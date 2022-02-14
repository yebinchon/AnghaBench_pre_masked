
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
struct TYPE_3__ {int type; int len; int elements; struct TYPE_3__** element; int str; int integer; } ;
typedef TYPE_1__ clusterReply ;






 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(clusterReply *VAR_0, zval *VAR_1)
{
    zval VAR_2;
    int VAR_3;

    switch(VAR_0->type) {
        case 130:
            FUNC_1(VAR_1, VAR_0->integer);
            break;
        case 129:
            if (VAR_0->str) {
                FUNC_3(VAR_1, VAR_0->str, VAR_0->len);
            } else {
                FUNC_0(VAR_1, 1);
            }
            break;
        case 131:
            if (VAR_0->len > -1) {
                FUNC_3(VAR_1, VAR_0->str, VAR_0->len);
            } else {
                FUNC_2(VAR_1);
            }
            break;
        case 128:
            FUNC_5(&VAR_2);
            for (VAR_3 = 0; VAR_3 < VAR_0->elements; VAR_3++) {
                FUNC_6(VAR_0->element[VAR_3], &VAR_2);
            }
            FUNC_4(VAR_1, &VAR_2);
            break;
        default:
            FUNC_0(VAR_1, 0);
            break;
    }
}
