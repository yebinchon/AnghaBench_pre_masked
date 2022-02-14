
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 int FUNC_0 (char const**) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_1 (char const*,char const*) ;

__attribute__((used)) static __inline BOOL FUNC_2(const char* VAR_3)
{
 int VAR_4;

 const char* VAR_5[] = {
  "Arsenal_________Virtual_",
  "KernSafeVirtual_________",
  "Msft____Virtual_Disk____",
  "VMware__VMware_Virtual_S"
 };

 for (VAR_4 = 0; VAR_4 < (int)(FUNC_0(VAR_5)-(VAR_2?0:1)); VAR_4++)
  if (FUNC_1(VAR_3, VAR_5[VAR_4]) != ((void*)0))
   return VAR_1;
 return VAR_0;
}
