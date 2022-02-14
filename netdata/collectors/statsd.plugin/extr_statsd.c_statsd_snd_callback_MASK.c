
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int POLLINFO ;


 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(POLLINFO *VAR_0, short int *VAR_1) {
    (void)VAR_0;
    (void)VAR_1;

    FUNC_0("STATSD: snd_callback() called, but we never requested to send data to statsd clients.");
    return -1;
}
