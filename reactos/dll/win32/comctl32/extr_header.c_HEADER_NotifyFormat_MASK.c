
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_3__ {int nNotifyFormat; int hwndSelf; } ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef int HWND ;
typedef TYPE_1__ HEADER_INFO ;




 int FUNC_0 (int ,int ,int ,int const) ;
 int VAR_0 ;

__attribute__((used)) static LRESULT
FUNC_1 (HEADER_INFO *VAR_1, WPARAM VAR_2, LPARAM VAR_3)
{
    switch (VAR_3)
    {
 case 129:
     return VAR_1->nNotifyFormat;

 case 128:
     VAR_1->nNotifyFormat =
  FUNC_0 ((HWND)VAR_2, VAR_0,
                             (WPARAM)VAR_1->hwndSelf, 129);
     return VAR_1->nNotifyFormat;
    }

    return 0;
}
