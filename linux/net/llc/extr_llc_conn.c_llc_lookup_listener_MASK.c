
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct llc_sap {int dummy; } ;
struct llc_addr {int dummy; } ;


 struct sock* FUNC_0 (struct llc_sap*,struct llc_addr*) ;

__attribute__((used)) static struct sock *FUNC_1(struct llc_sap *VAR_0,
     struct llc_addr *VAR_1)
{
 static struct llc_addr VAR_2;
 struct sock *VAR_3 = FUNC_0(VAR_0, VAR_1);

 if (!VAR_3)
  VAR_3 = FUNC_0(VAR_0, &VAR_2);

 return VAR_3;
}
