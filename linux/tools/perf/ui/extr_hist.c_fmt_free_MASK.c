
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_hpp_fmt {int (* free ) (struct perf_hpp_fmt*) ;int sort_list; int list; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct perf_hpp_fmt*) ;

__attribute__((used)) static void FUNC_3(struct perf_hpp_fmt *VAR_0)
{




 FUNC_0(!FUNC_1(&VAR_0->list));
 FUNC_0(!FUNC_1(&VAR_0->sort_list));

 if (VAR_0->free)
  VAR_0->free(VAR_0);
}
