
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_hpp_list {int dummy; } ;
struct hists {int socket_filter; int hpp_formats; struct perf_hpp_list* hpp_list; int lock; void* entries; void* entries_collapsed; void** entries_in_array; void** entries_in; } ;


 int FUNC_0 (int *) ;
 void* VAR_0 ;
 int FUNC_1 (struct hists*,int ,int) ;
 int FUNC_2 (int *,int *) ;

int FUNC_3(struct hists *VAR_1, struct perf_hpp_list *VAR_2)
{
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->entries_in_array[0] = VAR_1->entries_in_array[1] = VAR_0;
 VAR_1->entries_in = &VAR_1->entries_in_array[0];
 VAR_1->entries_collapsed = VAR_0;
 VAR_1->entries = VAR_0;
 FUNC_2(&VAR_1->lock, ((void*)0));
 VAR_1->socket_filter = -1;
 VAR_1->hpp_list = VAR_2;
 FUNC_0(&VAR_1->hpp_formats);
 return 0;
}
