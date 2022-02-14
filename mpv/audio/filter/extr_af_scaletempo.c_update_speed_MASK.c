
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct priv {float speed; double scale; int frames_stride_scaled; int frames_stride; int frames_stride_error; TYPE_1__* opts; } ;
struct TYPE_2__ {int speed_opt; double scale_nominal; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct priv *VAR_1, float VAR_2)
{
    VAR_1->speed = VAR_2;

    double VAR_3 = (VAR_1->opts->speed_opt & VAR_0) ? 1.0 / VAR_1->speed : VAR_1->speed;
    VAR_1->scale = VAR_3 * VAR_1->opts->scale_nominal;

    VAR_1->frames_stride_scaled = VAR_1->scale * VAR_1->frames_stride;
    VAR_1->frames_stride_error = FUNC_0(VAR_1->frames_stride_error, VAR_1->frames_stride_scaled);
}
