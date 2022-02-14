
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct alloc_context {int spread_dirty_pages; int migratetype; int * nodemask; TYPE_1__* preferred_zoneref; } ;
typedef int nodemask_t ;
typedef int gfp_t ;
struct TYPE_2__ {int zone; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct page* FUNC_1 (int,unsigned int,struct alloc_context*) ;
 int FUNC_2 (struct page*,unsigned int) ;
 scalar_t__ FUNC_3 (struct page*,int,unsigned int) ;
 unsigned int FUNC_4 (int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,struct alloc_context*) ;
 struct page* FUNC_7 (int,unsigned int,unsigned int,struct alloc_context*) ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (struct page*) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int,unsigned int,int,int *,struct alloc_context*,int*,unsigned int*) ;
 int FUNC_11 (struct page*,unsigned int,int,int ) ;
 scalar_t__ FUNC_12 (int) ;

struct page *
FUNC_13(gfp_t VAR_5, unsigned int VAR_6, int VAR_7,
       nodemask_t *VAR_8)
{
 struct page *VAR_9;
 unsigned int VAR_10 = VAR_0;
 gfp_t VAR_11;
 struct alloc_context VAR_12 = { };





 if (FUNC_12(VAR_6 >= VAR_1)) {
  FUNC_0(!(VAR_5 & VAR_3));
  return ((void*)0);
 }

 VAR_5 &= VAR_4;
 VAR_11 = VAR_5;
 if (!FUNC_10(VAR_5, VAR_6, VAR_7, VAR_8, &VAR_12, &VAR_11, &VAR_10))
  return ((void*)0);

 FUNC_6(VAR_5, &VAR_12);





 VAR_10 |= FUNC_4(VAR_12.preferred_zoneref->zone, VAR_5);


 VAR_9 = FUNC_7(VAR_11, VAR_6, VAR_10, &VAR_12);
 if (FUNC_8(VAR_9))
  goto out;







 VAR_11 = FUNC_5(VAR_5);
 VAR_12.spread_dirty_pages = 0;





 if (FUNC_12(VAR_12.nodemask != VAR_8))
  VAR_12.nodemask = VAR_8;

 VAR_9 = FUNC_1(VAR_11, VAR_6, &VAR_12);

out:
 if (FUNC_9() && (VAR_5 & VAR_2) && VAR_9 &&
     FUNC_12(FUNC_3(VAR_9, VAR_5, VAR_6) != 0)) {
  FUNC_2(VAR_9, VAR_6);
  VAR_9 = ((void*)0);
 }

 FUNC_11(VAR_9, VAR_6, VAR_11, VAR_12.migratetype);

 return VAR_9;
}
