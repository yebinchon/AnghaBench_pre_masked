
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
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ,int,int ,unsigned char*,int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(struct vo *VAR_4)
{
    struct vo_x11_state *VAR_5 = VAR_4->x11;

    Atom VAR_6 = VAR_0;
    FUNC_1(VAR_5->display, VAR_5->window, FUNC_0(VAR_5, VAR_3), VAR_2,
                    32, VAR_1, (unsigned char *)&VAR_6, 1);
}
