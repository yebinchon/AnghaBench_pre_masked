
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pktgen_thread {int if_list; } ;
struct pktgen_dev {int list; struct pktgen_thread* pg_thread; scalar_t__ running; } ;


 int VAR_0 ;
 int FUNC_0 (struct pktgen_thread*) ;
 int FUNC_1 (struct pktgen_thread*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct pktgen_thread *VAR_1,
        struct pktgen_dev *VAR_2)
{
 int VAR_3 = 0;







 FUNC_0(VAR_1);

 if (VAR_2->pg_thread) {
  FUNC_3("ERROR: already assigned to a thread\n");
  VAR_3 = -VAR_0;
  goto out;
 }

 VAR_2->running = 0;
 VAR_2->pg_thread = VAR_1;
 FUNC_2(&VAR_2->list, &VAR_1->if_list);

out:
 FUNC_1(VAR_1);
 return VAR_3;
}
