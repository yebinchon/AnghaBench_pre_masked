
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_hpp_list {int dso; } ;
struct c2c_fmt {int fmt; struct c2c_dimension* dim; } ;
struct c2c_dimension {int dummy; } ;


 struct c2c_dimension VAR_0 ;
 struct c2c_fmt* FUNC_0 (char*) ;
 int FUNC_1 (struct perf_hpp_list*,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct perf_hpp_list*,char*,int *,int ) ;

__attribute__((used)) static int FUNC_4(struct perf_hpp_list *VAR_1, char *VAR_2)
{
 struct c2c_fmt *VAR_3 = FUNC_0(VAR_2);
 struct c2c_dimension *VAR_4;

 if (!VAR_3) {
  FUNC_2();
  return FUNC_3(VAR_1, VAR_2, ((void*)0), 0);
 }

 VAR_4 = VAR_3->dim;
 if (VAR_4 == &VAR_0)
  VAR_1->dso = 1;

 FUNC_1(VAR_1, &VAR_3->fmt);
 return 0;
}
