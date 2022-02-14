
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_1 (char*) ;

int FUNC_2(void)
{
 unsigned int VAR_1;
 unsigned int VAR_2;
 unsigned int VAR_3;
 unsigned int VAR_4;
 int VAR_5;
 int VAR_6;
 unsigned long VAR_7 = 0xd;
 int VAR_8;


 VAR_8 = VAR_0;
 {
  VAR_1 = VAR_7;
  VAR_3 = VAR_8;
  FUNC_0(&VAR_1, &VAR_2, &VAR_3, &VAR_4);

  if (VAR_8 == VAR_0) {
   VAR_5 = VAR_2;
   VAR_6 = VAR_1;
  }
 }

 if (VAR_6 == 0) {
  FUNC_1("could not find size/offset of PKRU in xsave state\n");
  return 0;
 }

 return VAR_5;
}
