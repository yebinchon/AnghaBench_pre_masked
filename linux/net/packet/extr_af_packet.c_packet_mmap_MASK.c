
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; int * vm_ops; scalar_t__ vm_pgoff; } ;
struct socket {struct sock* sk; } ;
struct sock {int dummy; } ;
struct page {int dummy; } ;
struct packet_ring_buffer {unsigned long pg_vec_len; unsigned long pg_vec_pages; TYPE_1__* pg_vec; } ;
struct packet_sock {int pg_vec_lock; int mapped; struct packet_ring_buffer tx_ring; struct packet_ring_buffer rx_ring; } ;
struct file {int dummy; } ;
struct TYPE_2__ {void* buffer; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 struct page* FUNC_3 (void*) ;
 struct packet_sock* FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct vm_area_struct*,unsigned long,struct page*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_3, struct socket *VAR_4,
  struct vm_area_struct *VAR_5)
{
 struct sock *VAR_6 = VAR_4->sk;
 struct packet_sock *VAR_7 = FUNC_4(VAR_6);
 unsigned long VAR_8, VAR_9;
 struct packet_ring_buffer *VAR_10;
 unsigned long VAR_11;
 int VAR_12 = -VAR_0;
 int VAR_13;

 if (VAR_5->vm_pgoff)
  return -VAR_0;

 FUNC_1(&VAR_7->pg_vec_lock);

 VAR_9 = 0;
 for (VAR_10 = &VAR_7->rx_ring; VAR_10 <= &VAR_7->tx_ring; VAR_10++) {
  if (VAR_10->pg_vec) {
   VAR_9 += VAR_10->pg_vec_len
      * VAR_10->pg_vec_pages
      * VAR_1;
  }
 }

 if (VAR_9 == 0)
  goto out;

 VAR_8 = VAR_5->vm_end - VAR_5->vm_start;
 if (VAR_8 != VAR_9)
  goto out;

 VAR_11 = VAR_5->vm_start;
 for (VAR_10 = &VAR_7->rx_ring; VAR_10 <= &VAR_7->tx_ring; VAR_10++) {
  if (VAR_10->pg_vec == ((void*)0))
   continue;

  for (VAR_13 = 0; VAR_13 < VAR_10->pg_vec_len; VAR_13++) {
   struct page *VAR_14;
   void *VAR_15 = VAR_10->pg_vec[VAR_13].buffer;
   int VAR_16;

   for (VAR_16 = 0; VAR_16 < VAR_10->pg_vec_pages; VAR_16++) {
    VAR_14 = FUNC_3(VAR_15);
    VAR_12 = FUNC_6(VAR_5, VAR_11, VAR_14);
    if (FUNC_5(VAR_12))
     goto out;
    VAR_11 += VAR_1;
    VAR_15 += VAR_1;
   }
  }
 }

 FUNC_0(&VAR_7->mapped);
 VAR_5->vm_ops = &VAR_2;
 VAR_12 = 0;

out:
 FUNC_2(&VAR_7->pg_vec_lock);
 return VAR_12;
}
