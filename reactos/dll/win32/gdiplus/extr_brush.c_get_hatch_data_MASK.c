
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GpStatus ;
typedef size_t GpHatchStyle ;


 size_t FUNC_0 (char**) ;
 char** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

GpStatus FUNC_1(GpHatchStyle VAR_3, const char **VAR_4)
{
    if (VAR_3 < FUNC_0(VAR_0))
    {
        *VAR_4 = VAR_0[VAR_3];
        return VAR_2;
    }
    else
        return VAR_1;
}
