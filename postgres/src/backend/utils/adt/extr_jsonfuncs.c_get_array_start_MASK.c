
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lex_level; int token_start; } ;
struct TYPE_3__ {int npath; int* array_cur_index; scalar_t__* path_indexes; TYPE_2__* lex; int result_start; } ;
typedef TYPE_1__ GetState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_1)
{
 GetState *VAR_2 = (GetState *) VAR_1;
 int VAR_3 = VAR_2->lex->lex_level;

 if (VAR_3 < VAR_2->npath)
 {

  VAR_2->array_cur_index[VAR_3] = -1;


  if (VAR_2->path_indexes[VAR_3] < 0 &&
   VAR_2->path_indexes[VAR_3] != VAR_0)
  {

   int VAR_4 = FUNC_0(VAR_2->lex);

   if (-VAR_2->path_indexes[VAR_3] <= VAR_4)
    VAR_2->path_indexes[VAR_3] += VAR_4;
  }
 }
 else if (VAR_3 == 0 && VAR_2->npath == 0)
 {





  VAR_2->result_start = VAR_2->lex->token_start;
 }
}
