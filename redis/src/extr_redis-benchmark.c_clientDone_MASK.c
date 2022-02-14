
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int client ;
struct TYPE_2__ {int requests; int liveclients_mutex; scalar_t__ num_threads; int liveclients; scalar_t__ keepalive; scalar_t__ el; int requests_finished; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(client VAR_1) {
    int VAR_2 = 0;
    FUNC_1(VAR_0.requests_finished, VAR_2);
    if (VAR_2 >= VAR_0.requests) {
        FUNC_3(VAR_1);
        if (!VAR_0.num_threads && VAR_0.el) FUNC_0(VAR_0.el);
        return;
    }
    if (VAR_0.keepalive) {
        FUNC_6(VAR_1);
    } else {
        if (VAR_0.num_threads) FUNC_4(&(VAR_0.liveclients_mutex));
        VAR_0.liveclients--;
        FUNC_2(VAR_1);
        VAR_0.liveclients++;
        if (VAR_0.num_threads)
            FUNC_5(&(VAR_0.liveclients_mutex));
        FUNC_3(VAR_1);
    }
}
