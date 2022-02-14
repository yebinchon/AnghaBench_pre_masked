
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_event_file {unsigned long flags; int sm_ref; struct trace_array* tr; struct trace_event_call* event_call; } ;
struct trace_event_call {TYPE_1__* class; } ;
struct trace_array {int trace_flags; } ;
struct TYPE_2__ {int (* reg ) (struct trace_event_call*,int ,struct trace_event_file*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,unsigned long*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,int*) ;
 int FUNC_5 (struct trace_event_call*,int ,struct trace_event_file*) ;
 int FUNC_6 (struct trace_event_call*,int ,struct trace_event_file*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct trace_event_call*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;

__attribute__((used)) static int FUNC_14(struct trace_event_file *VAR_15,
      int VAR_16, int VAR_17)
{
 struct trace_event_call *VAR_18 = VAR_15->event_call;
 struct trace_array *VAR_19 = VAR_15->tr;
 unsigned long VAR_20 = VAR_15->flags;
 int VAR_21 = 0;
 int VAR_22;

 switch (VAR_16) {
 case 0:
  if (VAR_17) {
   if (FUNC_0(&VAR_15->sm_ref) > 0)
    break;
   VAR_22 = VAR_15->flags & VAR_6;
   FUNC_2(VAR_9, &VAR_15->flags);
  } else
   VAR_22 = !(VAR_15->flags & VAR_8);

  if (VAR_22 && (VAR_15->flags & VAR_0)) {
   FUNC_2(VAR_1, &VAR_15->flags);
   if (VAR_15->flags & VAR_2) {
    FUNC_12();
    FUNC_2(VAR_3, &VAR_15->flags);
   }

   if (VAR_15->flags & VAR_4) {
    FUNC_13();
    FUNC_2(VAR_5, &VAR_15->flags);
   }

   VAR_18->class->reg(VAR_18, VAR_14, VAR_15);
  }

  if (VAR_15->flags & VAR_8)
   FUNC_4(VAR_7, &VAR_15->flags);
  else
   FUNC_2(VAR_7, &VAR_15->flags);
  break;
 case 1:
  if (!VAR_17)
   FUNC_2(VAR_7, &VAR_15->flags);
  else {
   if (FUNC_1(&VAR_15->sm_ref) > 1)
    break;
   FUNC_4(VAR_9, &VAR_15->flags);
  }

  if (!(VAR_15->flags & VAR_0)) {
   bool VAR_23 = 0, VAR_24 = 0;


   if (VAR_17)
    FUNC_4(VAR_7, &VAR_15->flags);

   if (VAR_19->trace_flags & VAR_11) {
    VAR_23 = 1;
    FUNC_10();
    FUNC_4(VAR_3, &VAR_15->flags);
   }

   if (VAR_19->trace_flags & VAR_12) {
    VAR_24 = 1;
    FUNC_11();
    FUNC_4(VAR_5, &VAR_15->flags);
   }

   VAR_21 = VAR_18->class->reg(VAR_18, VAR_13, VAR_15);
   if (VAR_21) {
    if (VAR_23)
     FUNC_12();
    if (VAR_24)
     FUNC_13();
    FUNC_3("event trace: Could not enable event "
     "%s\n", FUNC_9(VAR_18));
    break;
   }
   FUNC_4(VAR_1, &VAR_15->flags);


   FUNC_4(VAR_10, &VAR_15->flags);
  }
  break;
 }


 if ((VAR_20 & VAR_6) !=
     (VAR_15->flags & VAR_6)) {
  if (VAR_15->flags & VAR_6)
   FUNC_8();
  else
   FUNC_7();
 }

 return VAR_21;
}
