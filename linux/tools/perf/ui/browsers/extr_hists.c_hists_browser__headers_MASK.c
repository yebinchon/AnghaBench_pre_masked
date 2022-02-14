
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct perf_hpp_list {int nr_header_lines; } ;
struct hists {struct perf_hpp_list* hpp_list; } ;
struct TYPE_4__ {scalar_t__ width; } ;
struct hist_browser {TYPE_1__ b; struct hists* hists; } ;
typedef int headers ;


 int VAR_0 ;
 int FUNC_0 (struct hist_browser*,char*,int,int) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct hist_browser *VAR_1)
{
 struct hists *VAR_2 = VAR_1->hists;
 struct perf_hpp_list *VAR_3 = VAR_2->hpp_list;

 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->nr_header_lines; VAR_4++) {
  char VAR_5[1024];

  FUNC_0(VAR_1, VAR_5,
       sizeof(VAR_5), VAR_4);

  FUNC_1(&VAR_1->b, VAR_4, 0);
  FUNC_2(&VAR_1->b, VAR_0);
  FUNC_3(&VAR_1->b, VAR_5, VAR_1->b.width + 1);
 }
}
