
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct game_capture {int texture; TYPE_1__* shtex_data; } ;
struct TYPE_2__ {int tex_handle; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;

__attribute__((used)) static inline bool FUNC_5(struct game_capture *VAR_0)
{
 FUNC_2();
 FUNC_0(VAR_0->texture);
 VAR_0->texture = FUNC_1(VAR_0->shtex_data->tex_handle);
 FUNC_3();

 if (!VAR_0->texture) {
  FUNC_4("init_shtex_capture: failed to open shared handle");
  return 0;
 }

 return 1;
}
