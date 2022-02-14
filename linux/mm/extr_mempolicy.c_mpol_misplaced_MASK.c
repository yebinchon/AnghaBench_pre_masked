
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zoneref {int zone; } ;
struct vm_area_struct {unsigned long vm_pgoff; int vm_start; } ;
struct page {int dummy; } ;
struct TYPE_2__ {int preferred_node; int nodes; } ;
struct mempolicy {int flags; int mode; TYPE_1__ v; } ;


 int FUNC_0 () ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 struct zoneref* FUNC_2 (int ,int ,int *) ;
 struct mempolicy* FUNC_3 (struct vm_area_struct*,unsigned long) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mempolicy*) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (struct mempolicy*,unsigned long) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 () ;
 int FUNC_12 (int ,struct page*,int,int) ;
 int FUNC_13 (int ) ;

int FUNC_14(struct page *VAR_7, struct vm_area_struct *VAR_8, unsigned long VAR_9)
{
 struct mempolicy *VAR_10;
 struct zoneref *VAR_11;
 int VAR_12 = FUNC_10(VAR_7);
 unsigned long VAR_13;
 int VAR_14 = FUNC_11();
 int VAR_15 = FUNC_1(VAR_14);
 int VAR_16 = VAR_4;
 int VAR_17 = -1;

 VAR_10 = FUNC_3(VAR_8, VAR_9);
 if (!(VAR_10->flags & VAR_2))
  goto out;

 switch (VAR_10->mode) {
 case 129:
  VAR_13 = VAR_8->vm_pgoff;
  VAR_13 += (VAR_9 - VAR_8->vm_start) >> VAR_5;
  VAR_16 = FUNC_9(VAR_10, VAR_13);
  break;

 case 128:
  if (VAR_10->flags & VAR_1)
   VAR_16 = FUNC_8();
  else
   VAR_16 = VAR_10->v.preferred_node;
  break;

 case 130:







  if (FUNC_6(VAR_12, VAR_10->v.nodes))
   goto out;
  VAR_11 = FUNC_2(
    FUNC_7(FUNC_8(), VAR_0),
    FUNC_4(VAR_0),
    &VAR_10->v.nodes);
  VAR_16 = FUNC_13(VAR_11->zone);
  break;

 default:
  FUNC_0();
 }


 if (VAR_10->flags & VAR_3) {
  VAR_16 = VAR_15;

  if (!FUNC_12(VAR_6, VAR_7, VAR_12, VAR_14))
   goto out;
 }

 if (VAR_12 != VAR_16)
  VAR_17 = VAR_16;
out:
 FUNC_5(VAR_10);

 return VAR_17;
}
