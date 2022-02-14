
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_buffer {int locations; } ;
typedef int DWORD ;


 int FUNC_0 (char*,struct wined3d_buffer*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct wined3d_buffer*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct wined3d_buffer *VAR_1, DWORD VAR_2)
{
    FUNC_0("buffer %p, location %s.\n", VAR_1, FUNC_2(VAR_2));

    if (VAR_2 & VAR_0)
        FUNC_1(VAR_1);

    VAR_1->locations |= VAR_2;

    FUNC_0("New locations flags are %s.\n", FUNC_2(VAR_1->locations));
}
