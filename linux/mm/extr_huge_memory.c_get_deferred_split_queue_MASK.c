
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct deferred_split {int dummy; } ;
struct pglist_data {struct deferred_split deferred_split_queue; } ;
struct page {int dummy; } ;


 struct pglist_data* FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;

__attribute__((used)) static inline struct deferred_split *FUNC_2(struct page *VAR_0)
{
 struct pglist_data *VAR_1 = FUNC_0(FUNC_1(VAR_0));

 return &VAR_1->deferred_split_queue;
}
