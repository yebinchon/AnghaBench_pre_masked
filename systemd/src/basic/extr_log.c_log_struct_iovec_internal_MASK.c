
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {int msg_iovlen; struct iovec* msg_iov; } ;
struct iovec {scalar_t__ iov_len; scalar_t__ iov_base; } ;
typedef int header ;
typedef size_t LogRealm ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ,int ) ;
 struct iovec FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int) ;
 size_t FUNC_4 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ VAR_8 ;
 int FUNC_8 (int,int,char const*,int,char const*,int *,int *,int *,int *,char*) ;
 int FUNC_9 (char*,int,int,int,char const*,int,char const*,int *,int *,int *,int *) ;
 int VAR_9 ;
 scalar_t__* VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__,char*) ;
 scalar_t__ FUNC_11 (scalar_t__,struct msghdr*,int ) ;
 char* FUNC_12 (scalar_t__,scalar_t__) ;

int FUNC_13(
                int VAR_12,
                int VAR_13,
                const char *VAR_14,
                int VAR_15,
                const char *VAR_16,
                const struct iovec VAR_17[],
                size_t VAR_18) {

        LogRealm VAR_19 = FUNC_4(VAR_12);
        VAR_7;
        size_t VAR_20;
        char *VAR_21;

        if (FUNC_6(FUNC_3(VAR_12) > VAR_10[VAR_19]) ||
            VAR_11 == VAR_5)
                return -FUNC_0(VAR_13);

        if ((VAR_12 & VAR_1) == 0)
                VAR_12 |= VAR_9;

        if (FUNC_1(VAR_11, VAR_2,
                               VAR_4,
                               VAR_3) &&
            VAR_8 >= 0) {

                struct iovec VAR_22[1 + VAR_18*2];
                char VAR_23[VAR_0];
                struct msghdr VAR_24 = {
                        .msg_iov = VAR_22,
                        .msg_iovlen = 1 + VAR_18*2,
                };

                FUNC_9(VAR_23, sizeof(VAR_23), VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
                VAR_22[0] = FUNC_2(VAR_23);

                for (VAR_20 = 0; VAR_20 < VAR_18; VAR_20++) {
                        VAR_22[1+VAR_20*2] = VAR_17[VAR_20];
                        VAR_22[1+VAR_20*2+1] = FUNC_2("\n");
                }

                if (FUNC_11(VAR_8, &VAR_24, VAR_6) >= 0)
                        return -FUNC_0(VAR_13);
        }

        for (VAR_20 = 0; VAR_20 < VAR_18; VAR_20++)
                if (FUNC_10(VAR_17[VAR_20].iov_base, VAR_17[VAR_20].iov_len, "MESSAGE="))
                        break;

        if (FUNC_7(VAR_20 >= VAR_18))
                return -FUNC_0(VAR_13);

        VAR_21 = FUNC_12(VAR_17[VAR_20].iov_base + FUNC_5("MESSAGE="),
                     VAR_17[VAR_20].iov_len - FUNC_5("MESSAGE="));

        return FUNC_8(VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_21);
}
