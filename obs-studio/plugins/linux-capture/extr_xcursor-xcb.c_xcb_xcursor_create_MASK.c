
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ width; scalar_t__ height; int cursor_serial; } ;
typedef TYPE_1__ xcb_xfixes_get_cursor_image_reply_t ;
struct TYPE_7__ {scalar_t__ last_height; scalar_t__ last_width; int last_serial; scalar_t__ tex; } ;
typedef TYPE_2__ xcb_xcursor_t ;
typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,scalar_t__,int ,int,int const**,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int const*,int,int) ;
 int * FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(xcb_xcursor_t *VAR_2,
          xcb_xfixes_get_cursor_image_reply_t *VAR_3)
{
 uint32_t *VAR_4 = FUNC_3(VAR_3);
 if (!VAR_4)
  return;

 if (VAR_2->tex && VAR_2->last_height == VAR_3->width &&
     VAR_2->last_width == VAR_3->height) {
  FUNC_2(VAR_2->tex, (const uint8_t *)VAR_4,
         VAR_3->width * sizeof(uint32_t), 0);
 } else {
  if (VAR_2->tex)
   FUNC_1(VAR_2->tex);

  VAR_2->tex = FUNC_0(VAR_3->width, VAR_3->height, VAR_0, 1,
           (const uint8_t **)&VAR_4,
           VAR_1);
 }

 VAR_2->last_serial = VAR_3->cursor_serial;
 VAR_2->last_width = VAR_3->width;
 VAR_2->last_height = VAR_3->height;
}
