
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct rds_sock {int dummy; } ;
struct in6_addr {int dummy; } ;
typedef int __u32 ;
typedef int __be16 ;
struct TYPE_3__ {int sk_refcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct in6_addr const*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_1__* FUNC_4 (struct rds_sock*) ;
 int FUNC_5 (char*,struct rds_sock*,struct in6_addr const*,int ) ;
 int FUNC_6 (int *) ;
 struct rds_sock* FUNC_7 (int *,int *,int ) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int ) ;

struct rds_sock *FUNC_9(const struct in6_addr *VAR_4, __be16 VAR_5,
    __u32 VAR_6)
{
 u8 VAR_7[VAR_0];
 struct rds_sock *VAR_8;

 FUNC_0(VAR_7, VAR_4, VAR_5, VAR_6);
 FUNC_2();
 VAR_8 = FUNC_7(&VAR_2, VAR_7, VAR_3);
 if (VAR_8 && (FUNC_8(FUNC_4(VAR_8), VAR_1) ||
     !FUNC_6(&FUNC_4(VAR_8)->sk_refcnt)))
  VAR_8 = ((void*)0);

 FUNC_3();

 FUNC_5("returning rs %p for %pI6c:%u\n", VAR_8, VAR_4,
   FUNC_1(VAR_5));

 return VAR_8;
}
