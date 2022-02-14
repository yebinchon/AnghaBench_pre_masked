
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* sym_label; } ;
struct TYPE_8__ {int r; struct TYPE_8__* prev_tok; } ;
typedef TYPE_1__ Sym ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* FUNC_0 (TYPE_1__**,int,int ,int ) ;
 TYPE_2__** VAR_2 ;

Sym *FUNC_1(Sym **VAR_3, int VAR_4, int VAR_5)
{
 Sym *VAR_6, **VAR_7;
 VAR_6 = FUNC_0 (VAR_3, VAR_4, 0, 0);
 if (!VAR_6) {
  return VAR_6;
 }
 VAR_6->r = VAR_5;
 VAR_7 = &VAR_2[VAR_4 - VAR_0]->sym_label;
 if (VAR_3 == &VAR_1) {


  while (*VAR_7 != ((void*)0))
   VAR_7 = &(*VAR_7)->prev_tok;
 }
 VAR_6->prev_tok = *VAR_7;
 *VAR_7 = VAR_6;
 return VAR_6;
}
