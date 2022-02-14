
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int data; int buffer; } ;
struct trace_array {int flags; TYPE_2__ trace_buffer; TYPE_2__ max_buffer; TYPE_1__* current_trace; } ;
struct TYPE_8__ {unsigned long entries; } ;
struct TYPE_6__ {int use_max_tr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_5__* FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,int) ;
 int VAR_2 ;
 int FUNC_3 (int ,unsigned long,int) ;
 int FUNC_4 (TYPE_2__*,unsigned long) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct trace_array *VAR_4,
     unsigned long VAR_5, int VAR_6)
{
 int VAR_7;






 VAR_2 = 1;


 if (!VAR_4->trace_buffer.buffer)
  return 0;

 VAR_7 = FUNC_3(VAR_4->trace_buffer.buffer, VAR_5, VAR_6);
 if (VAR_7 < 0)
  return VAR_7;
 if (VAR_6 == VAR_0)
  FUNC_4(&VAR_4->trace_buffer, VAR_5);
 else
  FUNC_1(VAR_4->trace_buffer.data, VAR_6)->entries = VAR_5;

 return VAR_7;
}
