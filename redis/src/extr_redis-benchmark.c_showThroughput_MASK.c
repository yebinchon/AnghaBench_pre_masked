
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void aeEventLoop ;
struct TYPE_2__ {int liveclients; int requests_finished; int requests; int idlemode; char* title; scalar_t__ start; scalar_t__ csv; scalar_t__ num_threads; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int,int) ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_8(struct aeEventLoop *VAR_4, long long VAR_5, void *VAR_6) {
    FUNC_0(VAR_4);
    FUNC_0(VAR_5);
    FUNC_0(VAR_6);
    int VAR_7 = 0;
    int VAR_8 = 0;
    FUNC_2(VAR_1.liveclients, VAR_7);
    FUNC_2(VAR_1.requests_finished, VAR_8);

    if (VAR_7 == 0 && VAR_8 != VAR_1.requests) {
        FUNC_5(VAR_2,"All clients disconnected... aborting.\n");
        FUNC_3(1);
    }
    if (VAR_1.num_threads && VAR_8 >= VAR_1.requests) {
        FUNC_1(VAR_4);
        return VAR_0;
    }
    if (VAR_1.csv) return 250;
    if (VAR_1.idlemode == 1) {
        FUNC_7("clients: %d\r", VAR_1.liveclients);
        FUNC_4(VAR_3);
 return 250;
    }
    float VAR_9 = (float)(FUNC_6()-VAR_1.start)/1000.0;
    float VAR_10 = (float)VAR_8/VAR_9;
    FUNC_7("%s: %.2f\r", VAR_1.title, VAR_10);
    FUNC_4(VAR_3);
    return 250;
}
