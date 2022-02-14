
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cidrange {unsigned int lo; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 unsigned int VAR_2 = ((const struct cidrange *)VAR_0)->lo;
 unsigned int VAR_3 = ((const struct cidrange *)VAR_1)->lo;
 return VAR_2 < VAR_3 ? -1 : VAR_2 > VAR_3 ? 1 : 0;
}
