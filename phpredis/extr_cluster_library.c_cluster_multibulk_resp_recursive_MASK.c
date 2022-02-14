
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; long len; long integer; size_t elements; struct TYPE_3__** element; int str; } ;
typedef TYPE_1__ clusterReply ;
typedef int buf ;
typedef int RedisSock ;







 void* FUNC_0 (int,int) ;
 int FUNC_1 (char*,long long) ;
 scalar_t__ FUNC_2 (int *,int*,long*) ;
 int FUNC_3 (int *,char*,int,size_t*) ;
 int FUNC_4 (int *,long long) ;

__attribute__((used)) static void
FUNC_5(RedisSock *VAR_0, size_t VAR_1,
                                 clusterReply **VAR_2, int VAR_3,
                                 int *VAR_4)
{
    int VAR_5;
    size_t VAR_6;
    clusterReply *VAR_7;
    long VAR_8;
    char VAR_9[1024];

    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
        VAR_7 = VAR_2[VAR_5] = FUNC_0(1, sizeof(clusterReply));


        if (FUNC_2(VAR_0, &VAR_7->type, &VAR_8) < 0) {
            *VAR_4 = 1;
            return;
        }


        VAR_7->len = VAR_8;

        switch(VAR_7->type) {
            case 131:
            case 129:
                if (FUNC_3(VAR_0,VAR_9,sizeof(VAR_9),&VAR_6) < 0) {
                    *VAR_4 = 1;
                    return;
                }
                VAR_7->len = (long long)VAR_6;
                if (VAR_3) VAR_7->str = FUNC_1(VAR_9, VAR_7->len);
                break;
            case 130:
                VAR_7->integer = VAR_8;
                break;
            case 132:
                if (VAR_7->len >= 0) {
                    VAR_7->str = FUNC_4(VAR_0,VAR_7->len);
                    if (!VAR_7->str) {
                        *VAR_4 = 1;
                        return;
                    }
                }
                break;
            case 128:
                if (VAR_7->len >= 0) {
                    VAR_7->elements = VAR_7->len;
                    if (VAR_7->len > 0) {
                        VAR_7->element = FUNC_0(VAR_7->len,sizeof(clusterReply*));
                        FUNC_5(VAR_0, VAR_7->elements, VAR_7->element,
                            VAR_3, VAR_4);
                    }
                    if (*VAR_4) return;
                }
                break;
            default:
                *VAR_4 = 1;
                return;
        }
    }
}
