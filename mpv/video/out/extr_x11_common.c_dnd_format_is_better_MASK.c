
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_x11_state {int input_ctx; } ;
typedef scalar_t__ Atom ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct vo_x11_state*,scalar_t__) ;

__attribute__((used)) static bool FUNC_2(struct vo_x11_state *VAR_0, Atom VAR_1, Atom VAR_2)
{
    int VAR_3 = FUNC_0(VAR_0->input_ctx,
                                                 FUNC_1(VAR_0, VAR_2));
    int VAR_4 = -1;
    if (VAR_1) {
        VAR_4 = FUNC_0(VAR_0->input_ctx,
                                                 FUNC_1(VAR_0, VAR_1));
    }
    return VAR_3 >= 0 && VAR_3 > VAR_4;
}
