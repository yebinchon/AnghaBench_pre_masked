
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_x11_state {int window_title; int window; } ;
struct vo {struct vo_x11_state* x11; } ;


 int FUNC_0 (struct vo_x11_state*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct vo*,int ,int ) ;
 int FUNC_2 (struct vo*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct vo *VAR_4)
{
    struct vo_x11_state *VAR_5 = VAR_4->x11;

    if (!VAR_5->window || !VAR_5->window_title)
        return;

    FUNC_1(VAR_4, VAR_1, VAR_5->window_title);
    FUNC_1(VAR_4, VAR_0, VAR_5->window_title);
    FUNC_2(VAR_4, FUNC_0(VAR_5, VAR_3), VAR_5->window_title);
    FUNC_2(VAR_4, FUNC_0(VAR_5, VAR_2), VAR_5->window_title);
}
