
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlbl_calipso_ops {int (* doi_add ) (struct calipso_doi*,struct netlbl_audit*) ;} ;
struct netlbl_audit {int dummy; } ;
struct calipso_doi {int dummy; } ;


 int VAR_0 ;
 struct netlbl_calipso_ops* FUNC_0 () ;
 int FUNC_1 (struct calipso_doi*,struct netlbl_audit*) ;

int FUNC_2(struct calipso_doi *VAR_1,
      struct netlbl_audit *VAR_2)
{
 int VAR_3 = -VAR_0;
 const struct netlbl_calipso_ops *VAR_4 = FUNC_0();

 if (VAR_4)
  VAR_3 = VAR_4->doi_add(VAR_1, VAR_2);
 return VAR_3;
}
