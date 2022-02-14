
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statsd_udp {size_t size; struct statsd_udp* msgs; struct statsd_udp* iovecs; struct statsd_udp* iov_base; scalar_t__* running; } ;


 int FUNC_0 (struct statsd_udp*) ;
 int FUNC_1 (char*) ;

void FUNC_2(void *VAR_0) {
    struct statsd_udp *VAR_1 = VAR_0;
    *VAR_1->running = 0;

    FUNC_1("cleaning up...");
    FUNC_0(VAR_1);
}
