
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct obs_source_frame {scalar_t__ format; } ;
struct TYPE_4__ {int * async_textures; } ;
typedef TYPE_1__ obs_source_t ;
typedef enum gs_color_format { ____Placeholder_gs_color_format } gs_color_format ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static inline void FUNC_2(obs_source_t *VAR_4,
        struct obs_source_frame *VAR_5)
{
 enum gs_color_format VAR_6 =
  FUNC_0(VAR_4->async_textures[0]);
 if (VAR_6 == VAR_1 && VAR_5->format == VAR_2) {
  FUNC_1(VAR_4, VAR_0);
 } else if (VAR_6 == VAR_0 && VAR_5->format == VAR_3) {
  FUNC_1(VAR_4, VAR_1);
 }
}
