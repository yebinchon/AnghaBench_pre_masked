
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pixel_format_desc {scalar_t__ format; } ;
typedef scalar_t__ D3DFORMAT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__,int ) ;
 int FUNC_1 (char const*,int) ;
 struct pixel_format_desc const* VAR_1 ;

const struct pixel_format_desc *FUNC_2(D3DFORMAT VAR_2)
{
    unsigned int VAR_3 = 0;
    while(VAR_1[VAR_3].format != VAR_2 && VAR_1[VAR_3].format != VAR_0) VAR_3++;
    if (VAR_1[VAR_3].format == VAR_0)
        FUNC_0("Unknown format %#x (as FOURCC %s).\n", VAR_2, FUNC_1((const char *)&VAR_2, 4));
    return &VAR_1[VAR_3];
}
