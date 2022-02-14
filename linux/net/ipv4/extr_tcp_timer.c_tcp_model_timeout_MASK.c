
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;

__attribute__((used)) static unsigned int FUNC_2(struct sock *VAR_1,
          unsigned int VAR_2,
          unsigned int VAR_3)
{
 unsigned int VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_0 / VAR_3);
 if (VAR_2 <= VAR_4)
  VAR_5 = ((2 << VAR_2) - 1) * VAR_3;
 else
  VAR_5 = ((2 << VAR_4) - 1) * VAR_3 +
   (VAR_2 - VAR_4) * VAR_0;
 return FUNC_1(VAR_5);
}
