
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct backtrace_location {int * filename; } ;
typedef int mrb_state ;



__attribute__((used)) static void
FUNC_0(mrb_state *VAR_0,
                 const struct backtrace_location *VAR_1,
                 void *VAR_2)
{
  int *VAR_3 = (int*)VAR_2;

  if (VAR_1->filename == ((void*)0)) return;
  (*VAR_3)++;
}
