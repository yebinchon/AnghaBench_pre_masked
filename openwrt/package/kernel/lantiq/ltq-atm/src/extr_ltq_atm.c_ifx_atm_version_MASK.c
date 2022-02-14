
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltq_atm_ops {int (* fw_ver ) (unsigned int*,unsigned int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,char*,unsigned int,unsigned int,...) ;
 int FUNC_1 (unsigned int*,unsigned int*) ;

__attribute__((used)) static inline int FUNC_2(const struct ltq_atm_ops *VAR_3, char *VAR_4)
{
 int VAR_5 = 0;
 unsigned int VAR_6, VAR_7;

 VAR_3->fw_ver(&VAR_6, &VAR_7);

 VAR_5 += FUNC_0(VAR_4 + VAR_5, "ATM%d.%d.%d", VAR_0, VAR_1, VAR_2);
 VAR_5 += FUNC_0(VAR_4 + VAR_5, "    ATM (A1) firmware version %d.%d\n", VAR_6, VAR_7);

 return VAR_5;
}
