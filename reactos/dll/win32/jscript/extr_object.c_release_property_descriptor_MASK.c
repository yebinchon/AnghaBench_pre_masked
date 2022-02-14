
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ setter; scalar_t__ getter; int value; scalar_t__ explicit_value; } ;
typedef TYPE_1__ property_desc_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(property_desc_t *VAR_0)
{
    if(VAR_0->explicit_value)
        FUNC_1(VAR_0->value);
    if(VAR_0->getter)
        FUNC_0(VAR_0->getter);
    if(VAR_0->setter)
        FUNC_0(VAR_0->setter);
}
