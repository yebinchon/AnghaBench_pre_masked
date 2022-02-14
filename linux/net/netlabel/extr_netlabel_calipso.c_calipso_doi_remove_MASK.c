
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netlbl_calipso_ops {int (* doi_remove ) (int ,struct netlbl_audit*) ;} ;
struct netlbl_audit {int dummy; } ;


 int VAR_0 ;
 struct netlbl_calipso_ops* FUNC_0 () ;
 int FUNC_1 (int ,struct netlbl_audit*) ;

int FUNC_2(u32 VAR_1, struct netlbl_audit *VAR_2)
{
 int VAR_3 = -VAR_0;
 const struct netlbl_calipso_ops *VAR_4 = FUNC_0();

 if (VAR_4)
  VAR_3 = VAR_4->doi_remove(VAR_1, VAR_2);
 return VAR_3;
}
