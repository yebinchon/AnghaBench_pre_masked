
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct vo_x11_state {int window; int display; } ;
struct vo {struct vo_x11_state* x11; } ;
struct TYPE_4__ {scalar_t__ value; int member_0; } ;
typedef TYPE_1__ XTextProperty ;
typedef int Atom ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,TYPE_1__*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,char**,int,int ,TYPE_1__*) ;
 int FUNC_3 (struct vo*,int ,char const*) ;

__attribute__((used)) static void FUNC_4(struct vo *VAR_2, Atom VAR_3, const char *VAR_4)
{
    struct vo_x11_state *VAR_5 = VAR_2->x11;
    XTextProperty VAR_6 = {0};

    if (FUNC_2(VAR_5->display, (char **)&VAR_4, 1,
                                    VAR_1, &VAR_6) == VAR_0)
    {
        FUNC_1(VAR_5->display, VAR_5->window, &VAR_6, VAR_3);
    } else {


        FUNC_3(VAR_2, VAR_3, VAR_4);
    }

    if (VAR_6.value)
        FUNC_0(VAR_6.value);
}
