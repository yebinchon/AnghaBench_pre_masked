
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int hMainWnd; scalar_t__ hdrivebar; } ;
struct TYPE_4__ {int bottom; int right; } ;
typedef TYPE_1__ RECT ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void)
{
 RECT VAR_2;


 FUNC_0(VAR_0.hdrivebar);
 VAR_0.hdrivebar = 0;


 FUNC_4();


 FUNC_1(VAR_0.hMainWnd, &VAR_2);
 FUNC_3(VAR_0.hMainWnd, VAR_1, 0, FUNC_2(VAR_2.right, VAR_2.bottom));
}
