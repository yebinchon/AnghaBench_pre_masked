
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_5__ {TYPE_1__* Part; } ;
struct TYPE_4__ {int LowerLimit; int UpperLimit; } ;
typedef TYPE_2__ IPADDRESS_INFO ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_1 (IPADDRESS_INFO *VAR_2, int VAR_3, WORD VAR_4)
{
    FUNC_0("\n");

    if ( (VAR_3 < 0) || (VAR_3 > 3) ) return VAR_0;

    VAR_2->Part[VAR_3].LowerLimit = VAR_4 & 0xFF;
    VAR_2->Part[VAR_3].UpperLimit = (VAR_4 >> 8) & 0xFF;

    return VAR_1;
}
