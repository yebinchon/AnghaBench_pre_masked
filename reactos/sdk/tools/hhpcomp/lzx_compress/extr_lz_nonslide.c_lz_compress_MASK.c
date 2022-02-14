
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_8__ {int eofcount; int chars_in_buf; int block_loc; int max_dist; int* lentab; int max_match; int frame_size; int cur_loc; int min_match; scalar_t__ (* output_match ) (TYPE_1__*,int,int) ;int (* output_literal ) (TYPE_1__*,int ) ;int * block_buf; scalar_t__ stop; int ** prevtab; int analysis_valid; } ;
typedef TYPE_1__ lz_info ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ,char*,int,int,int,...) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int *,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_6 (TYPE_1__*,int,int) ;
 int FUNC_7 (TYPE_1__*,int ) ;

int FUNC_8(lz_info *VAR_1, int VAR_2)
{

  u_char *VAR_3, *VAR_4;
  int *VAR_5, *VAR_6;
  u_char **VAR_7, **VAR_8;
  int VAR_9;
  int VAR_10;
  short VAR_11;

  VAR_1->stop = 0;
  while ((FUNC_4(VAR_1) || !VAR_1->eofcount) && !VAR_1->stop && VAR_2 > 0) {

    if (!VAR_1->analysis_valid ||
 (!VAR_1->eofcount &&
  ((VAR_1->chars_in_buf- VAR_1->block_loc) < VAR_2))) {
      int VAR_12 = VAR_1->chars_in_buf - VAR_1->block_loc;
      int VAR_13 = VAR_1->max_dist + VAR_12;
      if (VAR_13 > VAR_1->chars_in_buf)
 VAR_13 = VAR_1->chars_in_buf;



      FUNC_5(VAR_1->block_buf, VAR_1->block_buf + VAR_1->chars_in_buf - VAR_13,
       VAR_13);

      VAR_1->block_loc = VAR_13 - VAR_12;
      VAR_1->chars_in_buf = VAR_13;



      FUNC_1(VAR_1, VAR_2);



      FUNC_3(VAR_1);
    }
    VAR_7 = VAR_8 = VAR_1->prevtab + VAR_1->block_loc;
    VAR_5 = VAR_6 = VAR_1->lentab + VAR_1->block_loc;
    VAR_3 = VAR_1->block_buf + VAR_1->block_loc;
    VAR_10 = VAR_1->max_match;
    if (VAR_1->eofcount) VAR_10 = 0;
    if (VAR_1->chars_in_buf < (VAR_2 + VAR_1->block_loc))
      VAR_4 = VAR_1->block_buf + VAR_1->chars_in_buf - VAR_10;
    else
      VAR_4 = VAR_3 + VAR_2;
    while ((VAR_3 < VAR_4) && (!VAR_1->stop)) {
      VAR_11 = 0;
      VAR_9 = *VAR_6;
      if (VAR_1->frame_size && (VAR_9 > (VAR_1->frame_size - VAR_1->cur_loc % VAR_1->frame_size))) {



 VAR_11 = 1;
 VAR_9 = (VAR_1->frame_size - VAR_1->cur_loc % VAR_1->frame_size);
      }
      if (VAR_9 > VAR_2) {



 VAR_11 = 1;
 VAR_9 = VAR_2;
      }
      if (VAR_9 >= VAR_1->min_match) {
   if (VAR_1->output_match(VAR_1, (*VAR_8 - VAR_1->block_buf) - VAR_1->block_loc,
    VAR_9) < 0) {

     VAR_9 = 1;
   }
      }
      else
 VAR_9 = 1;

      if (VAR_9 < VAR_1->min_match) {
 FUNC_0(VAR_9 == 1);
 VAR_1->output_literal(VAR_1, *VAR_3);
      }

      VAR_3 += VAR_9;
      VAR_8 += VAR_9;
      VAR_6 += VAR_9;
      VAR_1->cur_loc += VAR_9;
      VAR_1->block_loc += VAR_9;
      FUNC_0(VAR_2 >= VAR_9);
      VAR_2 -= VAR_9;

    }
  }
  return 0;
}
