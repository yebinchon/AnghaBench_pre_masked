
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int list_len; size_t* renumber_map; int * rev_renumber_map; int * use_list; } ;
typedef TYPE_1__ pdf_write_state ;
typedef int pdf_document ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*,int) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(fz_context *VAR_0, pdf_document *VAR_1, pdf_write_state *VAR_2)
{
 int VAR_3, VAR_4;
 int VAR_5 = FUNC_1(VAR_0, VAR_1);
 if (VAR_5 > VAR_2->list_len)
  FUNC_0(VAR_0, VAR_2, VAR_5-1);

 VAR_4 = 1;
 for (VAR_3 = 1; VAR_3 < VAR_5; VAR_3++)
 {

  if (!VAR_2->use_list[VAR_2->renumber_map[VAR_3]])
  {
   VAR_2->renumber_map[VAR_3] = 0;
  }

  else if (VAR_2->renumber_map[VAR_3] == VAR_3)
  {
   VAR_2->rev_renumber_map[VAR_4] = VAR_2->rev_renumber_map[VAR_3];
   VAR_2->renumber_map[VAR_3] = VAR_4++;
  }



  else
  {
   VAR_2->renumber_map[VAR_3] = VAR_2->renumber_map[VAR_2->renumber_map[VAR_3]];
  }
 }
}
