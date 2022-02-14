
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfctrl_request_info {int list; int sequence_no; } ;
struct cfctrl {int info_list_lock; int list; int req_seq_no; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct cfctrl *VAR_0,
         struct cfctrl_request_info *VAR_1)
{
 FUNC_3(&VAR_0->info_list_lock);
 FUNC_0(&VAR_0->req_seq_no);
 VAR_1->sequence_no = FUNC_1(&VAR_0->req_seq_no);
 FUNC_2(&VAR_1->list, &VAR_0->list);
 FUNC_4(&VAR_0->info_list_lock);
}
