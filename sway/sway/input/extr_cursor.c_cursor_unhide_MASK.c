
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_cursor {int hidden; char* image; int image_client; int hotspot_y; int hotspot_x; scalar_t__ image_surface; } ;


 int FUNC_0 (struct sway_cursor*) ;
 int FUNC_1 (struct sway_cursor*,char const*,int ) ;
 int FUNC_2 (struct sway_cursor*,scalar_t__,int ,int ,int ) ;

void FUNC_3(struct sway_cursor *VAR_0) {
 VAR_0->hidden = 0;
 if (VAR_0->image_surface) {
  FUNC_2(VAR_0,
    VAR_0->image_surface,
    VAR_0->hotspot_x,
    VAR_0->hotspot_y,
    VAR_0->image_client);
 } else {
  const char *VAR_1 = VAR_0->image;
  VAR_0->image = ((void*)0);
  FUNC_1(VAR_0, VAR_1, VAR_0->image_client);
 }
 FUNC_0(VAR_0);
}
