
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {struct priv* priv; } ;
struct priv {size_t visible_surface; size_t output_surface; int * output_surfaces; } ;


 int VAR_0 ;
 int FUNC_0 (struct priv*,int ) ;

__attribute__((used)) static void FUNC_1(struct vo *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;

    VAR_2->visible_surface = VAR_2->output_surface;
    FUNC_0(VAR_2, VAR_2->output_surfaces[VAR_2->output_surface]);
    VAR_2->output_surface = (VAR_2->output_surface + 1) % VAR_0;
}
