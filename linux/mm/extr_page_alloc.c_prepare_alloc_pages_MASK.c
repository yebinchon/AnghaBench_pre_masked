
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alloc_context {int migratetype; int * nodemask; int zonelist; int high_zoneidx; } ;
typedef int nodemask_t ;
typedef int gfp_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int) ;
 scalar_t__ FUNC_8 (int,unsigned int) ;

__attribute__((used)) static inline bool FUNC_9(gfp_t VAR_7, unsigned int VAR_8,
  int VAR_9, nodemask_t *VAR_10,
  struct alloc_context *VAR_11, gfp_t *VAR_12,
  unsigned int *VAR_13)
{
 VAR_11->high_zoneidx = FUNC_4(VAR_7);
 VAR_11->zonelist = FUNC_7(VAR_9, VAR_7);
 VAR_11->nodemask = VAR_10;
 VAR_11->migratetype = FUNC_5(VAR_7);

 if (FUNC_1()) {
  *VAR_12 |= VAR_5;
  if (!VAR_11->nodemask)
   VAR_11->nodemask = &VAR_6;
  else
   *VAR_13 |= VAR_1;
 }

 FUNC_2(VAR_7);
 FUNC_3(VAR_7);

 FUNC_6(VAR_7 & VAR_4);

 if (FUNC_8(VAR_7, VAR_8))
  return 0;

 if (FUNC_0(VAR_2) && VAR_11->migratetype == VAR_3)
  *VAR_13 |= VAR_0;

 return 1;
}
