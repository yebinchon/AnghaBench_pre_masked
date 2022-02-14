
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {long tv_sec; long tv_usec; } ;
struct TS_resp_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct TS_resp_ctx*,int ) ;
 int FUNC_1 (struct TS_resp_ctx*,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct timeval*,int *) ;

__attribute__((used)) static int FUNC_4(struct TS_resp_ctx *VAR_4, void *VAR_5,
                       long *VAR_6, long *VAR_7)
{
    struct timeval VAR_8;
    if (FUNC_3(&VAR_8, ((void*)0)) != 0) {
        FUNC_2(VAR_0, VAR_2);
        FUNC_1(VAR_4, VAR_3,
                                    "Time is not available.");
        FUNC_0(VAR_4, VAR_1);
        return 0;
    }
    *VAR_6 = VAR_8.tv_sec;
    *VAR_7 = VAR_8.tv_usec;

    return 1;
}
