
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct client_arg {int writable; int client_fd; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ,char const*,size_t,int ) ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(struct client_arg *VAR_6, const char *VAR_7)
{
    size_t VAR_8 = FUNC_1(VAR_7);
    while (VAR_8 > 0) {
        ssize_t VAR_9 = FUNC_0(VAR_6->client_fd, VAR_7, VAR_8, VAR_4);
        if (VAR_9 <= 0) {
            if (VAR_9 == 0)
                return -1;

            if (VAR_5 == VAR_1 || VAR_5 == VAR_3) {
                VAR_6->writable = 0;
                return 0;
            }

            if (VAR_5 == VAR_2 || VAR_5 == VAR_0)
                continue;

            return VAR_9;
        }

        VAR_8 -= VAR_9;
        VAR_7 += VAR_9;
    }

    return 0;
}
