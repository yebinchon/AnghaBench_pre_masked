
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_buffer {int locations; } ;
typedef int DWORD ;


 int FUNC_0 (char*,struct wined3d_buffer*) ;
 int FUNC_1 (char*,struct wined3d_buffer*,...) ;
 int VAR_0 ;
 int FUNC_2 (struct wined3d_buffer*,unsigned int,unsigned int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct wined3d_buffer *VAR_1, DWORD VAR_2,
        unsigned int VAR_3, unsigned int VAR_4)
{
    FUNC_1("buffer %p, location %s, offset %u, size %u.\n",
            VAR_1, FUNC_3(VAR_2), VAR_3, VAR_4);

    if (VAR_2 & VAR_0)
        FUNC_2(VAR_1, VAR_3, VAR_4);

    VAR_1->locations &= ~VAR_2;

    FUNC_1("New locations flags are %s.\n", FUNC_3(VAR_1->locations));

    if (!VAR_1->locations)
        FUNC_0("Buffer %p does not have any up to date location.\n", VAR_1);
}
