
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int capture_top; int* offset_vector; int current_position; size_t callout_number; size_t* callout_string; int callout_string_length; scalar_t__ callout_flags; void* callout_string_offset; void* next_item_length; void* pattern_position; int mark; int capture_last; } ;
typedef TYPE_1__ pcre2_callout_block ;
struct TYPE_6__ {int (* callout ) (TYPE_1__*,int ) ;int callout_data; scalar_t__ start_subject; int nomatch_mark; TYPE_1__* cb; } ;
typedef TYPE_2__ match_block ;
typedef int heapframe ;
typedef int PCRE2_SIZE ;
typedef scalar_t__ Fovector ;


 int VAR_0 ;
 size_t* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (size_t*,int) ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void** FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_3(heapframe *VAR_8, match_block *VAR_9, PCRE2_SIZE *VAR_10)
{
int VAR_11;
PCRE2_SIZE VAR_12, VAR_13;
PCRE2_SIZE *VAR_14;
pcre2_callout_block *VAR_15;

*VAR_10 = (*VAR_1 == VAR_5)?
  FUNC_1(VAR_6)[VAR_5] : FUNC_0(VAR_1, 1 + 2*VAR_4);

if (VAR_9->callout == ((void*)0)) return 0;
VAR_14 = (PCRE2_SIZE *)(Fovector) - 2;





VAR_15 = VAR_9->cb;
VAR_15->capture_top = (uint32_t)VAR_3/2 + 1;
VAR_15->capture_last = VAR_0;
VAR_15->offset_vector = VAR_14;
VAR_15->mark = VAR_9->nomatch_mark;
VAR_15->current_position = (PCRE2_SIZE)(VAR_2 - VAR_9->start_subject);
VAR_15->pattern_position = FUNC_0(VAR_1, 1);
VAR_15->next_item_length = FUNC_0(VAR_1, 1 + VAR_4);

if (*VAR_1 == VAR_5)
  {
  VAR_15->callout_number = VAR_1[1 + 2*VAR_4];
  VAR_15->callout_string_offset = 0;
  VAR_15->callout_string = ((void*)0);
  VAR_15->callout_string_length = 0;
  }
else
  {
  VAR_15->callout_number = 0;
  VAR_15->callout_string_offset = FUNC_0(VAR_1, 1 + 3*VAR_4);
  VAR_15->callout_string = VAR_1 + (1 + 4*VAR_4) + 1;
  VAR_15->callout_string_length =
    *VAR_10 - (1 + 4*VAR_4) - 2;
  }

VAR_12 = VAR_14[0];
VAR_13 = VAR_14[1];
VAR_14[0] = VAR_14[1] = VAR_7;
VAR_11 = VAR_9->callout(VAR_15, VAR_9->callout_data);
VAR_14[0] = VAR_12;
VAR_14[1] = VAR_13;
VAR_15->callout_flags = 0;
return VAR_11;
}
