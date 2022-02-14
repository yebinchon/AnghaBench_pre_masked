
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int head; } ;
struct machine {TYPE_1__ dsos; } ;
typedef int FILE ;


 size_t FUNC_0 (int *,int *,int (*) (struct dso*,int),int) ;

size_t FUNC_1(struct machine *VAR_0, FILE *VAR_1,
         bool (VAR_2)(struct dso *VAR_3, int VAR_4), int VAR_5)
{
 return FUNC_0(&VAR_0->dsos.head, VAR_1, VAR_2, VAR_5);
}
