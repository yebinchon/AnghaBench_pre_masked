
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct game_capture {TYPE_1__* global_hook_info; } ;
struct TYPE_2__ {scalar_t__ format; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct game_capture*,int,int *,int ) ;
 int FUNC_1 (struct game_capture*,int,int *,int ) ;

__attribute__((used)) static inline void FUNC_2(struct game_capture *VAR_2, int VAR_3,
      uint8_t *VAR_4, uint32_t VAR_5)
{
 if (VAR_2->global_hook_info->format == VAR_0) {
  FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);

 } else if (VAR_2->global_hook_info->format == VAR_1) {
  FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
 }
}
