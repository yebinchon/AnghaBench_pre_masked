
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct HelloTypeObject {struct HelloTypeNode* head; } ;
struct HelloTypeNode {struct HelloTypeNode* next; int value; } ;
typedef int RedisModuleString ;
typedef int RedisModuleKey ;
typedef int RedisModuleCtx ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 struct HelloTypeObject* FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,long long) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (int *,long long*) ;
 int FUNC_10 (int *) ;

int FUNC_11(RedisModuleCtx *VAR_7, RedisModuleString **VAR_8, int VAR_9) {
    FUNC_0(VAR_7);

    if (VAR_9 != 4) return FUNC_10(VAR_7);
    RedisModuleKey *VAR_10 = FUNC_4(VAR_7,VAR_8[1],
        VAR_5|VAR_6);
    int VAR_11 = FUNC_1(VAR_10);
    if (VAR_11 != VAR_2 &&
        FUNC_2(VAR_10) != VAR_0)
    {
        return FUNC_7(VAR_7,VAR_1);
    }

    long long VAR_12, VAR_13;
    if (FUNC_9(VAR_8[2],&VAR_12) != VAR_3 ||
        FUNC_9(VAR_8[3],&VAR_13) != VAR_3 ||
        VAR_12 < 0 || VAR_13 < 0)
    {
        return FUNC_7(VAR_7,
            "ERR invalid first or count parameters");
    }

    struct HelloTypeObject *VAR_14 = FUNC_3(VAR_10);
    struct HelloTypeNode *VAR_15 = VAR_14 ? VAR_14->head : ((void*)0);
    FUNC_6(VAR_7,VAR_4);
    long long VAR_16 = 0;
    while(VAR_15 && VAR_13--) {
        FUNC_8(VAR_7,VAR_15->value);
        VAR_16++;
        VAR_15 = VAR_15->next;
    }
    FUNC_5(VAR_7,VAR_16);
    return VAR_3;
}
