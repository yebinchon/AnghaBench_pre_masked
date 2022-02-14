
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nlattr {int dummy; } ;
struct nft_ctx {int family; int net; } ;
struct nft_connlimit {int limit; int invert; int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct nlattr const* const) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(const struct nft_ctx *VAR_5,
     const struct nlattr * const VAR_6[],
     struct nft_connlimit *VAR_7)
{
 bool VAR_8 = 0;
 u32 VAR_9, VAR_10;

 if (!VAR_6[VAR_2])
  return -VAR_0;

 VAR_10 = FUNC_3(FUNC_2(VAR_6[VAR_2]));

 if (VAR_6[VAR_3]) {
  VAR_9 = FUNC_3(FUNC_2(VAR_6[VAR_3]));
  if (VAR_9 & ~VAR_4)
   return -VAR_1;
  if (VAR_9 & VAR_4)
   VAR_8 = 1;
 }

 FUNC_0(&VAR_7->list);
 VAR_7->limit = VAR_10;
 VAR_7->invert = VAR_8;

 return FUNC_1(VAR_5->net, VAR_5->family);
}
