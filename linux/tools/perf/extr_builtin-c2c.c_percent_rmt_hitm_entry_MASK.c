
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_hpp_fmt {int dummy; } ;
struct perf_hpp {int size; int buf; } ;
struct hist_entry {int hists; } ;


 double FUNC_0 (struct hist_entry*,int ) ;
 int FUNC_1 (char*,double) ;
 int FUNC_2 (struct perf_hpp_fmt*,struct perf_hpp*,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ,char*,int,int ) ;

__attribute__((used)) static int
FUNC_4(struct perf_hpp_fmt *VAR_1, struct perf_hpp *VAR_2,
         struct hist_entry *VAR_3)
{
 int VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3->hists);
 double VAR_5 = FUNC_0(VAR_3, VAR_0);
 char VAR_6[10];

 return FUNC_3(VAR_2->buf, VAR_2->size, "%*s", VAR_4, FUNC_1(VAR_6, VAR_5));
}
