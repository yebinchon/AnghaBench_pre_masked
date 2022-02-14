
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t WPARAM ;


 size_t VAR_0 ;
 char** VAR_1 ;

const char *FUNC_0(WPARAM VAR_2)
{
    const char *VAR_3;

    if(VAR_2 <= VAR_0 && VAR_1[VAR_2])
        VAR_3 = VAR_1[VAR_2];
    else
        VAR_3 = "VK_???";

    return VAR_3;
}
