
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ WORD ;
struct TYPE_2__ {scalar_t__ wRecordType; int * pszRecordName; } ;
typedef int TCHAR ;
typedef int * LPTSTR ;
typedef size_t INT ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,scalar_t__) ;

LPTSTR
FUNC_2(WORD VAR_1)
{
    static TCHAR VAR_2[8];
    INT VAR_3;

    for (VAR_3 = 0; ; VAR_3++)
    {
         if (VAR_0[VAR_3].pszRecordName == ((void*)0))
             break;

         if (VAR_0[VAR_3].wRecordType == VAR_1)
             return VAR_0[VAR_3].pszRecordName;
    }

    FUNC_1(VAR_2, FUNC_0("%hu"), VAR_1);

    return VAR_2;
}
