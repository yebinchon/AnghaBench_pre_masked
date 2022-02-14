
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ NtfUnicode; } ;
struct TYPE_8__ {int hdr; int iWhy; int szText; int iNewSelection; int fChanged; } ;
struct TYPE_7__ {int iWhy; int iNewSelection; int fChanged; int hdr; int szText; } ;
typedef TYPE_1__ NMCBEENDEDITW ;
typedef TYPE_2__ NMCBEENDEDITA ;
typedef int LPCWSTR ;
typedef int INT ;
typedef TYPE_3__ COMBOEX_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__ const*,int ,int *) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static INT FUNC_3 (const COMBOEX_INFO *VAR_4, NMCBEENDEDITW *VAR_5, LPCWSTR VAR_6)
{

    if (VAR_4->NtfUnicode) {
 FUNC_2(VAR_5->szText, VAR_6, VAR_0);
 return FUNC_0 (VAR_4, VAR_2, &VAR_5->hdr);
    } else {
 NMCBEENDEDITA VAR_7;

        VAR_7.hdr = VAR_5->hdr;
        VAR_7.fChanged = VAR_5->fChanged;
        VAR_7.iNewSelection = VAR_5->iNewSelection;
        FUNC_1 (VAR_3, 0, VAR_6, -1, VAR_7.szText, VAR_0, 0, 0);
        VAR_7.iWhy = VAR_5->iWhy;

        return FUNC_0 (VAR_4, VAR_1, &VAR_7.hdr);
    }
}
