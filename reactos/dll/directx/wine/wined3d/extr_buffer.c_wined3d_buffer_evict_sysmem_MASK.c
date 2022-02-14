
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_buffer {int flags; int resource; } ;


 int FUNC_0 (char*,struct wined3d_buffer*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct wined3d_buffer*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct wined3d_buffer *VAR_2)
{
    if (VAR_2->flags & VAR_0)
    {
        FUNC_0("Not evicting system memory for buffer %p.\n", VAR_2);
        return;
    }

    FUNC_0("Evicting system memory for buffer %p.\n", VAR_2);
    FUNC_1(VAR_2, VAR_1);
    FUNC_2(&VAR_2->resource);
}
