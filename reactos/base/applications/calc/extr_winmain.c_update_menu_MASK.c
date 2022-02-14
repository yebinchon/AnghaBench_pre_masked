
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ usesep; } ;
struct TYPE_4__ {scalar_t__* sel; scalar_t__ idc; int idm; } ;
typedef int HWND ;
typedef int HMENU ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_4 (TYPE_1__*) ;
 TYPE_2__ VAR_6 ;
 TYPE_1__* VAR_7 ;

__attribute__((used)) static void FUNC_5(HWND VAR_8)
{
    HMENU VAR_9 = FUNC_3(FUNC_2(VAR_8), 1);
    unsigned int VAR_10;

    for (VAR_10=0; VAR_10<FUNC_4(VAR_7); VAR_10++) {
        if (*(VAR_7[VAR_10].sel) != VAR_7[VAR_10].idc) {
            FUNC_1(VAR_9, VAR_7[VAR_10].idm, VAR_3|VAR_5);
            FUNC_0(VAR_8, VAR_7[VAR_10].idc, VAR_1);
        } else {
            FUNC_1(VAR_9, VAR_7[VAR_10].idm, VAR_3|VAR_4);
            FUNC_0(VAR_8, VAR_7[VAR_10].idc, VAR_0);
        }
    }
    FUNC_1(VAR_9, VAR_2, VAR_3|(VAR_6.usesep ? VAR_4 : VAR_5));
}
