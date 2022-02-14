
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {size_t opened; int* fds; int* fds_types; int* fds_families; int* fds_acl_flags; int * fds_names; } ;
typedef TYPE_1__ LISTEN_SOCKETS ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,char const*,int ,char const*,int) ;
 int FUNC_2 (int,char const*,char const*,int ) ;

__attribute__((used)) static inline int FUNC_3(LISTEN_SOCKETS *VAR_1, int VAR_2, int VAR_3, int VAR_4, const char *VAR_5, const char *VAR_6, uint16_t VAR_7, int VAR_8) {
    if(VAR_1->opened >= VAR_0) {
        FUNC_1("LISTENER: Too many listening sockets. Failed to add listening %s socket at ip '%s' port %d, protocol %s, socktype %d", VAR_5, VAR_6, VAR_7, VAR_5, VAR_4);
        FUNC_0(VAR_2);
        return -1;
    }

    VAR_1->fds[VAR_1->opened] = VAR_2;
    VAR_1->fds_types[VAR_1->opened] = VAR_4;
    VAR_1->fds_families[VAR_1->opened] = VAR_3;
    VAR_1->fds_names[VAR_1->opened] = FUNC_2(VAR_3, VAR_5, VAR_6, VAR_7);
    VAR_1->fds_acl_flags[VAR_1->opened] = VAR_8;

    VAR_1->opened++;
    return 0;
}
