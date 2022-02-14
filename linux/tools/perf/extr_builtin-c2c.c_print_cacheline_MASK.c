
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_hpp_list {int dummy; } ;
struct perf_hpp {char* buf; int size; } ;
struct hist_entry {int dummy; } ;
struct c2c_hists {int hists; } ;
typedef int FILE ;


 int FUNC_0 (struct hist_entry*,struct perf_hpp*,struct perf_hpp_list*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,int,int ,int ,int ,int *,int) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(struct c2c_hists *VAR_0,
       struct hist_entry *VAR_1,
       struct perf_hpp_list *VAR_2,
       FILE *VAR_3)
{
 char VAR_4[1000];
 struct perf_hpp VAR_5 = {
  .buf = VAR_4,
  .size = 1000,
 };
 static bool VAR_6;

 if (!VAR_6) {
  FUNC_3(&VAR_0->hists, VAR_3);
  VAR_6 = 1;
 } else {
  FUNC_1(VAR_3, "\n");
 }

 FUNC_1(VAR_3, "  -------------------------------------------------------------\n");
 FUNC_0(VAR_1, &VAR_5, VAR_2);
 FUNC_1(VAR_3, "%s\n", VAR_4);
 FUNC_1(VAR_3, "  -------------------------------------------------------------\n");

 FUNC_2(&VAR_0->hists, 0, 0, 0, 0, VAR_3, 0);
}
