
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int instr_time ;
struct TYPE_11__ {scalar_t__ format; int indent; scalar_t__ timing; scalar_t__ analyze; int str; } ;
struct TYPE_10__ {int created_functions; int emission_counter; int optimization_counter; int inlining_counter; int generation_counter; } ;
typedef TYPE_1__ JitInstrumentation ;
typedef TYPE_2__ ExplainState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,int,TYPE_2__*) ;
 int FUNC_1 (char*,char*,int,TYPE_2__*) ;
 int FUNC_2 (char*,int,TYPE_2__*) ;
 int FUNC_3 (char*,char*,double,int,TYPE_2__*) ;
 int FUNC_4 (char*,int *,int,TYPE_2__*) ;
 int FUNC_5 (int ,int ) ;
 double FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,char*) ;

void
FUNC_11(ExplainState *VAR_5, int VAR_6,
    JitInstrumentation *VAR_7, int VAR_8)
{
 instr_time VAR_9;
 bool VAR_10 = (VAR_8 >= 0);


 if (!VAR_7 || VAR_7->created_functions == 0)
  return;


 FUNC_7(VAR_9);
 FUNC_5(VAR_9, VAR_7->generation_counter);
 FUNC_5(VAR_9, VAR_7->inlining_counter);
 FUNC_5(VAR_9, VAR_7->optimization_counter);
 FUNC_5(VAR_9, VAR_7->emission_counter);

 FUNC_1("JIT", "JIT", 1, VAR_5);


 if (VAR_5->format == VAR_0)
 {
  FUNC_9(VAR_5->str, VAR_5->indent * 2);
  if (VAR_10)
   FUNC_8(VAR_5->str, "JIT for worker %u:\n", VAR_8);
  else
   FUNC_10(VAR_5->str, "JIT:\n");
  VAR_5->indent += 1;

  FUNC_4("Functions", ((void*)0), VAR_7->created_functions, VAR_5);

  FUNC_9(VAR_5->str, VAR_5->indent * 2);
  FUNC_8(VAR_5->str, "Options: %s %s, %s %s, %s %s, %s %s\n",
       "Inlining", VAR_6 & VAR_3 ? "true" : "false",
       "Optimization", VAR_6 & VAR_4 ? "true" : "false",
       "Expressions", VAR_6 & VAR_2 ? "true" : "false",
       "Deforming", VAR_6 & VAR_1 ? "true" : "false");

  if (VAR_5->analyze && VAR_5->timing)
  {
   FUNC_9(VAR_5->str, VAR_5->indent * 2);
   FUNC_8(VAR_5->str,
        "Timing: %s %.3f ms, %s %.3f ms, %s %.3f ms, %s %.3f ms, %s %.3f ms\n",
        "Generation", 1000.0 * FUNC_6(VAR_7->generation_counter),
        "Inlining", 1000.0 * FUNC_6(VAR_7->inlining_counter),
        "Optimization", 1000.0 * FUNC_6(VAR_7->optimization_counter),
        "Emission", 1000.0 * FUNC_6(VAR_7->emission_counter),
        "Total", 1000.0 * FUNC_6(VAR_9));
  }

  VAR_5->indent -= 1;
 }
 else
 {
  FUNC_4("Worker Number", ((void*)0), VAR_8, VAR_5);
  FUNC_4("Functions", ((void*)0), VAR_7->created_functions, VAR_5);

  FUNC_1("Options", "Options", 1, VAR_5);
  FUNC_2("Inlining", VAR_6 & VAR_3, VAR_5);
  FUNC_2("Optimization", VAR_6 & VAR_4, VAR_5);
  FUNC_2("Expressions", VAR_6 & VAR_2, VAR_5);
  FUNC_2("Deforming", VAR_6 & VAR_1, VAR_5);
  FUNC_0("Options", "Options", 1, VAR_5);

  if (VAR_5->analyze && VAR_5->timing)
  {
   FUNC_1("Timing", "Timing", 1, VAR_5);

   FUNC_3("Generation", "ms",
         1000.0 * FUNC_6(VAR_7->generation_counter),
         3, VAR_5);
   FUNC_3("Inlining", "ms",
         1000.0 * FUNC_6(VAR_7->inlining_counter),
         3, VAR_5);
   FUNC_3("Optimization", "ms",
         1000.0 * FUNC_6(VAR_7->optimization_counter),
         3, VAR_5);
   FUNC_3("Emission", "ms",
         1000.0 * FUNC_6(VAR_7->emission_counter),
         3, VAR_5);
   FUNC_3("Total", "ms",
         1000.0 * FUNC_6(VAR_9),
         3, VAR_5);

   FUNC_0("Timing", "Timing", 1, VAR_5);
  }
 }

 FUNC_0("JIT", "JIT", 1, VAR_5);
}
