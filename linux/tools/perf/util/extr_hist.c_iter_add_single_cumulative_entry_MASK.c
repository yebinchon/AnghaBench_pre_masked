
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_sample {int dummy; } ;
struct hists {int dummy; } ;
struct hist_entry_iter {int curr; struct hist_entry* he; int parent; struct hist_entry** priv; struct perf_sample* sample; struct evsel* evsel; } ;
struct hist_entry {int filtered; } ;
struct evsel {int dummy; } ;
struct addr_location {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct hists* FUNC_1 (struct evsel*) ;
 int FUNC_2 (struct hist_entry*,struct perf_sample*) ;
 struct hist_entry* FUNC_3 (struct hists*,struct addr_location*,int ,int *,int *,struct perf_sample*,int) ;
 int FUNC_4 (struct hists*,int ) ;

__attribute__((used)) static int
FUNC_5(struct hist_entry_iter *VAR_2,
     struct addr_location *VAR_3)
{
 struct evsel *VAR_4 = VAR_2->evsel;
 struct hists *VAR_5 = FUNC_1(VAR_4);
 struct perf_sample *VAR_6 = VAR_2->sample;
 struct hist_entry **VAR_7 = VAR_2->priv;
 struct hist_entry *VAR_8;
 int VAR_9 = 0;

 VAR_8 = FUNC_3(VAR_5, VAR_3, VAR_2->parent, ((void*)0), ((void*)0),
         VAR_6, 1);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 VAR_2->he = VAR_8;
 VAR_7[VAR_2->curr++] = VAR_8;

 FUNC_2(VAR_8, VAR_6);





 FUNC_0(&VAR_1);

 FUNC_4(VAR_5, VAR_8->filtered);

 return VAR_9;
}
