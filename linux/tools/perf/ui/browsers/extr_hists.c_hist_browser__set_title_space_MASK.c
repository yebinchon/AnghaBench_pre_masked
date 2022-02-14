
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_browser {int extra_title_lines; } ;
struct perf_hpp_list {int nr_header_lines; } ;
struct hists {struct perf_hpp_list* hpp_list; } ;
struct hist_browser {scalar_t__ show_headers; struct hists* hists; struct ui_browser b; } ;



__attribute__((used)) static void FUNC_0(struct hist_browser *VAR_0)
{
 struct ui_browser *VAR_1 = &VAR_0->b;
 struct hists *VAR_2 = VAR_0->hists;
 struct perf_hpp_list *VAR_3 = VAR_2->hpp_list;

 VAR_1->extra_title_lines = VAR_0->show_headers ? VAR_3->nr_header_lines : 0;
}
