
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __be32 ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,unsigned int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_2(__be32 *VAR_3, __be32 *VAR_4,
         unsigned int VAR_5)
{
 __be32 *VAR_6;




 VAR_6 = VAR_3 + VAR_0 + 1;


 while (*VAR_6++ != VAR_2)
  VAR_6 += 1 + FUNC_0(VAR_6) * VAR_1;

 FUNC_1(VAR_6, VAR_4, VAR_5);
}
