
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_hpp_list {int dummy; } ;
struct c2c_fmt {int fmt; } ;


 struct c2c_fmt* FUNC_0 (char*) ;
 int FUNC_1 (struct perf_hpp_list*,char*) ;
 int FUNC_2 (struct perf_hpp_list*,int *) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct perf_hpp_list *VAR_0, char *VAR_1)
{
 struct c2c_fmt *VAR_2 = FUNC_0(VAR_1);

 if (!VAR_2) {
  FUNC_3();
  return FUNC_1(VAR_0, VAR_1);
 }

 FUNC_2(VAR_0, &VAR_2->fmt);
 return 0;
}
