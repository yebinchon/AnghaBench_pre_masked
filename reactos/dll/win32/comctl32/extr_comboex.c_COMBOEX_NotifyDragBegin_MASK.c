
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ NtfUnicode; } ;
struct TYPE_7__ {int iItemid; int hdr; int szText; } ;
struct TYPE_6__ {int iItemid; int hdr; int szText; } ;
typedef TYPE_1__ NMCBEDRAGBEGINW ;
typedef TYPE_2__ NMCBEDRAGBEGINA ;
typedef int LPCWSTR ;
typedef TYPE_3__ COMBOEX_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__ const*,int ,int *) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(const COMBOEX_INFO *VAR_4, LPCWSTR VAR_5)
{

    if (VAR_4->NtfUnicode) {
        NMCBEDRAGBEGINW VAR_6;

 VAR_6.iItemid = -1;
 FUNC_2(VAR_6.szText, VAR_5, VAR_0);
 FUNC_0 (VAR_4, VAR_2, &VAR_6.hdr);
    } else {
 NMCBEDRAGBEGINA VAR_7;

 VAR_7.iItemid = -1;
 FUNC_1 (VAR_3, 0, VAR_5, -1, VAR_7.szText, VAR_0, 0, 0);

 FUNC_0 (VAR_4, VAR_1, &VAR_7.hdr);
    }
}
