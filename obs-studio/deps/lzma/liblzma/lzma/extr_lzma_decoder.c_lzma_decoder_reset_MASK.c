
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_8__ {unsigned int pb; unsigned int lp; int lc; } ;
typedef TYPE_3__ lzma_options_lzma ;
struct TYPE_7__ {int high; int * mid; int * low; int choice2; int choice; } ;
struct TYPE_6__ {int high; int * mid; int * low; int choice2; int choice; } ;
struct TYPE_9__ {unsigned int pos_mask; unsigned int literal_pos_mask; scalar_t__ len; scalar_t__ offset; scalar_t__ limit; scalar_t__ symbol; int * probs; int sequence; TYPE_2__ rep_len_decoder; TYPE_1__ match_len_decoder; int pos_align; int * pos_special; int * pos_slot; int * is_rep2; int * is_rep1; int * is_rep0; int * is_rep; int ** is_rep0_long; int ** is_match; int rc; scalar_t__ rep3; scalar_t__ rep2; scalar_t__ rep1; scalar_t__ rep0; int state; int literal_context_bits; int literal; } ;
typedef TYPE_4__ lzma_coder ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,unsigned int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(lzma_coder *VAR_11, const void *VAR_12)
{
 const lzma_options_lzma *VAR_13 = VAR_12;





 VAR_11->pos_mask = (1U << VAR_13->pb) - 1;


 FUNC_2(VAR_11->literal, VAR_13->lc, VAR_13->lp);

 VAR_11->literal_context_bits = VAR_13->lc;
 VAR_11->literal_pos_mask = (1U << VAR_13->lp) - 1;


 VAR_11->state = VAR_10;
 VAR_11->rep0 = 0;
 VAR_11->rep1 = 0;
 VAR_11->rep2 = 0;
 VAR_11->rep3 = 0;
 VAR_11->pos_mask = (1U << VAR_13->pb) - 1;


 FUNC_3(VAR_11->rc);


 for (uint32_t VAR_14 = 0; VAR_14 < VAR_9; ++VAR_14) {
  for (uint32_t VAR_15 = 0; VAR_15 <= VAR_11->pos_mask; ++VAR_15) {
   FUNC_0(VAR_11->is_match[VAR_14][VAR_15]);
   FUNC_0(VAR_11->is_rep0_long[VAR_14][VAR_15]);
  }

  FUNC_0(VAR_11->is_rep[VAR_14]);
  FUNC_0(VAR_11->is_rep0[VAR_14]);
  FUNC_0(VAR_11->is_rep1[VAR_14]);
  FUNC_0(VAR_11->is_rep2[VAR_14]);
 }

 for (uint32_t VAR_16 = 0; VAR_16 < VAR_6; ++VAR_16)
  FUNC_1(VAR_11->pos_slot[VAR_16], VAR_7);

 for (uint32_t VAR_17 = 0; VAR_17 < VAR_2 - VAR_1; ++VAR_17)
  FUNC_0(VAR_11->pos_special[VAR_17]);

 FUNC_1(VAR_11->pos_align, VAR_0);


 const uint32_t VAR_18 = 1U << VAR_13->pb;
 FUNC_0(VAR_11->match_len_decoder.choice);
 FUNC_0(VAR_11->match_len_decoder.choice2);
 FUNC_0(VAR_11->rep_len_decoder.choice);
 FUNC_0(VAR_11->rep_len_decoder.choice2);

 for (uint32_t VAR_19 = 0; VAR_19 < VAR_18; ++VAR_19) {
  FUNC_1(VAR_11->match_len_decoder.low[VAR_19],
    VAR_4);
  FUNC_1(VAR_11->match_len_decoder.mid[VAR_19],
    VAR_5);

  FUNC_1(VAR_11->rep_len_decoder.low[VAR_19],
    VAR_4);
  FUNC_1(VAR_11->rep_len_decoder.mid[VAR_19],
    VAR_5);
 }

 FUNC_1(VAR_11->match_len_decoder.high, VAR_3);
 FUNC_1(VAR_11->rep_len_decoder.high, VAR_3);

 VAR_11->sequence = VAR_8;
 VAR_11->probs = ((void*)0);
 VAR_11->symbol = 0;
 VAR_11->limit = 0;
 VAR_11->offset = 0;
 VAR_11->len = 0;

 return;
}
