
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int,int) ;
 unsigned int FUNC_1 (unsigned int,int) ;
 int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_2(unsigned int VAR_1, int VAR_2)
{
 unsigned int VAR_3, VAR_4;


 VAR_3 = 3 * 4 + FUNC_0(VAR_1, 4);


 if (VAR_2 <= VAR_0)
  VAR_4 = VAR_3 * (1 << (VAR_0 - VAR_2));
 else
  VAR_4 = FUNC_1(VAR_3, 1 << (VAR_2 - VAR_0));

 return VAR_4;
}
