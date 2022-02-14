
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WORD ;
typedef int UINT ;
struct TYPE_3__ {int rdSize; int rdFunction; } ;
typedef int PHYSDEV ;
typedef TYPE_1__ METARECORD ;
typedef int HPALETTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,int) ;

UINT FUNC_1(PHYSDEV VAR_1, HPALETTE VAR_2, BOOL VAR_3)
{
    char VAR_4[sizeof(METARECORD) - sizeof(WORD)];
    METARECORD *VAR_5 = (METARECORD *)&VAR_4;

    VAR_5->rdSize = (sizeof(METARECORD) - sizeof(WORD)) / sizeof(WORD);
    VAR_5->rdFunction = VAR_0;

    if (!(FUNC_0( VAR_1, VAR_5, VAR_5->rdSize * sizeof(WORD)))) return 0;






    return 1;
}
