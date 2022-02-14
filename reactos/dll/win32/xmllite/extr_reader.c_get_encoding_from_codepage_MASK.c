
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xml_encoding ;
typedef scalar_t__ UINT ;
struct TYPE_3__ {scalar_t__ cp; int enc; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

xml_encoding FUNC_1(UINT VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++)
    {
        if (VAR_1[VAR_3].cp == VAR_2) return VAR_1[VAR_3].enc;
    }
    return VAR_0;
}
