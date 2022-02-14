
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pixel_format_desc {scalar_t__ format; } ;


 int FUNC_0 (struct pixel_format_desc const*) ;
 scalar_t__ VAR_0 ;
 struct pixel_format_desc const* VAR_1 ;

const struct pixel_format_desc *FUNC_1(int VAR_2)
{
    if(VAR_2 >= FUNC_0(VAR_1))
        return ((void*)0);
    if(VAR_1[VAR_2].format == VAR_0)
        return ((void*)0);
    return &VAR_1[VAR_2];
}
