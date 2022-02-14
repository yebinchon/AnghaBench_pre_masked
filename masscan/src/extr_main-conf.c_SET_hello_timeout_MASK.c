
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Masscan {int tcp_hello_timeout; scalar_t__ echo; scalar_t__ echo_all; } ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (scalar_t__,char*,int) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(struct Masscan *VAR_1, const char *VAR_2, const char *VAR_3)
{
    FUNC_0(VAR_2);
    if (VAR_1->echo) {
        if (VAR_1->tcp_hello_timeout || VAR_1->echo_all)
            FUNC_1(VAR_1->echo, "hello-timeout = %u\n", VAR_1->tcp_hello_timeout);
        return 0;
    }
    VAR_1->tcp_hello_timeout = (unsigned)FUNC_2(VAR_3);
    return VAR_0;
}
