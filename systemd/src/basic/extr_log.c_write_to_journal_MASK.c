
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {int msg_iovlen; struct iovec* msg_iov; } ;
struct iovec {int dummy; } ;
typedef int header ;


 int FUNC_0 (struct iovec*) ;
 struct iovec FUNC_1 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*,int,int,int,char const*,int,char const*,char const*,char const*,char const*,char const*) ;
 scalar_t__ FUNC_3 (scalar_t__,struct msghdr*,int ) ;

__attribute__((used)) static int FUNC_4(
                int VAR_4,
                int VAR_5,
                const char *VAR_6,
                int VAR_7,
                const char *VAR_8,
                const char *VAR_9,
                const char *VAR_10,
                const char *VAR_11,
                const char *VAR_12,
                const char *VAR_13) {

        char VAR_14[VAR_0];
        struct iovec VAR_15[4] = {};
        struct msghdr VAR_16 = {};

        if (VAR_3 < 0)
                return 0;

        FUNC_2(VAR_14, sizeof(VAR_14), VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);

        VAR_15[0] = FUNC_1(VAR_14);
        VAR_15[1] = FUNC_1("MESSAGE=");
        VAR_15[2] = FUNC_1(VAR_13);
        VAR_15[3] = FUNC_1("\n");

        VAR_16.msg_iov = VAR_15;
        VAR_16.msg_iovlen = FUNC_0(VAR_15);

        if (FUNC_3(VAR_3, &VAR_16, VAR_1) < 0)
                return -VAR_2;

        return 1;
}
