
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ in; } ;
struct xen_9pfs_front_priv {int num_rings; scalar_t__ irq; struct xen_9pfs_front_priv* tag; struct xen_9pfs_front_priv* rings; TYPE_2__* intf; int ref; TYPE_1__ data; int dev; int list; } ;
typedef int grant_ref_t ;
struct TYPE_4__ {int * ref; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,scalar_t__) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct xen_9pfs_front_priv*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_8(struct xen_9pfs_front_priv *VAR_4)
{
 int VAR_5, VAR_6;

 FUNC_6(&VAR_3);
 FUNC_4(&VAR_4->list);
 FUNC_7(&VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_4->num_rings; VAR_5++) {
  if (!VAR_4->rings[VAR_5].intf)
   break;
  if (VAR_4->rings[VAR_5].irq > 0)
   FUNC_5(VAR_4->rings[VAR_5].irq, VAR_4->dev);
  if (VAR_4->rings[VAR_5].data.in) {
   for (VAR_6 = 0; VAR_6 < (1 << VAR_1); VAR_6++) {
    grant_ref_t VAR_7;

    VAR_7 = VAR_4->rings[VAR_5].intf->ref[VAR_6];
    FUNC_2(VAR_7, 0, 0);
   }
   FUNC_1((unsigned long)VAR_4->rings[VAR_5].data.in,
       VAR_1 -
       (VAR_0 - VAR_2));
  }
  FUNC_2(VAR_4->rings[VAR_5].ref, 0, 0);
  FUNC_0((unsigned long)VAR_4->rings[VAR_5].intf);
 }
 FUNC_3(VAR_4->rings);
 FUNC_3(VAR_4->tag);
 FUNC_3(VAR_4);
}
