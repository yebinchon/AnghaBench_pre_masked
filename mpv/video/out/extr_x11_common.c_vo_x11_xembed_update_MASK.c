
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_x11_state {int window; int display; int parent; } ;
typedef int Atom ;


 int VAR_0 ;
 int FUNC_0 (struct vo_x11_state*,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int,int ,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct vo_x11_state *VAR_3, int VAR_4)
{
    if (!VAR_3->window || !VAR_3->parent)
        return;

    long VAR_5[] = {VAR_1, VAR_4};
    Atom VAR_6 = FUNC_0(VAR_3, VAR_2);
    FUNC_1(VAR_3->display, VAR_3->window, VAR_6, VAR_6, 32,
                    VAR_0, (char *)VAR_5, 2);
}
