
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_line {scalar_t__ type; } ;
struct config {int parser; scalar_t__ error_message; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct config_line* FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(struct config *VAR_2)
{
    const struct config_line *VAR_3;
    int VAR_4 = 1;

    if (VAR_2->error_message)
        return 0;

    while ((VAR_3 = FUNC_0(&VAR_2->parser))) {
        if (VAR_3->type == VAR_0) {
            VAR_4++;
        } else if (VAR_3->type == VAR_1) {
            VAR_4--;

            if (!VAR_4)
                return 1;
        }
    }

    return 0;
}
