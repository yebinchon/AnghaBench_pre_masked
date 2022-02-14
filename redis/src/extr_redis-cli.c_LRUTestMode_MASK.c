
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int type; char* str; } ;
typedef TYPE_1__ redisReply ;
typedef int key ;
struct TYPE_6__ {scalar_t__ err; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;


 TYPE_2__* VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;
 long long FUNC_4 () ;
 int FUNC_5 (char*,...) ;
 char FUNC_6 () ;
 int FUNC_7 (TYPE_2__*,char*,char*,...) ;
 scalar_t__ FUNC_8 (TYPE_2__*,void**) ;
 int FUNC_9 (int) ;
 int VAR_3 ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(void) {
    redisReply *VAR_4;
    char VAR_5[128];
    long long VAR_6;
    int VAR_7;

    FUNC_9(FUNC_10(((void*)0))^FUNC_3());
    while(1) {



        VAR_6 = FUNC_4();
        long long VAR_8 = 0, VAR_9 = 0;
        while(FUNC_4() - VAR_6 < 1000) {

            for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
                char VAR_10[6];
                VAR_10[5] = '\0';
                for (int VAR_11 = 0; VAR_11 < 5; VAR_11++) VAR_10[VAR_11] = 'A'+FUNC_6()%('z'-'A');
                FUNC_0(VAR_5,sizeof(VAR_5));
                FUNC_7(VAR_2, "SET %s %s",VAR_5,VAR_10);
            }
            for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
                FUNC_8(VAR_2, (void**)&VAR_4);


            for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
                FUNC_0(VAR_5,sizeof(VAR_5));
                FUNC_7(VAR_2, "GET %s",VAR_5);
            }
            for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
                if (FUNC_8(VAR_2, (void**)&VAR_4) == VAR_1) {
                    switch(VAR_4->type) {
                        case 129:
                            FUNC_5("%s\n", VAR_4->str);
                            break;
                        case 128:
                            VAR_9++;
                            break;
                        default:
                            VAR_8++;
                            break;
                    }
                }
            }

            if (VAR_2->err) {
                FUNC_2(VAR_3,"I/O error during LRU test\n");
                FUNC_1(1);
            }
        }

        FUNC_5(
            "%lld Gets/sec | Hits: %lld (%.2f%%) | Misses: %lld (%.2f%%)\n",
            VAR_8+VAR_9,
            VAR_8, (double)VAR_8/(VAR_8+VAR_9)*100,
            VAR_9, (double)VAR_9/(VAR_8+VAR_9)*100);
    }
    FUNC_1(0);
}
