
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct trace_seq {int dummy; } ;
struct trace_iterator {int ts; struct trace_entry* ent; struct trace_seq seq; struct trace_array* tr; } ;
struct trace_entry {int dummy; } ;
struct trace_array {int trace_flags; } ;
typedef int pid_t ;
typedef enum trace_type { ____Placeholder_trace_type } trace_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ,struct trace_seq*) ;
 int FUNC_1 (struct trace_seq*,int) ;
 int FUNC_2 (struct trace_array*,int ,struct trace_seq*,int) ;
 int FUNC_3 (struct trace_seq*,struct trace_entry*) ;
 int FUNC_4 (struct trace_seq*,int ) ;
 int FUNC_5 (struct trace_iterator*,struct trace_seq*) ;
 int FUNC_6 (struct trace_seq*,char) ;
 int FUNC_7 (struct trace_seq*,char*) ;

__attribute__((used)) static void
FUNC_8(struct trace_iterator *VAR_11, unsigned long VAR_12,
  enum trace_type VAR_13, int VAR_14, pid_t VAR_15, u32 VAR_16)
{
 struct trace_array *VAR_17 = VAR_11->tr;
 struct trace_seq *VAR_18 = &VAR_11->seq;
 struct trace_entry *VAR_19 = VAR_11->ent;

 if (VAR_12 < (unsigned long)VAR_10 ||
  VAR_12 >= (unsigned long)VAR_9)
  return;

 if (VAR_17->trace_flags & VAR_7) {

  if (VAR_16 & VAR_3)
   FUNC_0(VAR_11->ts, VAR_18);


  if (VAR_16 & VAR_6)
   FUNC_5(VAR_11, VAR_18);


  if (VAR_16 & VAR_4)
   FUNC_1(VAR_18, VAR_14);


  if (VAR_16 & VAR_5) {
   FUNC_4(VAR_18, VAR_15);
   FUNC_7(VAR_18, " | ");
  }


  if (VAR_17->trace_flags & VAR_8)
   FUNC_3(VAR_18, VAR_19);
 }


 FUNC_2(VAR_17, 0, VAR_18, VAR_16 | VAR_1);

 if (VAR_13 == VAR_2)
  FUNC_7(VAR_18, "==========>");
 else
  FUNC_7(VAR_18, "<==========");

 FUNC_2(VAR_17, 0, VAR_18, VAR_16 | VAR_0);
 FUNC_6(VAR_18, '\n');
}
