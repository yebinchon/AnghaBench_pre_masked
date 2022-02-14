
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_9__ {scalar_t__ numslots; int port; int numslaves; TYPE_5__** slaves; int name; int ip; } ;
typedef TYPE_2__ clusterNode ;
typedef int client ;
struct TYPE_11__ {int port; int name; int ip; } ;
struct TYPE_10__ {TYPE_1__* cluster; } ;
struct TYPE_8__ {int nodes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int * FUNC_6 (int ) ;
 TYPE_2__* FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (TYPE_2__*) ;
 TYPE_3__ VAR_2 ;
 int FUNC_12 (int *,void*,int) ;

void FUNC_13(client *VAR_3) {
    int VAR_4 = 0;
    void *VAR_5 = FUNC_3(VAR_3);

    dictEntry *VAR_6;
    dictIterator *VAR_7 = FUNC_6(VAR_2.cluster->nodes);
    while((VAR_6 = FUNC_8(VAR_7)) != ((void*)0)) {
        clusterNode *VAR_8 = FUNC_7(VAR_6);
        int VAR_9 = 0, VAR_10 = -1;



        if (!FUNC_11(VAR_8) || VAR_8->numslots == 0) continue;

        for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
            int VAR_11, VAR_12;

            if ((VAR_11 = FUNC_5(VAR_8,VAR_9)) != 0) {
                if (VAR_10 == -1) VAR_10 = VAR_9;
            }
            if (VAR_10 != -1 && (!VAR_11 || VAR_9 == VAR_1-1)) {
                int VAR_13 = 3;
                void *VAR_14 = FUNC_3(VAR_3);

                if (VAR_11 && VAR_9 == VAR_1-1) VAR_9++;



                if (VAR_10 == VAR_9-1) {
                    FUNC_4(VAR_3, VAR_10);
                    FUNC_4(VAR_3, VAR_10);
                } else {
                    FUNC_4(VAR_3, VAR_10);
                    FUNC_4(VAR_3, VAR_9-1);
                }
                VAR_10 = -1;


                FUNC_0(VAR_3, 3);
                FUNC_2(VAR_3, VAR_8->ip);
                FUNC_4(VAR_3, VAR_8->port);
                FUNC_1(VAR_3, VAR_8->name, VAR_0);


                for (VAR_12 = 0; VAR_12 < VAR_8->numslaves; VAR_12++) {


                    if (FUNC_10(VAR_8->slaves[VAR_12])) continue;
                    FUNC_0(VAR_3, 3);
                    FUNC_2(VAR_3, VAR_8->slaves[VAR_12]->ip);
                    FUNC_4(VAR_3, VAR_8->slaves[VAR_12]->port);
                    FUNC_1(VAR_3, VAR_8->slaves[VAR_12]->name, VAR_0);
                    VAR_13++;
                }
                FUNC_12(VAR_3, VAR_14, VAR_13);
                VAR_4++;
            }
        }
    }
    FUNC_9(VAR_7);
    FUNC_12(VAR_3, VAR_5, VAR_4);
}
