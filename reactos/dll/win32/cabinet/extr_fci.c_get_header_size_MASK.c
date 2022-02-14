
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int cab_ULONG ;
struct TYPE_6__ {int cbReserveCFHeader; scalar_t__ cbReserveCFData; scalar_t__ cbReserveCFFolder; } ;
struct TYPE_7__ {TYPE_1__* pccab; scalar_t__ fNextCab; int szPrevDisk; int szPrevCab; scalar_t__ fPrevCab; TYPE_2__ ccab; } ;
struct TYPE_5__ {int szDisk; int szCab; } ;
typedef TYPE_3__ FCI_Int ;
typedef int CFHEADER ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static cab_ULONG FUNC_1( FCI_Int *VAR_0 )
{
    cab_ULONG VAR_1 = sizeof(CFHEADER) + VAR_0->ccab.cbReserveCFHeader;

    if (VAR_0->ccab.cbReserveCFHeader || VAR_0->ccab.cbReserveCFFolder || VAR_0->ccab.cbReserveCFData)
        VAR_1 += 4;

    if (VAR_0->fPrevCab)
        VAR_1 += FUNC_0( VAR_0->szPrevCab ) + 1 + FUNC_0( VAR_0->szPrevDisk ) + 1;

    if (VAR_0->fNextCab)
        VAR_1 += FUNC_0( VAR_0->pccab->szCab ) + 1 + FUNC_0( VAR_0->pccab->szDisk ) + 1;

    return VAR_1;
}
