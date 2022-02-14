
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_attributes {int is_visible; int is_enabled; int is_groupbox; int is_httransparent; int is_extransparent; scalar_t__* class_name; } ;
typedef int HWND ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,scalar_t__*,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (scalar_t__*,char*) ;

__attribute__((used)) static void FUNC_4(HWND VAR_9, struct window_attributes *VAR_10)
{
    DWORD VAR_11, VAR_12, VAR_13;

    VAR_11 = FUNC_1(VAR_9, VAR_3);
    VAR_12 = FUNC_1(VAR_9, VAR_2);
    VAR_10->class_name[0] = 0;
    FUNC_0(VAR_9, VAR_10->class_name, sizeof(VAR_10->class_name));
    VAR_13 = FUNC_2(VAR_9, VAR_5, 0, 0);

    VAR_10->is_visible = (VAR_11 & VAR_8) != 0;
    VAR_10->is_enabled = (VAR_11 & VAR_6) == 0;
    VAR_10->is_groupbox = !FUNC_3(VAR_10->class_name, "Button") && (VAR_11 & VAR_1) == VAR_0;
    VAR_10->is_httransparent = VAR_13 == VAR_4;
    VAR_10->is_extransparent = (VAR_12 & VAR_7) != 0;
}
