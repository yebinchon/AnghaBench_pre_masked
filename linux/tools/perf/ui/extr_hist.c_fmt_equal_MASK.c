
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_hpp_fmt {scalar_t__ (* equal ) (struct perf_hpp_fmt*,struct perf_hpp_fmt*) ;} ;


 scalar_t__ FUNC_0 (struct perf_hpp_fmt*,struct perf_hpp_fmt*) ;

__attribute__((used)) static bool FUNC_1(struct perf_hpp_fmt *VAR_0, struct perf_hpp_fmt *VAR_1)
{
 return VAR_0->equal && VAR_0->equal(VAR_0, VAR_1);
}
