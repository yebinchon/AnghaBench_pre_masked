
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_hpp_fmt {int level; int free; int sort_list; int list; } ;
struct hpp_dimension {int fmt; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 struct perf_hpp_fmt* FUNC_1 (int ,int) ;

__attribute__((used)) static struct perf_hpp_fmt *FUNC_2(struct hpp_dimension *VAR_1,
             int VAR_2)
{
 struct perf_hpp_fmt *VAR_3;

 VAR_3 = FUNC_1(VAR_1->fmt, sizeof(*VAR_3));
 if (VAR_3) {
  FUNC_0(&VAR_3->list);
  FUNC_0(&VAR_3->sort_list);
  VAR_3->free = VAR_0;
  VAR_3->level = VAR_2;
 }

 return VAR_3;
}
