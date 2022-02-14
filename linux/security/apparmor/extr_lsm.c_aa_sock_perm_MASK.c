
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct socket {TYPE_1__* sk; } ;
struct TYPE_2__ {int sk_family; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int ,TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char const*,int ,struct socket*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_0, u32 VAR_1, struct socket *VAR_2)
{
 FUNC_0(!VAR_2);
 FUNC_0(!VAR_2->sk);
 FUNC_0(FUNC_3());

 return FUNC_2(VAR_2->sk->sk_family,
    FUNC_4(VAR_0, VAR_1, VAR_2),
    FUNC_1(VAR_0, VAR_1, VAR_2->sk));
}
