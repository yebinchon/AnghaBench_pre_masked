
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct zwlr_layer_surface_v1 {int dummy; } ;
struct swaynag {void* height; void* width; } ;


 int FUNC_0 (struct swaynag*) ;
 int FUNC_1 (struct zwlr_layer_surface_v1*,void*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0,
  struct zwlr_layer_surface_v1 *VAR_1,
  uint32_t VAR_2, uint32_t VAR_3, uint32_t VAR_4) {
 struct swaynag *VAR_5 = VAR_0;
 VAR_5->width = VAR_3;
 VAR_5->height = VAR_4;
 FUNC_1(VAR_1, VAR_2);
 FUNC_0(VAR_5);
}
