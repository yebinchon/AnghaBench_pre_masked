
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int clrHighlight; } ;
typedef int RECT ;
typedef int HEADER_INFO ;
typedef int HDC ;
typedef int HBRUSH ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int const*,int *) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void
FUNC_4(const HEADER_INFO *VAR_1, HDC VAR_2)
{
    HBRUSH VAR_3;
    RECT VAR_4;

    FUNC_3(VAR_1, &VAR_4);
    VAR_3 = FUNC_0(VAR_0.clrHighlight);
    FUNC_2(VAR_2, &VAR_4, VAR_3);
    FUNC_1(VAR_3);
}
