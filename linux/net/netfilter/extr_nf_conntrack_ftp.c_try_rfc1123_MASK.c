
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conntrack_man {int dummy; } ;


 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char const*,size_t,struct nf_conntrack_man*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, size_t VAR_1,
         struct nf_conntrack_man *VAR_2, char VAR_3,
         unsigned int *VAR_4)
{
 int VAR_5;
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  if (FUNC_0(VAR_0[VAR_5]))
   break;

 if (VAR_5 == VAR_1)
  return 0;

 *VAR_4 += VAR_5;

 return FUNC_1(VAR_0 + VAR_5, VAR_1 - VAR_5, VAR_2, 0, VAR_4);
}
