
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ output_size; int * output; int * output_end; int * out_str; } ;
typedef TYPE_1__ pcre2_output_context ;
typedef int PCRE2_UCHAR ;
typedef int * PCRE2_SPTR ;
typedef scalar_t__ PCRE2_SIZE ;



__attribute__((used)) static void
FUNC_0(pcre2_output_context *VAR_0, PCRE2_SIZE VAR_1)
{
uint8_t *VAR_2 = VAR_0->out_str;
PCRE2_UCHAR *VAR_3 = VAR_0->output;
PCRE2_SPTR VAR_4 = VAR_0->output_end;
PCRE2_SIZE VAR_5 = VAR_0->output_size;

do
  {
  VAR_5++;

  if (VAR_3 < VAR_4)
    *VAR_3++ = *VAR_2++;
  }
while (--VAR_1 != 0);

VAR_0->output = VAR_3;
VAR_0->output_size = VAR_5;
}
