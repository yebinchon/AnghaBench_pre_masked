
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_wayland_state {int allocated_cursor_scale; int scaling; int default_cursor; int cursor_theme; int shm; } ;


 long VAR_0 ;
 int FUNC_0 (struct vo_wayland_state*,char*) ;
 scalar_t__ VAR_1 ;
 char* FUNC_1 (char*) ;
 long FUNC_2 (char const*,char**,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *,int,int ) ;

__attribute__((used)) static int FUNC_6(struct vo_wayland_state *VAR_2)
{
    if (VAR_2->allocated_cursor_scale == VAR_2->scaling)
        return 0;
    else if (VAR_2->cursor_theme)
        FUNC_3(VAR_2->cursor_theme);

    const char *VAR_3 = FUNC_1("XCURSOR_SIZE");
    int VAR_4 = 32;
    if (VAR_3 != ((void*)0)) {
        VAR_1 = 0;
        char *VAR_5;
        long VAR_6 = FUNC_2(VAR_3, &VAR_5, 10);
        if (!*VAR_5 && !VAR_1 && VAR_6 > 0 && VAR_6 <= VAR_0)
            VAR_4 = (int)VAR_6;
    }

    VAR_2->cursor_theme = FUNC_5(((void*)0), VAR_4*VAR_2->scaling, VAR_2->shm);
    if (!VAR_2->cursor_theme) {
        FUNC_0(VAR_2, "Unable to load cursor theme!\n");
        return 1;
    }

    VAR_2->default_cursor = FUNC_4(VAR_2->cursor_theme, "left_ptr");
    if (!VAR_2->default_cursor) {
        FUNC_0(VAR_2, "Unable to load cursor theme!\n");
        return 1;
    }

    VAR_2->allocated_cursor_scale = VAR_2->scaling;

    return 0;
}
