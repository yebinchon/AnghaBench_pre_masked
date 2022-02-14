
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static inline int FUNC_2(void)
{
 unsigned int VAR_2;
 unsigned int VAR_3;
 unsigned int VAR_4;
 unsigned int VAR_5;

 VAR_2 = 0x7;
 VAR_4 = 0x0;
 FUNC_0(&VAR_2, &VAR_3, &VAR_4, &VAR_5);

 if (!(VAR_4 & VAR_1)) {
  FUNC_1("cpu does not have PKU\n");
  return 0;
 }
 if (!(VAR_4 & VAR_0)) {
  FUNC_1("cpu does not have OSPKE\n");
  return 0;
 }
 return 1;
}
