
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_hpp_fmt {scalar_t__ elide; } ;
struct hists {int dummy; } ;


 int FUNC_0 (struct perf_hpp_fmt*,struct hists*) ;
 scalar_t__ FUNC_1 (struct perf_hpp_fmt*) ;

__attribute__((used)) static inline bool FUNC_2(struct perf_hpp_fmt *VAR_0,
      struct hists *VAR_1)
{
 if (VAR_0->elide)
  return 1;

 if (FUNC_1(VAR_0) &&
     !FUNC_0(VAR_0, VAR_1))
  return 1;

 return 0;
}
