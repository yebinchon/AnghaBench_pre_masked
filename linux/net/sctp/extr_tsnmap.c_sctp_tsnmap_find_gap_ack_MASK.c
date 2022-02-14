
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u16 ;


 int FUNC_0 (unsigned long*,int,int) ;
 int FUNC_1 (unsigned long*,int,int) ;

__attribute__((used)) static void FUNC_2(unsigned long *VAR_0, __u16 VAR_1,
         __u16 VAR_2, __u16 *VAR_3, __u16 *VAR_4)
{
 int VAR_5 = VAR_1;
 VAR_5 = FUNC_0(VAR_0, VAR_2, VAR_1);
 if (VAR_5 < VAR_2)
  *VAR_3 = VAR_5;


 if (*VAR_3) {



  VAR_5 = FUNC_1(VAR_0, VAR_2, VAR_5);
  if (VAR_5 < VAR_2)
   *VAR_4 = VAR_5 - 1;
 }
}
