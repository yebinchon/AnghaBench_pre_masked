
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_format {scalar_t__ type; int format; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;

int FUNC_1(const struct gl_format *VAR_4)
{
    if (!VAR_4)
        return 0;
    if (VAR_4->type == VAR_0)
        return VAR_1;
    if (FUNC_0(VAR_4->format))
        return VAR_2;
    return VAR_3;
}
