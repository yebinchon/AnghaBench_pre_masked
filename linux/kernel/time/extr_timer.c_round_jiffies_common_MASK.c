
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long) ;

__attribute__((used)) static unsigned long FUNC_1(unsigned long VAR_1, int VAR_2,
  bool VAR_3)
{
 int VAR_4;
 unsigned long VAR_5 = VAR_1;
 VAR_1 += VAR_2 * 3;

 VAR_4 = VAR_1 % VAR_0;
 if (VAR_4 < VAR_0/4 && !VAR_3)
  VAR_1 = VAR_1 - VAR_4;
 else
  VAR_1 = VAR_1 - VAR_4 + VAR_0;


 VAR_1 -= VAR_2 * 3;





 return FUNC_0(VAR_1) ? VAR_1 : VAR_5;
}
