
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_3__ {int NtfUnicode; scalar_t__ hwndSelf; int hwndNotify; } ;
typedef scalar_t__ LRESULT ;
typedef scalar_t__ LPARAM ;
typedef scalar_t__ INT ;
typedef TYPE_1__ COMBOEX_INFO ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static LRESULT FUNC_1 (COMBOEX_INFO *VAR_5, LPARAM VAR_6)
{
    if (VAR_6 == VAR_3) {
 INT VAR_7 = FUNC_0(VAR_5->hwndNotify,
    VAR_4, (WPARAM)VAR_5->hwndSelf, VAR_2);
        VAR_5->NtfUnicode = (VAR_7 == VAR_1);
    }
    return VAR_5->NtfUnicode ? VAR_1 : VAR_0;
}
