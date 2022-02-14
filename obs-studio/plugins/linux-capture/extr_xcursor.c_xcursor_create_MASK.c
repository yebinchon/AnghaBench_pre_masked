
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ last_height; scalar_t__ last_width; int last_serial; scalar_t__ tex; } ;
typedef TYPE_1__ xcursor_t ;
typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {scalar_t__ width; scalar_t__ height; int cursor_serial; } ;
typedef TYPE_2__ XFixesCursorImage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int,scalar_t__,int ,int,int const**,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int const*,int,int ) ;
 int * FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(xcursor_t *VAR_3, XFixesCursorImage *VAR_4)
{
 uint32_t *VAR_5 = FUNC_4(VAR_4);
 if (!VAR_5)
  return;

 if (VAR_3->tex && VAR_3->last_height == VAR_4->width &&
     VAR_3->last_width == VAR_4->height) {
  FUNC_3(VAR_3->tex, (const uint8_t *)VAR_5,
         VAR_4->width * sizeof(uint32_t), VAR_0);
 } else {
  if (VAR_3->tex)
   FUNC_2(VAR_3->tex);

  VAR_3->tex = FUNC_1(VAR_4->width, VAR_4->height, VAR_1, 1,
           (const uint8_t **)&VAR_5,
           VAR_2);
 }

 FUNC_0(VAR_5);

 VAR_3->last_serial = VAR_4->cursor_serial;
 VAR_3->last_width = VAR_4->width;
 VAR_3->last_height = VAR_4->height;
}
