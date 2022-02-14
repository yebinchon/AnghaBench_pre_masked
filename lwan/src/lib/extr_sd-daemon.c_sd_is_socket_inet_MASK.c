
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ sin6_port; } ;
struct TYPE_4__ {scalar_t__ sin_port; } ;
struct TYPE_6__ {int sa_family; } ;
union sockaddr_union {TYPE_2__ in6; TYPE_1__ in4; TYPE_3__ sa; } ;
typedef scalar_t__ uint16_t ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
typedef int socklen_t ;
typedef int sockaddr ;
typedef int sa_family_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,TYPE_3__*,int*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,int,int) ;

int FUNC_3(int VAR_4, int VAR_5, int VAR_6, int VAR_7, uint16_t VAR_8) {
        union sockaddr_union VAR_9 = {};
        socklen_t VAR_10 = sizeof(VAR_9);
        int VAR_11;

        if (VAR_5 != 0 && VAR_5 != VAR_0 && VAR_5 != VAR_1)
                return -VAR_2;

        VAR_11 = FUNC_2(VAR_4, VAR_6, VAR_7);
        if (VAR_11 <= 0)
                return VAR_11;

        if (FUNC_0(VAR_4, &VAR_9.sa, &VAR_10) < 0)
                return -VAR_3;

        if (VAR_10 < sizeof(sa_family_t))
                return -VAR_2;

        if (VAR_9.sa.sa_family != VAR_0 &&
            VAR_9.sa.sa_family != VAR_1)
                return 0;

        if (VAR_5 > 0)
                if (VAR_9.sa.sa_family != VAR_5)
                        return 0;

        if (VAR_8 > 0) {
                if (VAR_9.sa.sa_family == VAR_0) {
                        if (VAR_10 < sizeof(struct sockaddr_in))
                                return -VAR_2;

                        return FUNC_1(VAR_8) == VAR_9.in4.sin_port;
                } else {
                        if (VAR_10 < sizeof(struct sockaddr_in6))
                                return -VAR_2;

                        return FUNC_1(VAR_8) == VAR_9.in6.sin6_port;
                }
        }

        return 1;
}
