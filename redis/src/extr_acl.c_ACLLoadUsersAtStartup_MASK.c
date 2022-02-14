
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ sds ;
struct TYPE_2__ {char* acl_filename; } ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 TYPE_1__ VAR_3 ;
 int FUNC_5 (int ,char*,...) ;

void FUNC_6(void) {
    if (VAR_3.acl_filename[0] != '\0' && FUNC_3(VAR_2) != 0) {
        FUNC_5(VAR_1,
            "Configuring Redis with users defined in redis.conf and at "
            "the same setting an ACL file path is invalid. This setup "
            "is very likely to lead to configuration errors and security "
            "holes, please define either an ACL file or declare users "
            "directly in your redis.conf, but not both.");
        FUNC_2(1);
    }

    if (FUNC_0() == VAR_0) {
        FUNC_5(VAR_1,
            "Critical error while loading ACLs. Exiting.");
        FUNC_2(1);
    }

    if (VAR_3.acl_filename[0] != '\0') {
        sds VAR_4 = FUNC_1(VAR_3.acl_filename);
        if (VAR_4) {
            FUNC_5(VAR_1,
                "Aborting Redis startup because of ACL errors: %s", VAR_4);
            FUNC_4(VAR_4);
            FUNC_2(1);
        }
    }
}
