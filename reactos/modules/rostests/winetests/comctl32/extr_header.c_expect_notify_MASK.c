
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hdItem; int fUnicode; int iCode; } ;
typedef int INT ;
typedef int HDITEMA ;
typedef int BOOL ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int) ;

__attribute__((used)) static void FUNC_1(INT VAR_2, BOOL VAR_3, HDITEMA *VAR_4)
{
    FUNC_0(VAR_1 < 10, "notification count %d\n", VAR_1);
    if (VAR_1 < 10)
    {
        VAR_0[VAR_1].iCode = VAR_2;
        VAR_0[VAR_1].fUnicode = VAR_3;
        VAR_0[VAR_1].hdItem = *VAR_4;
        VAR_1++;
    }
}
