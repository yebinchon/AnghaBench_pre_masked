
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _headerInfo {int _value; } ;



int FUNC_0(const void * VAR_0, const void *VAR_1 )
{
    return ((const struct _headerInfo *)VAR_0)->_value -
           ((const struct _headerInfo *)VAR_1)->_value;
}
