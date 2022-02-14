
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int xmlreader ;
struct TYPE_4__ {scalar_t__ str; } ;
typedef TYPE_1__ strval ;


 int FUNC_0 (int *,scalar_t__) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_1(xmlreader *VAR_1, strval *VAR_2)
{
    if (VAR_2->str != VAR_0.str)
    {
        FUNC_0(VAR_1, VAR_2->str);
        *VAR_2 = VAR_0;
    }
}
