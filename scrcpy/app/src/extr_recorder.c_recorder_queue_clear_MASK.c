
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct recorder_queue {int dummy; } ;
struct record_packet {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct recorder_queue*) ;
 int FUNC_1 (struct recorder_queue*,int ,struct record_packet**) ;
 int FUNC_2 (struct record_packet*) ;

__attribute__((used)) static void
FUNC_3(struct recorder_queue *VAR_1) {
    while (!FUNC_0(VAR_1)) {
        struct record_packet *VAR_2;
        FUNC_1(VAR_1, VAR_0, &VAR_2);
        FUNC_2(VAR_2);
    }
}
