
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_capture {int valid; int texture; int height; int width; scalar_t__ compatibility; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ,int,int *,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static inline void FUNC_3(struct dc_capture *VAR_3)
{
 if (VAR_3->compatibility)
  VAR_3->texture = FUNC_1(VAR_3->width,
           VAR_3->height, VAR_0,
           1, ((void*)0), VAR_1);
 else
  VAR_3->texture =
   FUNC_2(VAR_3->width, VAR_3->height);

 if (!VAR_3->texture) {
  FUNC_0(VAR_2, "[dc_capture_init] Failed to "
      "create textures");
  return;
 }

 VAR_3->valid = 1;
}
