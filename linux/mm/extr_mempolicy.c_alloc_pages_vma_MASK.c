
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;
struct TYPE_2__ {int preferred_node; } ;
struct mempolicy {scalar_t__ mode; int flags; TYPE_1__ v; } ;
typedef int nodemask_t ;
typedef int gfp_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct page* FUNC_1 (int,int,int) ;
 struct page* FUNC_2 (int,int,int,int *) ;
 struct page* FUNC_3 (int,int,unsigned int) ;
 struct mempolicy* FUNC_4 (struct vm_area_struct*,unsigned long) ;
 unsigned int FUNC_5 (struct mempolicy*,struct vm_area_struct*,unsigned long,scalar_t__) ;
 int FUNC_6 (struct mempolicy*) ;
 scalar_t__ FUNC_7 (int,int ) ;
 int FUNC_8 (int,struct mempolicy*,int) ;
 int * FUNC_9 (int,struct mempolicy*) ;
 scalar_t__ FUNC_10 (int) ;

struct page *
FUNC_11(gfp_t VAR_8, int VAR_9, struct vm_area_struct *VAR_10,
  unsigned long VAR_11, int VAR_12, bool VAR_13)
{
 struct mempolicy *VAR_14;
 struct page *VAR_15;
 int VAR_16;
 nodemask_t *VAR_17;

 VAR_14 = FUNC_4(VAR_10, VAR_11);

 if (VAR_14->mode == VAR_2) {
  unsigned VAR_18;

  VAR_18 = FUNC_5(VAR_14, VAR_10, VAR_11, VAR_4 + VAR_9);
  FUNC_6(VAR_14);
  VAR_15 = FUNC_3(VAR_8, VAR_9, VAR_18);
  goto out;
 }

 if (FUNC_10(FUNC_0(VAR_0) && VAR_13)) {
  int VAR_19 = VAR_12;
  if (VAR_14->mode == VAR_3 && !(VAR_14->flags & VAR_1))
   VAR_19 = VAR_14->v.preferred_node;

  VAR_17 = FUNC_9(VAR_8, VAR_14);
  if (!VAR_17 || FUNC_7(VAR_19, *VAR_17)) {
   FUNC_6(VAR_14);
   VAR_15 = FUNC_1(VAR_19,
      VAR_8 | VAR_7, VAR_9);







   if (!VAR_15 && (VAR_8 & VAR_5))
    VAR_15 = FUNC_1(VAR_19,
      VAR_8 | VAR_6, VAR_9);

   goto out;
  }
 }

 VAR_17 = FUNC_9(VAR_8, VAR_14);
 VAR_16 = FUNC_8(VAR_8, VAR_14, VAR_12);
 VAR_15 = FUNC_2(VAR_8, VAR_9, VAR_16, VAR_17);
 FUNC_6(VAR_14);
out:
 return VAR_15;
}
