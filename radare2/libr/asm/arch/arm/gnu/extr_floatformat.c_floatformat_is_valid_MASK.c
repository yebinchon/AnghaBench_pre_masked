
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct floatformat {int (* is_valid ) (struct floatformat const*,void const*) ;} ;


 int FUNC_0 (struct floatformat const*,void const*) ;

int
FUNC_1 (const struct floatformat *VAR_0, const void *VAR_1)
{
  return VAR_0->is_valid (VAR_0, VAR_1);
}
