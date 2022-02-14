
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_3__ {int bUnicode; scalar_t__ Self; } ;
typedef TYPE_1__ STATUS_INFO ;
typedef scalar_t__ LRESULT ;
typedef scalar_t__ INT ;
typedef int HWND ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static LRESULT
FUNC_1 (STATUS_INFO *VAR_5, HWND VAR_6, INT VAR_7)
{
    if (VAR_7 == VAR_3) {
 INT VAR_8 = FUNC_0(VAR_6, VAR_4, (WPARAM)VAR_5->Self, VAR_2);
 VAR_5->bUnicode = (VAR_8 == VAR_1);
    }
    return VAR_5->bUnicode ? VAR_1 : VAR_0;
}
