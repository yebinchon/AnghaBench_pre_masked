
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsk_queue {int ring; } ;
struct xdp_umem {int cq; int fq; } ;
struct xdp_sock {int umem; int tx; int rx; int state; } ;
struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; int vm_page_prot; scalar_t__ vm_pgoff; } ;
struct socket {int sk; } ;
struct page {int dummy; } ;
struct file {int dummy; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 unsigned long FUNC_1 (struct page*) ;
 int FUNC_2 (struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int ) ;
 int FUNC_3 () ;
 struct page* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 struct xdp_sock* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_8, struct socket *VAR_9,
      struct vm_area_struct *VAR_10)
{
 loff_t VAR_11 = (loff_t)VAR_10->vm_pgoff << VAR_2;
 unsigned long VAR_12 = VAR_10->vm_end - VAR_10->vm_start;
 struct xdp_sock *VAR_13 = FUNC_6(VAR_9->sk);
 struct xsk_queue *VAR_14 = ((void*)0);
 struct xdp_umem *VAR_15;
 unsigned long VAR_16;
 struct page *VAR_17;

 if (FUNC_0(VAR_13->state) != VAR_7)
  return -VAR_0;

 if (VAR_11 == VAR_3) {
  VAR_14 = FUNC_0(VAR_13->rx);
 } else if (VAR_11 == VAR_4) {
  VAR_14 = FUNC_0(VAR_13->tx);
 } else {
  VAR_15 = FUNC_0(VAR_13->umem);
  if (!VAR_15)
   return -VAR_1;


  FUNC_3();
  if (VAR_11 == VAR_6)
   VAR_14 = FUNC_0(VAR_15->fq);
  else if (VAR_11 == VAR_5)
   VAR_14 = FUNC_0(VAR_15->cq);
 }

 if (!VAR_14)
  return -VAR_1;


 FUNC_3();
 VAR_17 = FUNC_4(VAR_14->ring);
 if (VAR_12 > FUNC_1(VAR_17))
  return -VAR_1;

 VAR_16 = FUNC_5(VAR_14->ring) >> VAR_2;
 return FUNC_2(VAR_10, VAR_10->vm_start, VAR_16,
          VAR_12, VAR_10->vm_page_prot);
}
