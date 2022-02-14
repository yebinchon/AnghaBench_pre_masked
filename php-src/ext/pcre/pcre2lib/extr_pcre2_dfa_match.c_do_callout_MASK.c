
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t* offset_vector; size_t start_match; size_t current_position; size_t callout_number; size_t* callout_string; size_t callout_string_length; void* callout_string_offset; void* next_item_length; void* pattern_position; } ;
typedef TYPE_1__ pcre2_callout_block ;
struct TYPE_6__ {int (* callout ) (TYPE_1__*,int ) ;size_t* start_subject; int callout_data; TYPE_1__* cb; } ;
typedef TYPE_2__ dfa_match_block ;
typedef size_t* PCRE2_SPTR ;
typedef size_t PCRE2_SIZE ;


 void* FUNC_0 (size_t*,int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_3(PCRE2_SPTR VAR_3, PCRE2_SIZE *VAR_4, PCRE2_SPTR VAR_5,
  PCRE2_SPTR VAR_6, dfa_match_block *VAR_7, PCRE2_SIZE VAR_8,
  PCRE2_SIZE *VAR_9)
{
pcre2_callout_block *VAR_10 = VAR_7->cb;

*VAR_9 = (VAR_3[VAR_8] == VAR_1)?
  (PCRE2_SIZE)FUNC_1(VAR_2)[VAR_1] :
  (PCRE2_SIZE)FUNC_0(VAR_3, 1 + 2*VAR_0 + VAR_8);

if (VAR_7->callout == ((void*)0)) return 0;




VAR_10->offset_vector = VAR_4;
VAR_10->start_match = (PCRE2_SIZE)(VAR_5 - VAR_7->start_subject);
VAR_10->current_position = (PCRE2_SIZE)(VAR_6 - VAR_7->start_subject);
VAR_10->pattern_position = FUNC_0(VAR_3, 1 + VAR_8);
VAR_10->next_item_length = FUNC_0(VAR_3, 1 + VAR_0 + VAR_8);

if (VAR_3[VAR_8] == VAR_1)
  {
  VAR_10->callout_number = VAR_3[1 + 2*VAR_0 + VAR_8];
  VAR_10->callout_string_offset = 0;
  VAR_10->callout_string = ((void*)0);
  VAR_10->callout_string_length = 0;
  }
else
  {
  VAR_10->callout_number = 0;
  VAR_10->callout_string_offset = FUNC_0(VAR_3, 1 + 3*VAR_0 + VAR_8);
  VAR_10->callout_string = VAR_3 + (1 + 4*VAR_0 + VAR_8) + 1;
  VAR_10->callout_string_length = *VAR_9 - (1 + 4*VAR_0) - 2;
  }

return (VAR_7->callout)(VAR_10, VAR_7->callout_data);
}
