
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct page {int dummy; } ;
struct alloc_context {scalar_t__ migratetype; int * nodemask; int high_zoneidx; int zonelist; TYPE_1__* preferred_zoneref; } ;
typedef int gfp_t ;
typedef enum compact_result { ____Placeholder_compact_result } compact_result ;
typedef enum compact_priority { ____Placeholder_compact_priority } compact_priority ;
struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {int zone; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 struct page* FUNC_1 (int,unsigned int,int ,struct alloc_context*) ;
 struct page* FUNC_2 (int,unsigned int,unsigned int,struct alloc_context*,int,int*) ;
 struct page* FUNC_3 (int,unsigned int,unsigned int,struct alloc_context*,unsigned long*) ;
 struct page* FUNC_4 (int,unsigned int,struct alloc_context*,unsigned long*) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (unsigned int,struct alloc_context*) ;
 int FUNC_7 () ;
 TYPE_2__* VAR_18 ;
 void* FUNC_8 (int ,int ,int *) ;
 struct page* FUNC_9 (int,unsigned int,unsigned int,struct alloc_context*) ;
 int FUNC_10 (int) ;
 unsigned int FUNC_11 (int) ;
 unsigned int VAR_19 ;
 unsigned int FUNC_12 () ;
 scalar_t__ FUNC_13 (struct alloc_context*,unsigned int,unsigned int,int,int*,int*) ;
 scalar_t__ FUNC_14 (int,unsigned int,struct alloc_context*,unsigned int,int,int*) ;
 scalar_t__ FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (unsigned int,int,struct alloc_context*) ;
 int FUNC_17 (int,int *,char*,unsigned int) ;

__attribute__((used)) static inline struct page *
FUNC_18(gfp_t VAR_20, unsigned int VAR_21,
      struct alloc_context *VAR_22)
{
 bool VAR_23 = VAR_20 & VAR_12;
 const bool VAR_24 = VAR_21 > VAR_9;
 struct page *VAR_25 = ((void*)0);
 unsigned int VAR_26;
 unsigned long VAR_27;
 enum compact_priority VAR_28;
 enum compact_result VAR_29;
 int VAR_30;
 int VAR_31;
 unsigned int VAR_32;
 int VAR_33;





 if (FUNC_0((VAR_20 & (VAR_11|VAR_12)) ==
    (VAR_11|VAR_12)))
  VAR_20 &= ~VAR_11;

retry_cpuset:
 VAR_30 = 0;
 VAR_31 = 0;
 VAR_28 = VAR_6;
 VAR_32 = FUNC_12();






 VAR_26 = FUNC_11(VAR_20);







 VAR_22->preferred_zoneref = FUNC_8(VAR_22->zonelist,
     VAR_22->high_zoneidx, VAR_22->nodemask);
 if (!VAR_22->preferred_zoneref->zone)
  goto nopage;

 if (VAR_26 & VAR_2)
  FUNC_16(VAR_21, VAR_20, VAR_22);





 VAR_25 = FUNC_9(VAR_20, VAR_21, VAR_26, VAR_22);
 if (VAR_25)
  goto got_pg;
 if (VAR_23 &&
   (VAR_24 ||
      (VAR_21 > 0 && VAR_22->migratetype != VAR_8))
   && !FUNC_10(VAR_20)) {
  VAR_25 = FUNC_2(VAR_20, VAR_21,
      VAR_26, VAR_22,
      VAR_7,
      &VAR_29);
  if (VAR_25)
   goto got_pg;

   if (VAR_21 >= VAR_19 && (VAR_20 & VAR_13) &&
       !(VAR_20 & VAR_17)) {
   if (VAR_29 == VAR_5 ||
       VAR_29 == VAR_4)
    goto nopage;
  }





  if (VAR_24 && (VAR_20 & VAR_16)) {
   if (VAR_29 == VAR_4)
    goto nopage;






   VAR_28 = VAR_7;
  }
 }

retry:

 if (VAR_26 & VAR_2)
  FUNC_16(VAR_21, VAR_20, VAR_22);

 VAR_33 = FUNC_5(VAR_20);
 if (VAR_33)
  VAR_26 = VAR_33;






 if (!(VAR_26 & VAR_0) || VAR_33) {
  VAR_22->nodemask = ((void*)0);
  VAR_22->preferred_zoneref = FUNC_8(VAR_22->zonelist,
     VAR_22->high_zoneidx, VAR_22->nodemask);
 }


 VAR_25 = FUNC_9(VAR_20, VAR_21, VAR_26, VAR_22);
 if (VAR_25)
  goto got_pg;


 if (!VAR_23)
  goto nopage;


 if (VAR_18->flags & VAR_10)
  goto nopage;


 VAR_25 = FUNC_3(VAR_20, VAR_21, VAR_26, VAR_22,
       &VAR_27);
 if (VAR_25)
  goto got_pg;


 VAR_25 = FUNC_2(VAR_20, VAR_21, VAR_26, VAR_22,
     VAR_28, &VAR_29);
 if (VAR_25)
  goto got_pg;


 if (VAR_20 & VAR_16)
  goto nopage;





 if (VAR_24 && !(VAR_20 & VAR_17))
  goto nopage;

 if (FUNC_14(VAR_20, VAR_21, VAR_22, VAR_26,
     VAR_27 > 0, &VAR_31))
  goto retry;







 if (VAR_27 > 0 &&
   FUNC_13(VAR_22, VAR_21, VAR_26,
    VAR_29, &VAR_28,
    &VAR_30))
  goto retry;



 if (FUNC_6(VAR_32, VAR_22))
  goto retry_cpuset;


 VAR_25 = FUNC_4(VAR_20, VAR_21, VAR_22, &VAR_27);
 if (VAR_25)
  goto got_pg;


 if (FUNC_15(VAR_18) &&
     (VAR_26 == VAR_3 ||
      (VAR_20 & VAR_15)))
  goto nopage;


 if (VAR_27) {
  VAR_31 = 0;
  goto retry;
 }

nopage:

 if (FUNC_6(VAR_32, VAR_22))
  goto retry_cpuset;





 if (VAR_20 & VAR_14) {




  if (FUNC_0(!VAR_23))
   goto fail;






  FUNC_0(VAR_18->flags & VAR_10);







  FUNC_0(VAR_21 > VAR_9);







  VAR_25 = FUNC_1(VAR_20, VAR_21, VAR_1, VAR_22);
  if (VAR_25)
   goto got_pg;

  FUNC_7();
  goto retry;
 }
fail:
 FUNC_17(VAR_20, VAR_22->nodemask,
   "page allocation failure: order:%u", VAR_21);
got_pg:
 return VAR_25;
}
