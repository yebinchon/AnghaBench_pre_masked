
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tls_session {TYPE_1__* opt; } ;
struct TYPE_2__ {int plugins; scalar_t__ auth_user_pass_verify_script; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static inline bool
FUNC_2(struct tls_session *VAR_2)
{
    return (VAR_2->opt->auth_user_pass_verify_script
            || FUNC_1(VAR_2->opt->plugins, VAR_0)



            );
}
