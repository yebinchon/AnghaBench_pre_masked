
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_buffer {int buffer; int data; } ;
struct TYPE_2__ {scalar_t__ skipped_entries; } ;


 TYPE_1__* FUNC_0 (int ,int) ;
 unsigned long FUNC_1 (int ,int) ;
 unsigned long FUNC_2 (int ,int) ;

__attribute__((used)) static void
FUNC_3(struct trace_buffer *VAR_0, unsigned long *VAR_1,
        unsigned long *VAR_2, int VAR_3)
{
 unsigned long VAR_4;

 VAR_4 = FUNC_1(VAR_0->buffer, VAR_3);





 if (FUNC_0(VAR_0->data, VAR_3)->skipped_entries) {
  VAR_4 -= FUNC_0(VAR_0->data, VAR_3)->skipped_entries;

  *VAR_1 = VAR_4;
 } else
  *VAR_1 = VAR_4 +
   FUNC_2(VAR_0->buffer, VAR_3);
 *VAR_2 = VAR_4;
}
