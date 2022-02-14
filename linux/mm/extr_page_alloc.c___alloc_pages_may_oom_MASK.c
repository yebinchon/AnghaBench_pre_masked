
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct oom_control {int gfp_mask; unsigned int order; int * memcg; int nodemask; int zonelist; } ;
struct alloc_context {scalar_t__ high_zoneidx; int nodemask; int zonelist; } ;
typedef int gfp_t ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct page* FUNC_1 (int,unsigned int,int ,struct alloc_context const*) ;
 TYPE_1__* VAR_11 ;
 struct page* FUNC_2 (int,unsigned int,int,struct alloc_context const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_12 ;
 scalar_t__ FUNC_5 (struct oom_control*) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int) ;

__attribute__((used)) static inline struct page *
FUNC_8(gfp_t VAR_13, unsigned int VAR_14,
 const struct alloc_context *VAR_15, unsigned long *VAR_16)
{
 struct oom_control VAR_17 = {
  .zonelist = VAR_15->zonelist,
  .nodemask = VAR_15->nodemask,
  .memcg = ((void*)0),
  .gfp_mask = VAR_13,
  .order = VAR_14,
 };
 struct page *VAR_18;

 *VAR_16 = 0;





 if (!FUNC_3(&VAR_12)) {
  *VAR_16 = 1;
  FUNC_7(1);
  return ((void*)0);
 }
 VAR_18 = FUNC_2((VAR_13 | VAR_7) &
          ~VAR_6, VAR_14,
          VAR_2|VAR_0, VAR_15);
 if (VAR_18)
  goto out;


 if (VAR_11->flags & VAR_4)
  goto out;

 if (VAR_14 > VAR_3)
  goto out;






 if (VAR_13 & VAR_9)
  goto out;

 if (VAR_15->high_zoneidx < VAR_5)
  goto out;
 if (FUNC_6())
  goto out;
 if (VAR_13 & VAR_10)
  goto out;


 if (FUNC_5(&VAR_17) || FUNC_0(VAR_13 & VAR_8)) {
  *VAR_16 = 1;





  if (VAR_13 & VAR_8)
   VAR_18 = FUNC_1(VAR_13, VAR_14,
     VAR_1, VAR_15);
 }
out:
 FUNC_4(&VAR_12);
 return VAR_18;
}
