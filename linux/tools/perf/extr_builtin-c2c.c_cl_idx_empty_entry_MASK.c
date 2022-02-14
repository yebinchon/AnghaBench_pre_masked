
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_hpp_fmt {int dummy; } ;
struct perf_hpp {int size; int buf; } ;
struct hist_entry {int hists; } ;


 int FUNC_0 (struct perf_hpp_fmt*,struct perf_hpp*,int ) ;
 int FUNC_1 (int ,int ,char*,int,char*) ;

__attribute__((used)) static int
FUNC_2(struct perf_hpp_fmt *VAR_0, struct perf_hpp *VAR_1,
     struct hist_entry *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2->hists);

 return FUNC_1(VAR_1->buf, VAR_1->size, "%*s", VAR_3, "");
}
