
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (size_t,int) ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 () ;
 int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 () ;

void *FUNC_5(size_t VAR_3, gfp_t VAR_4)
{
 void *VAR_5;

 if ((VAR_4 & (VAR_2 | VAR_1)) == (VAR_2 | VAR_1)) {
  VAR_5 = FUNC_0(VAR_3, VAR_4);
 } else if ((VAR_4 & (VAR_2 | VAR_1)) == VAR_2) {
  unsigned int VAR_6 = FUNC_2();
  VAR_5 = FUNC_0(VAR_3, VAR_0);
  FUNC_1(VAR_6);
 } else {
  unsigned int VAR_7 = FUNC_4();
  VAR_5 = FUNC_0(VAR_3, VAR_0);
  FUNC_3(VAR_7);
 }

 return VAR_5;
}
