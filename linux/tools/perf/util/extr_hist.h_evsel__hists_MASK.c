
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hists {int dummy; } ;
struct hists_evsel {struct hists hists; } ;
struct evsel {int dummy; } ;



__attribute__((used)) static inline struct hists *FUNC_0(struct evsel *VAR_0)
{
 struct hists_evsel *VAR_1 = (struct hists_evsel *)VAR_0;
 return &VAR_1->hists;
}
