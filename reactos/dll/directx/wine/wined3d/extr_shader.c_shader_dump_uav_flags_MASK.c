
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wined3d_string_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct wined3d_string_buffer *VAR_2, DWORD VAR_3)
{
    if (VAR_3 & VAR_0)
    {
        FUNC_0(VAR_2, "_glc");
        VAR_3 &= ~VAR_0;
    }
    if (VAR_3 & VAR_1)
    {
        FUNC_0(VAR_2, "_opc");
        VAR_3 &= ~VAR_1;
    }

    if (VAR_3)
        FUNC_0(VAR_2, "_unknown_flags(%#x)", VAR_3);
}
