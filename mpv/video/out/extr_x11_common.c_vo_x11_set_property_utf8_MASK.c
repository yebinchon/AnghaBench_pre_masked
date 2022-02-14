
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_x11_state {int window; int display; } ;
struct vo {struct vo_x11_state* x11; } ;
typedef int Atom ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vo_x11_state*,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int,int ,char const*,int ) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static void FUNC_3(struct vo *VAR_2, Atom VAR_3, const char *VAR_4)
{
    struct vo_x11_state *VAR_5 = VAR_2->x11;

    FUNC_1(VAR_5->display, VAR_5->window, VAR_3, FUNC_0(VAR_5, VAR_1), 8,
                    VAR_0, VAR_4, FUNC_2(VAR_4));
}
