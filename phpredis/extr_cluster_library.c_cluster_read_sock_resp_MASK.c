
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; size_t integer; size_t len; size_t elements; void* element; int str; } ;
typedef TYPE_1__ clusterReply ;
typedef int RedisSock ;
typedef int REDIS_REPLY_TYPE ;







 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *,size_t,void*,int ,int*) ;
 void* FUNC_2 (size_t,int) ;
 int FUNC_3 (char*,size_t) ;
 int FUNC_4 (int *,size_t) ;

clusterReply*
FUNC_5(RedisSock *VAR_0, REDIS_REPLY_TYPE VAR_1,
                       char *VAR_2, size_t VAR_3)
{
    clusterReply *VAR_4;

    VAR_4 = FUNC_2(1, sizeof(clusterReply));
    VAR_4->type = VAR_1;


    int VAR_5 = 0;

    switch(VAR_4->type) {
        case 130:
            VAR_4->integer = VAR_3;
            break;
        case 129:
            if (VAR_2) {
                VAR_4->str = FUNC_3(VAR_2, VAR_3);
                VAR_4->len = VAR_3;
            }
        case 131:
            return VAR_4;
        case 132:
            VAR_4->len = VAR_3;
            VAR_4->str = FUNC_4(VAR_0, VAR_3);
            if (VAR_4->len != -1 && !VAR_4->str) {
                FUNC_0(VAR_4, 1);
                return ((void*)0);
            }
            break;
        case 128:
            VAR_4->elements = VAR_3;
            if (VAR_3 != (size_t)-1) {
                VAR_4->element = FUNC_2(VAR_3, sizeof(clusterReply*));
                FUNC_1(VAR_0, VAR_3, VAR_4->element,
                                                 VAR_2 != ((void*)0), &VAR_5);
            }
            break;
        default:
            FUNC_0(VAR_4,1);
            return ((void*)0);
    }


    if (VAR_5) {
        FUNC_0(VAR_4,1);
        return ((void*)0);
    }


    return VAR_4;
}
