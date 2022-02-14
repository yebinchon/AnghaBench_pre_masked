
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct output_config {int enabled; int width; int height; int refresh_rate; int custom_mode; int x; int y; int scale; int transform; int subpixel; int * name; } ;


 int VAR_0 ;
 struct output_config* FUNC_0 (int,int) ;
 int FUNC_1 (struct output_config*) ;
 int * FUNC_2 (char const*) ;

struct output_config *FUNC_3(const char *VAR_1) {
 struct output_config *VAR_2 = FUNC_0(1, sizeof(struct output_config));
 if (VAR_2 == ((void*)0)) {
  return ((void*)0);
 }
 VAR_2->name = FUNC_2(VAR_1);
 if (VAR_2->name == ((void*)0)) {
  FUNC_1(VAR_2);
  return ((void*)0);
 }
 VAR_2->enabled = -1;
 VAR_2->width = VAR_2->height = -1;
 VAR_2->refresh_rate = -1;
 VAR_2->custom_mode = -1;
 VAR_2->x = VAR_2->y = -1;
 VAR_2->scale = -1;
 VAR_2->transform = -1;
 VAR_2->subpixel = VAR_0;
 return VAR_2;
}
