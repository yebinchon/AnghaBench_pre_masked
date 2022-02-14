
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_array {int dummy; } ;
struct TYPE_2__ {int hist_data; } ;
struct hist_field {unsigned long flags; int name; TYPE_1__ var; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 struct hist_field* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct trace_array*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct trace_array *VAR_5,
          struct hist_field *VAR_6,
          struct hist_field *VAR_7)
{
 unsigned long VAR_8 = VAR_6->flags;
 unsigned long VAR_9 = VAR_7->flags;

 if ((VAR_8 & VAR_4) ||
     (VAR_8 & VAR_2)) {
  struct hist_field *VAR_10;

  VAR_10 = FUNC_0(VAR_6->var.hist_data, VAR_6->name);
  if (!VAR_10)
   return -VAR_0;
  VAR_8 = VAR_10->flags;
 }

 if ((VAR_9 & VAR_4) ||
     (VAR_9 & VAR_2)) {
  struct hist_field *VAR_11;

  VAR_11 = FUNC_0(VAR_7->var.hist_data, VAR_7->name);
  if (!VAR_11)
   return -VAR_0;
  VAR_9 = VAR_11->flags;
 }

 if ((VAR_8 & VAR_3) !=
     (VAR_9 & VAR_3)) {
  FUNC_1(VAR_5, VAR_1, 0);
  return -VAR_0;
 }

 return 0;
}
