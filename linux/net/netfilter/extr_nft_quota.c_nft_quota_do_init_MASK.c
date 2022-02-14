
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct nlattr {int dummy; } ;
struct nft_quota {unsigned long flags; int consumed; int quota; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct nlattr const* const) ;
 int FUNC_3 (struct nlattr const* const) ;
 unsigned long FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(const struct nlattr * const VAR_9[],
        struct nft_quota *VAR_10)
{
 unsigned long VAR_11 = 0;
 u64 VAR_12, VAR_13 = 0;

 if (!VAR_9[VAR_3])
  return -VAR_0;

 VAR_12 = FUNC_1(FUNC_3(VAR_9[VAR_3]));
 if (VAR_12 > VAR_8)
  return -VAR_2;

 if (VAR_9[VAR_4]) {
  VAR_13 = FUNC_1(FUNC_3(VAR_9[VAR_4]));
  if (VAR_13 > VAR_12)
   return -VAR_0;
 }

 if (VAR_9[VAR_5]) {
  VAR_11 = FUNC_4(FUNC_2(VAR_9[VAR_5]));
  if (VAR_11 & ~VAR_7)
   return -VAR_0;
  if (VAR_11 & VAR_6)
   return -VAR_1;
 }

 FUNC_0(&VAR_10->quota, VAR_12);
 VAR_10->flags = VAR_11;
 FUNC_0(&VAR_10->consumed, VAR_13);

 return 0;
}
