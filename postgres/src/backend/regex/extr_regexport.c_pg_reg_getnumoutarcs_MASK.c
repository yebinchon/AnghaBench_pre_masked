
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cnfa {int nstates; } ;
struct guts {struct cnfa search; } ;
struct TYPE_3__ {scalar_t__ re_magic; scalar_t__ re_guts; } ;
typedef TYPE_1__ regex_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct cnfa*,int,int*,int *,int ) ;

int
FUNC_2(const regex_t *VAR_1, int VAR_2)
{
 struct cnfa *VAR_3;
 int VAR_4;

 FUNC_0(VAR_1 != ((void*)0) && VAR_1->re_magic == VAR_0);
 VAR_3 = &((struct guts *) VAR_1->re_guts)->search;

 if (VAR_2 < 0 || VAR_2 >= VAR_3->nstates)
  return 0;
 VAR_4 = 0;
 FUNC_1(VAR_3, VAR_2, &VAR_4, ((void*)0), 0);
 return VAR_4;
}
