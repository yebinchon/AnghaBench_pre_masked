
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_hpp_fmt {int (* width ) (struct perf_hpp_fmt*,struct perf_hpp*,TYPE_2__*) ;int list; } ;
struct perf_hpp {int size; int buf; } ;
struct hist_entry {TYPE_2__* hists; } ;
struct TYPE_4__ {TYPE_1__* hpp_list; } ;
struct TYPE_3__ {int fields; } ;


 int FUNC_0 (struct perf_hpp*,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ,char*,int const,char*) ;
 int FUNC_3 (struct perf_hpp_fmt*,struct perf_hpp*,TYPE_2__*) ;

int FUNC_4(struct hist_entry *VAR_0, struct perf_hpp *VAR_1,
       struct perf_hpp_fmt *VAR_2, int VAR_3)
{
 if (!FUNC_1(&VAR_2->list, &VAR_0->hists->hpp_list->fields)) {
  const int VAR_4 = VAR_2->width(VAR_2, VAR_1, VAR_0->hists);
  if (VAR_3 < VAR_4) {
   FUNC_0(VAR_1, VAR_3);
   VAR_3 = FUNC_2(VAR_1->buf, VAR_1->size, "%-*s", VAR_4 - VAR_3, " ");
  }
 }

 return VAR_3;
}
