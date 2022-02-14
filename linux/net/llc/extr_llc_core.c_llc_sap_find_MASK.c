
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct llc_sap {int dummy; } ;


 struct llc_sap* FUNC_0 (unsigned char) ;
 int FUNC_1 (struct llc_sap*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

struct llc_sap *FUNC_4(unsigned char VAR_0)
{
 struct llc_sap *VAR_1;

 FUNC_2();
 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1 || !FUNC_1(VAR_1))
  VAR_1 = ((void*)0);
 FUNC_3();
 return VAR_1;
}
