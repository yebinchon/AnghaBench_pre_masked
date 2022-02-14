
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; } ;
struct TYPE_2__ {int user_ns; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (struct sock const*) ;

__attribute__((used)) static inline bool FUNC_2(const struct sock *VAR_2)
{
 return FUNC_0(FUNC_1(VAR_2)->user_ns, VAR_0) &&
  (VAR_2->sk_state != VAR_1);
}
