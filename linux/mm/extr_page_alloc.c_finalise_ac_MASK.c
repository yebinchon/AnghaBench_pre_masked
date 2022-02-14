
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alloc_context {int spread_dirty_pages; int nodemask; int high_zoneidx; int zonelist; int preferred_zoneref; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(gfp_t VAR_1, struct alloc_context *VAR_2)
{

 VAR_2->spread_dirty_pages = (VAR_1 & VAR_0);






 VAR_2->preferred_zoneref = FUNC_0(VAR_2->zonelist,
     VAR_2->high_zoneidx, VAR_2->nodemask);
}
