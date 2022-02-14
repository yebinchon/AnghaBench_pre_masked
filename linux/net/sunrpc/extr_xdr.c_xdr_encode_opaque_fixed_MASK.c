
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __be32 ;


 unsigned int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,void const*,unsigned int) ;
 int FUNC_3 (char*,int ,unsigned int) ;

__be32 *FUNC_4(__be32 *VAR_0, const void *VAR_1, unsigned int VAR_2)
{
 if (FUNC_1(VAR_2 != 0)) {
  unsigned int VAR_3 = FUNC_0(VAR_2);
  unsigned int VAR_4 = (VAR_3 << 2) - VAR_2;

  if (VAR_1 != ((void*)0))
   FUNC_2(VAR_0, VAR_1, VAR_2);
  if (VAR_4 != 0)
   FUNC_3((char *)VAR_0 + VAR_2, 0, VAR_4);
  VAR_0 += VAR_3;
 }
 return VAR_0;
}
