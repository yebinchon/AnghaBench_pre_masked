
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ui_browser {scalar_t__ rows; scalar_t__ extra_title_lines; scalar_t__ index; scalar_t__ top_idx; } ;
struct perf_hpp_list {scalar_t__ nr_header_lines; } ;
struct hists {struct perf_hpp_list* hpp_list; } ;
struct hist_browser {int show_headers; struct hists* hists; struct ui_browser b; } ;



__attribute__((used)) static void FUNC_0(struct hist_browser *VAR_0)
{
 struct ui_browser *VAR_1 = &VAR_0->b;
 struct hists *VAR_2 = VAR_0->hists;
 struct perf_hpp_list *VAR_3 = VAR_2->hpp_list;
 u16 VAR_4;

 if (!VAR_0->show_headers) {
  VAR_1->rows += VAR_1->extra_title_lines;
  VAR_1->extra_title_lines = 0;
  return;
 }

 VAR_1->extra_title_lines = VAR_3->nr_header_lines;
 VAR_1->rows -= VAR_1->extra_title_lines;




 VAR_4 = VAR_1->index - VAR_1->top_idx;
 if (VAR_4 >= VAR_1->rows)
  VAR_1->index -= VAR_4 - VAR_1->rows + 1;
}
