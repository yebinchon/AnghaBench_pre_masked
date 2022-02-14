
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct map {int dummy; } ;
struct hist_entry_iter {int (* add_entry_cb ) (struct hist_entry_iter*,struct addr_location*,int,void*) ;TYPE_1__* ops; scalar_t__ he; int evsel; int parent; int sample; } ;
struct addr_location {int map; } ;
struct TYPE_2__ {int (* prepare_entry ) (struct hist_entry_iter*,struct addr_location*) ;int (* add_single_entry ) (struct hist_entry_iter*,struct addr_location*) ;int (* add_next_entry ) (struct hist_entry_iter*,struct addr_location*) ;int (* finish_entry ) (struct hist_entry_iter*,struct addr_location*) ;scalar_t__ (* next_entry ) (struct hist_entry_iter*,struct addr_location*) ;} ;


 int VAR_0 ;
 struct map* FUNC_0 (int ) ;
 int FUNC_1 (struct map*) ;
 int FUNC_2 (int ,int *,int *,int ,struct addr_location*,int) ;
 int FUNC_3 (struct hist_entry_iter*,struct addr_location*) ;
 int FUNC_4 (struct hist_entry_iter*,struct addr_location*) ;
 int FUNC_5 (struct hist_entry_iter*,struct addr_location*,int,void*) ;
 scalar_t__ FUNC_6 (struct hist_entry_iter*,struct addr_location*) ;
 int FUNC_7 (struct hist_entry_iter*,struct addr_location*) ;
 int FUNC_8 (struct hist_entry_iter*,struct addr_location*,int,void*) ;
 int FUNC_9 (struct hist_entry_iter*,struct addr_location*) ;

int FUNC_10(struct hist_entry_iter *VAR_1, struct addr_location *VAR_2,
    int VAR_3, void *VAR_4)
{
 int VAR_5, VAR_6;
 struct map *VAR_7 = ((void*)0);

 if (VAR_2)
  VAR_7 = FUNC_0(VAR_2->map);

 VAR_5 = FUNC_2(VAR_1->sample, &VAR_0, &VAR_1->parent,
     VAR_1->evsel, VAR_2, VAR_3);
 if (VAR_5) {
  FUNC_1(VAR_7);
  return VAR_5;
 }

 VAR_5 = VAR_1->ops->prepare_entry(VAR_1, VAR_2);
 if (VAR_5)
  goto out;

 VAR_5 = VAR_1->ops->add_single_entry(VAR_1, VAR_2);
 if (VAR_5)
  goto out;

 if (VAR_1->he && VAR_1->add_entry_cb) {
  VAR_5 = VAR_1->add_entry_cb(VAR_1, VAR_2, 1, VAR_4);
  if (VAR_5)
   goto out;
 }

 while (VAR_1->ops->next_entry(VAR_1, VAR_2)) {
  VAR_5 = VAR_1->ops->add_next_entry(VAR_1, VAR_2);
  if (VAR_5)
   break;

  if (VAR_1->he && VAR_1->add_entry_cb) {
   VAR_5 = VAR_1->add_entry_cb(VAR_1, VAR_2, 0, VAR_4);
   if (VAR_5)
    goto out;
  }
 }

out:
 VAR_6 = VAR_1->ops->finish_entry(VAR_1, VAR_2);
 if (!VAR_5)
  VAR_5 = VAR_6;

 FUNC_1(VAR_7);

 return VAR_5;
}
