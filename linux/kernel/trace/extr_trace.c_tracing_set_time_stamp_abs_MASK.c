
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ buffer; } ;
struct TYPE_3__ {scalar_t__ buffer; } ;
struct trace_array {TYPE_2__ max_buffer; TYPE_1__ trace_buffer; scalar_t__ time_stamp_abs_ref; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int) ;
 int VAR_1 ;

int FUNC_4(struct trace_array *VAR_2, bool VAR_3)
{
 int VAR_4 = 0;

 FUNC_1(&VAR_1);

 if (VAR_3 && VAR_2->time_stamp_abs_ref++)
  goto out;

 if (!VAR_3) {
  if (FUNC_0(!VAR_2->time_stamp_abs_ref)) {
   VAR_4 = -VAR_0;
   goto out;
  }

  if (--VAR_2->time_stamp_abs_ref)
   goto out;
 }

 FUNC_3(VAR_2->trace_buffer.buffer, VAR_3);





 out:
 FUNC_2(&VAR_1);

 return VAR_4;
}
