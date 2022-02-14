
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svr_sock_addr ;
struct sockaddr_storage {int ss_family; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr {int sa_family; } ;
typedef int socklen_t ;
typedef int local_addr ;
struct TYPE_4__ {scalar_t__ state; int sfd; int transport; int request_addr; } ;
typedef TYPE_1__ conn ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__ const*,int ,char*,struct sockaddr*) ;
 scalar_t__ FUNC_2 (int ,struct sockaddr*,int*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static void FUNC_4(const conn *VAR_3, char *VAR_4, char *VAR_5) {
    if (!VAR_3) {
        FUNC_3(VAR_4, "<null>");
    } else if (VAR_3->state == VAR_0) {
        FUNC_3(VAR_4, "<closed>");
    } else {
        struct sockaddr_in6 VAR_6;
        struct sockaddr *VAR_7 = (void *)&VAR_3->request_addr;


        if (VAR_3->state == VAR_1 ||
                (FUNC_0(VAR_3->transport) &&
                 VAR_3->state == VAR_2)) {
            socklen_t VAR_8 = sizeof(VAR_6);

            if (FUNC_2(VAR_3->sfd,
                        (struct sockaddr *)&VAR_6,
                        &VAR_8) == 0) {
                VAR_7 = (struct sockaddr *)&VAR_6;
            }
        }
        FUNC_1(VAR_3, VAR_7->sa_family, VAR_4, VAR_7);

        if (VAR_3->state != VAR_1 && !(FUNC_0(VAR_3->transport) &&
                 VAR_3->state == VAR_2)) {
            struct sockaddr_storage VAR_9;
            socklen_t VAR_10 = sizeof(VAR_9);
            FUNC_2(VAR_3->sfd, (struct sockaddr *)&VAR_9, &VAR_10);
            FUNC_1(VAR_3, VAR_9.ss_family, VAR_5, (struct sockaddr *)&VAR_9);
        }
    }
}
