
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_x11_state {scalar_t__ dnd_requested_format; } ;
typedef scalar_t__ Atom ;


 int FUNC_0 (struct vo_x11_state*,char*,char*) ;
 scalar_t__ FUNC_1 (struct vo_x11_state*,scalar_t__,scalar_t__) ;
 char* FUNC_2 (struct vo_x11_state*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct vo_x11_state *VAR_0, Atom *VAR_1, int VAR_2)
{
    VAR_0->dnd_requested_format = 0;

    for (int VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        FUNC_0(VAR_0, "DnD type: '%s'\n", FUNC_2(VAR_0, VAR_1[VAR_3]));

        if (FUNC_1(VAR_0, VAR_0->dnd_requested_format, VAR_1[VAR_3]))
            VAR_0->dnd_requested_format = VAR_1[VAR_3];
    }

    FUNC_0(VAR_0, "Selected DnD type: %s\n", VAR_0->dnd_requested_format ?
                    FUNC_2(VAR_0, VAR_0->dnd_requested_format) : "(none)");
}
