
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlbl_calipso_ops {int (* doi_free ) (struct calipso_doi*) ;} ;
struct calipso_doi {int dummy; } ;


 struct netlbl_calipso_ops* FUNC_0 () ;
 int FUNC_1 (struct calipso_doi*) ;

void FUNC_2(struct calipso_doi *VAR_0)
{
 const struct netlbl_calipso_ops *VAR_1 = FUNC_0();

 if (VAR_1)
  VAR_1->doi_free(VAR_0);
}
