
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_buffer {int overflow; } ;


 int FUNC_0 (struct trace_buffer*,void*) ;

__attribute__((used)) static bool FUNC_1(struct trace_buffer *VAR_0, void *VAR_1)
{






 if (VAR_0->overflow)
  return 0;

 if (!FUNC_0(VAR_0, VAR_1)) {
  VAR_0->overflow = 1;
  return 0;
 }

 return 1;
}
