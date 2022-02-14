
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netlbl_calipso_ops {struct calipso_doi* (* doi_getdef ) (int ) ;} ;
struct calipso_doi {int dummy; } ;


 struct netlbl_calipso_ops* FUNC_0 () ;
 struct calipso_doi* FUNC_1 (int ) ;

struct calipso_doi *FUNC_2(u32 VAR_0)
{
 struct calipso_doi *VAR_1 = ((void*)0);
 const struct netlbl_calipso_ops *VAR_2 = FUNC_0();

 if (VAR_2)
  VAR_1 = VAR_2->doi_getdef(VAR_0);
 return VAR_1;
}
