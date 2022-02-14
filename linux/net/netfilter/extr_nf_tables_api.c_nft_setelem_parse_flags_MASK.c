
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nlattr {int dummy; } ;
struct nft_set {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nlattr const*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(const struct nft_set *VAR_3,
       const struct nlattr *VAR_4, u32 *VAR_5)
{
 if (VAR_4 == ((void*)0))
  return 0;

 *VAR_5 = FUNC_1(FUNC_0(VAR_4));
 if (*VAR_5 & ~VAR_1)
  return -VAR_0;
 if (!(VAR_3->flags & VAR_2) &&
     *VAR_5 & VAR_1)
  return -VAR_0;

 return 0;
}
