
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_cq_ring {unsigned int* head; unsigned int* tail; struct io_uring_cqe* cqes; } ;
struct submitter {unsigned int inflight; struct io_cq_ring cq_ring; } ;
struct io_uring_cqe {int res; scalar_t__ user_data; } ;
struct file {int pending_ios; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct submitter *VAR_5)
{
 struct io_cq_ring *VAR_6 = &VAR_5->cq_ring;
 struct io_uring_cqe *VAR_7;
 unsigned VAR_8, VAR_9 = 0;

 VAR_8 = *VAR_6->head;
 do {
  struct file *VAR_10;

  FUNC_1();
  if (VAR_8 == *VAR_6->tail)
   break;
  VAR_7 = &VAR_6->cqes[VAR_8 & VAR_2];
  if (!VAR_3) {
   VAR_10 = (struct file *) (uintptr_t) VAR_7->user_data;
   VAR_10->pending_ios--;
   if (VAR_7->res != VAR_0) {
    FUNC_0("io: unexpected ret=%d\n", VAR_7->res);
    if (VAR_4 && VAR_7->res == -VAR_1)
     FUNC_0("Your filesystem doesn't support poll\n");
    return -1;
   }
  }
  VAR_9++;
  VAR_8++;
 } while (1);

 VAR_5->inflight -= VAR_9;
 *VAR_6->head = VAR_8;
 FUNC_2();
 return VAR_9;
}
