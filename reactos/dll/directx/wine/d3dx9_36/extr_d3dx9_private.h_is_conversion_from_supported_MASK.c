
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pixel_format_desc {scalar_t__ type; int to_rgba; } ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline BOOL FUNC_0(const struct pixel_format_desc *VAR_4)
{
    if (VAR_4->type == VAR_0 || VAR_4->type == VAR_2
            || VAR_4->type == VAR_1)
        return VAR_3;
    return !!VAR_4->to_rgba;
}
