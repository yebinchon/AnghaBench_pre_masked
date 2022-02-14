
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_hpp_fmt {int dummy; } ;
struct hist_entry {int dummy; } ;
struct data__file {int idx; } ;
typedef int int64_t ;


 int VAR_0 ;
 struct data__file* FUNC_0 (struct perf_hpp_fmt*) ;
 int FUNC_1 (struct hist_entry*,struct hist_entry*,int ,int ) ;

__attribute__((used)) static int64_t
FUNC_2(struct perf_hpp_fmt *VAR_1,
        struct hist_entry *VAR_2, struct hist_entry *VAR_3)
{
 struct data__file *VAR_4 = FUNC_0(VAR_1);

 return FUNC_1(VAR_3, VAR_2, VAR_0, VAR_4->idx);
}
