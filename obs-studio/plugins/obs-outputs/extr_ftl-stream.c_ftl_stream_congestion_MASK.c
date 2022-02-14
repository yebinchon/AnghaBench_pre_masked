
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftl_stream {scalar_t__ min_priority; float congestion; } ;



__attribute__((used)) static float FUNC_0(void *VAR_0)
{
 struct ftl_stream *VAR_1 = VAR_0;
 return VAR_1->min_priority > 0 ? 1.0f : VAR_1->congestion;
}
