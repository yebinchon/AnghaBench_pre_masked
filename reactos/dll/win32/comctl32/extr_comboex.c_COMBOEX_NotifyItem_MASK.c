
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_9__ {scalar_t__ NtfUnicode; } ;
struct TYPE_7__ {scalar_t__ pszText; int mask; } ;
struct TYPE_8__ {TYPE_1__ ceItem; int hdr; } ;
typedef int NMHDR ;
typedef TYPE_2__ NMCOMBOBOXEXW ;
typedef scalar_t__ LPWSTR ;
typedef scalar_t__ LPSTR ;
typedef int INT ;
typedef TYPE_3__ COMBOEX_INFO ;
typedef int CHAR ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_3__ const*,scalar_t__,int *) ;
 int VAR_7 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ,scalar_t__,int,scalar_t__,int,int *,int *) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static INT
FUNC_5 (const COMBOEX_INFO *VAR_8, UINT VAR_9, NMCOMBOBOXEXW *VAR_10)
{

    if (VAR_8->NtfUnicode)
 return FUNC_1 (VAR_8, VAR_9, &VAR_10->hdr);
    else {
 LPWSTR VAR_11 = VAR_10->ceItem.pszText;
 LPSTR VAR_12 = 0;
 INT VAR_13, VAR_14 = 0;

 if ((VAR_10->ceItem.mask & VAR_0) && FUNC_4(VAR_11)) {
     VAR_14 = FUNC_3 (VAR_7, 0, VAR_11, -1, 0, 0, ((void*)0), ((void*)0));
     if (VAR_14 > 0) {
                VAR_12 = FUNC_0 ((VAR_14 + 1)*sizeof(CHAR));
  if (!VAR_12) return 0;
  FUNC_3 (VAR_7, 0, VAR_11, -1, VAR_12, VAR_14, 0, 0);
  VAR_10->ceItem.pszText = (LPWSTR)VAR_12;
     }
 }

 if (VAR_9 == VAR_4) VAR_9 = VAR_3;
 else if (VAR_9 == VAR_6) VAR_9 = VAR_5;
 else if (VAR_9 == VAR_2) VAR_9 = VAR_1;

 VAR_13 = FUNC_1 (VAR_8, VAR_9, (NMHDR *)VAR_10);

 if (VAR_12 && VAR_10->ceItem.pszText == (LPWSTR)VAR_12)
     VAR_10->ceItem.pszText = VAR_11;

 FUNC_2(VAR_12);

 return VAR_13;
    }
}
