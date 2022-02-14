
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snprintf_buffer {size_t n; size_t s; int* p; } ;
typedef int fz_context ;



__attribute__((used)) static void FUNC_0(fz_context *VAR_0, void *VAR_1, int VAR_2)
{
 struct snprintf_buffer *VAR_3 = VAR_1;
 if (VAR_3->n < VAR_3->s)
  VAR_3->p[VAR_3->n] = VAR_2;
 ++(VAR_3->n);
}
