
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nr_header_lines; } ;
struct c2c_hists {TYPE_1__ list; int hists; } ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *,char const*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct c2c_hists *VAR_0,
      const char *VAR_1,
      int VAR_2)
{
 FUNC_0(&VAR_0->hists, &VAR_0->list);






 FUNC_2(&VAR_0->list);


 VAR_0->list.nr_header_lines = VAR_2;

 return FUNC_1(&VAR_0->list, ((void*)0), VAR_1);
}
