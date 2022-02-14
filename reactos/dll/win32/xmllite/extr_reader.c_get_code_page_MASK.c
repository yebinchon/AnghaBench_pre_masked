
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t xml_encoding ;
typedef int UINT ;
struct TYPE_2__ {int cp; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t) ;
 int VAR_1 ;
 size_t VAR_2 ;
 TYPE_1__* VAR_3 ;

HRESULT FUNC_1(xml_encoding VAR_4, UINT *VAR_5)
{
    if (VAR_4 == VAR_2)
    {
        FUNC_0("unsupported encoding %d\n", VAR_4);
        return VAR_0;
    }

    *VAR_5 = VAR_3[VAR_4].cp;

    return VAR_1;
}
