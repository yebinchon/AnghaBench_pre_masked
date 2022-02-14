
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct winsize {int ws_col; int ws_row; } ;
struct vo {struct priv* priv; } ;
struct priv {TYPE_1__* opts; } ;
struct TYPE_2__ {int width; int height; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,struct winsize*) ;

__attribute__((used)) static void FUNC_1(struct vo *VAR_4, int *VAR_5, int *VAR_6) {
    struct priv *VAR_7 = VAR_4->priv;
    *VAR_5 = VAR_1;
    *VAR_6 = VAR_0;
    if (VAR_7->opts->width > 0)
        *VAR_5 = VAR_7->opts->width;
    if (VAR_7->opts->height > 0)
        *VAR_6 = VAR_7->opts->height;
}
