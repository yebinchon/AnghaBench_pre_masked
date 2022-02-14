
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_ulp_ops {int owner; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char const*) ;
 struct tcp_ulp_ops* FUNC_4 (char const*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static const struct tcp_ulp_ops *FUNC_6(const char *VAR_1)
{
 const struct tcp_ulp_ops *VAR_2 = ((void*)0);

 FUNC_1();
 VAR_2 = FUNC_4(VAR_1);
 if (!VAR_2 || !FUNC_5(VAR_2->owner))
  VAR_2 = ((void*)0);

 FUNC_2();
 return VAR_2;
}
