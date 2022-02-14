
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct nft_limit {scalar_t__ tokens; scalar_t__ last; scalar_t__ tokens_max; int invert; int lock; } ;
typedef scalar_t__ s64 ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline bool FUNC_3(struct nft_limit *VAR_0, u64 VAR_1)
{
 u64 VAR_2, VAR_3;
 s64 VAR_4;

 FUNC_1(&VAR_0->lock);
 VAR_2 = FUNC_0();
 VAR_3 = VAR_0->tokens + VAR_2 - VAR_0->last;
 if (VAR_3 > VAR_0->tokens_max)
  VAR_3 = VAR_0->tokens_max;

 VAR_0->last = VAR_2;
 VAR_4 = VAR_3 - VAR_1;
 if (VAR_4 >= 0) {
  VAR_0->tokens = VAR_4;
  FUNC_2(&VAR_0->lock);
  return VAR_0->invert;
 }
 VAR_0->tokens = VAR_3;
 FUNC_2(&VAR_0->lock);
 return !VAR_0->invert;
}
