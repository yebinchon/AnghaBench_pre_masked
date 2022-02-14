
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wined3d_string_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct wined3d_string_buffer *VAR_3, DWORD VAR_4)
{
    if (VAR_4 & VAR_2)
    {
        FUNC_0(VAR_3, "refactoringAllowed");
        VAR_4 &= ~VAR_2;
        if (VAR_4)
            FUNC_0(VAR_3, " | ");
    }

    if (VAR_4 & VAR_1)
    {
        FUNC_0(VAR_3, "forceEarlyDepthStencil");
        VAR_4 &= ~VAR_1;
        if (VAR_4)
            FUNC_0(VAR_3, " | ");
    }

    if (VAR_4 & VAR_0)
    {
        FUNC_0(VAR_3, "enableRawAndStructuredBuffers");
        VAR_4 &= ~VAR_0;
    }

    if (VAR_4)
        FUNC_0(VAR_3, "unknown_flags(%#x)", VAR_4);
}
