
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stable_node {scalar_t__ rmap_hlist_len; int hlist; } ;
struct rmap_item {int address; int nid; int node; int anon_vma; int hlist; struct stable_node* head; } ;
struct page {int dummy; } ;
struct TYPE_2__ {int seqnr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 struct page* FUNC_4 (struct stable_node*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (int *,scalar_t__) ;
 scalar_t__ VAR_8 ;
 int FUNC_10 (struct page*) ;

__attribute__((used)) static void FUNC_11(struct rmap_item *VAR_9)
{
 if (VAR_9->address & VAR_2) {
  struct stable_node *VAR_10;
  struct page *VAR_11;

  VAR_10 = VAR_9->head;
  VAR_11 = FUNC_4(VAR_10, VAR_0);
  if (!VAR_11)
   goto out;

  FUNC_5(&VAR_9->hlist);
  FUNC_10(VAR_11);
  FUNC_8(VAR_11);

  if (!FUNC_6(&VAR_10->hlist))
   VAR_5--;
  else
   VAR_4--;
  FUNC_2(VAR_10->rmap_hlist_len <= 0);
  VAR_10->rmap_hlist_len--;

  FUNC_7(VAR_9->anon_vma);
  VAR_9->address &= VAR_1;

 } else if (VAR_9->address & VAR_3) {
  unsigned char VAR_12;







  VAR_12 = (unsigned char)(VAR_7.seqnr - VAR_9->address);
  FUNC_0(VAR_12 > 1);
  if (!VAR_12)
   FUNC_9(&VAR_9->node,
     VAR_8 + FUNC_1(VAR_9->nid));
  VAR_6--;
  VAR_9->address &= VAR_1;
 }
out:
 FUNC_3();
}
