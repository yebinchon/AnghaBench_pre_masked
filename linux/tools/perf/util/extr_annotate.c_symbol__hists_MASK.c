
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;
struct annotation {struct annotated_source* src; } ;
struct annotated_source {int * histograms; } ;


 int FUNC_0 (struct annotated_source*,int ,int) ;
 struct annotated_source* FUNC_1 () ;
 struct annotation* FUNC_2 (struct symbol*) ;
 int FUNC_3 (struct symbol*) ;

struct annotated_source *FUNC_4(struct symbol *VAR_0, int VAR_1)
{
 struct annotation *VAR_2 = FUNC_2(VAR_0);

 if (VAR_2->src == ((void*)0)) {
  VAR_2->src = FUNC_1();
  if (VAR_2->src == ((void*)0))
   return ((void*)0);
  goto alloc_histograms;
 }

 if (VAR_2->src->histograms == ((void*)0)) {
alloc_histograms:
  FUNC_0(VAR_2->src, FUNC_3(VAR_0),
         VAR_1);
 }

 return VAR_2->src;
}
