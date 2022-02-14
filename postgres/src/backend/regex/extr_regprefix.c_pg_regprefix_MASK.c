
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct guts {int info; int cmap; TYPE_1__* tree; } ;
struct cnfa {int nstates; } ;
struct TYPE_5__ {scalar_t__ re_magic; int re_csize; scalar_t__ re_guts; int re_collation; } ;
typedef TYPE_2__ regex_t ;
typedef int chr ;
struct TYPE_4__ {struct cnfa cnfa; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct cnfa*,int *,int *,size_t*) ;
 int FUNC_4 (int ) ;

int
FUNC_5(regex_t *VAR_8,
    chr **VAR_9,
    size_t *VAR_10)
{
 struct guts *VAR_11;
 struct cnfa *VAR_12;
 int VAR_13;


 if (VAR_9 == ((void*)0) || VAR_10 == ((void*)0))
  return VAR_2;
 *VAR_9 = ((void*)0);
 *VAR_10 = 0;
 if (VAR_8 == ((void*)0) || VAR_8->re_magic != VAR_7)
  return VAR_2;
 if (VAR_8->re_csize != sizeof(chr))
  return VAR_3;


 FUNC_4(VAR_8->re_collation);


 VAR_11 = (struct guts *) VAR_8->re_guts;
 if (VAR_11->info & VAR_6)
  return VAR_4;






 FUNC_2(VAR_11->tree != ((void*)0));
 VAR_12 = &VAR_11->tree->cnfa;






 *VAR_9 = (chr *) FUNC_1(VAR_12->nstates * sizeof(chr));
 if (*VAR_9 == ((void*)0))
  return VAR_0;


 VAR_13 = FUNC_3(VAR_12, &VAR_11->cmap, *VAR_9, VAR_10);

 FUNC_2(*VAR_10 <= VAR_12->nstates);


 if (VAR_13 != VAR_5 && VAR_13 != VAR_1)
 {
  FUNC_0(*VAR_9);
  *VAR_9 = ((void*)0);
  *VAR_10 = 0;
 }

 return VAR_13;
}
