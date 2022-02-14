
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_hpp_fmt {void* collapse; int free; int equal; int width; int header; int entry; int * color; void* sort; void* cmp; int sort_list; int list; } ;
struct c2c_fmt {struct perf_hpp_fmt fmt; struct c2c_dimension* dim; } ;
struct c2c_dimension {void* cmp; scalar_t__ se; int entry; int * color; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct c2c_dimension* FUNC_1 (char const*) ;
 struct c2c_fmt* FUNC_2 (int) ;

__attribute__((used)) static struct c2c_fmt *FUNC_3(const char *VAR_7)
{
 struct c2c_dimension *VAR_8 = FUNC_1(VAR_7);
 struct c2c_fmt *VAR_9;
 struct perf_hpp_fmt *VAR_10;

 if (!VAR_8)
  return ((void*)0);

 VAR_9 = FUNC_2(sizeof(*VAR_9));
 if (!VAR_9)
  return ((void*)0);

 VAR_9->dim = VAR_8;

 VAR_10 = &VAR_9->fmt;
 FUNC_0(&VAR_10->list);
 FUNC_0(&VAR_10->sort_list);

 VAR_10->cmp = VAR_8->se ? VAR_1 : VAR_8->cmp;
 VAR_10->sort = VAR_8->se ? VAR_1 : VAR_8->cmp;
 VAR_10->color = VAR_8->se ? ((void*)0) : VAR_8->color;
 VAR_10->entry = VAR_8->se ? VAR_3 : VAR_8->entry;
 VAR_10->header = VAR_0;
 VAR_10->width = VAR_4;
 VAR_10->collapse = VAR_8->se ? VAR_2 : VAR_8->cmp;
 VAR_10->equal = VAR_5;
 VAR_10->free = VAR_6;

 return VAR_9;
}
