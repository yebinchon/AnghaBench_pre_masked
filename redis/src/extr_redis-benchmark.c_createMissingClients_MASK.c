
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int client ;
struct TYPE_2__ {int liveclients; int numclients; int num_threads; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *,int ,int ,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(client VAR_1) {
    int VAR_2 = 0;
    while(VAR_0.liveclients < VAR_0.numclients) {
        int VAR_3 = -1;
        if (VAR_0.num_threads)
            VAR_3 = VAR_0.liveclients % VAR_0.num_threads;
        FUNC_0(((void*)0),0,VAR_1,VAR_3);


        if (++VAR_2 > 64) {
            FUNC_1(50000);
            VAR_2 = 0;
        }
    }
}
