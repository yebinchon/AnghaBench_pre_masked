
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {int x_pos; int cnt; int* tile_ptr; } ;
typedef TYPE_3__ u8x8_tile_t ;
struct TYPE_11__ {int x_offset; } ;
typedef TYPE_4__ u8x8_t ;
struct TYPE_9__ {int (* template_display_cb ) (TYPE_4__*,int,int,void*) ;int fb_update_ongoing; int rfb_cb_ref; } ;
struct TYPE_12__ {TYPE_2__ overlay; } ;
typedef TYPE_5__ u8g2_nodemcu_t ;
struct fbrle_line {size_t num_valid; TYPE_1__* items; } ;
struct fbrle_item {int dummy; } ;
typedef int lua_State ;
struct TYPE_8__ {int start_x; int len; } ;


 int VAR_0 ;
 int VAR_1 ;







 int FUNC_0 (int*,int,int) ;
 int FUNC_1 (struct fbrle_line*) ;
 int FUNC_2 (int *,int,int ) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,char const*,size_t) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;
 scalar_t__ FUNC_7 (size_t) ;
 int FUNC_8 (TYPE_4__*,int,int,void*) ;

__attribute__((used)) static uint8_t FUNC_9(u8x8_t *VAR_2, uint8_t VAR_3, uint8_t VAR_4, void *VAR_5)
{
  u8g2_nodemcu_t *VAR_6 = (u8g2_nodemcu_t *)VAR_2;

  switch(VAR_3)
  {
  case 131:

    return VAR_6->overlay.template_display_cb(VAR_2, VAR_3, VAR_4, VAR_5);

  case 133:

    VAR_6->overlay.fb_update_ongoing = 0;
    break;

  case 128:
  case 129:
    break;






  case 132:
    VAR_6->overlay.fb_update_ongoing = 0;
    break;

  case 134:
    if (VAR_6->overlay.fb_update_ongoing == 0) {

      if (VAR_6->overlay.rfb_cb_ref != VAR_0) {

        lua_State *VAR_7 = FUNC_3();
        FUNC_6( VAR_7, VAR_1, VAR_6->overlay.rfb_cb_ref );
        FUNC_5( VAR_7 );
        FUNC_2( VAR_7, 1, 0 );
      }

      VAR_6->overlay.fb_update_ongoing = 1;
    }

    {

      uint8_t VAR_8 = ((u8x8_tile_t *)VAR_5)->x_pos;
      VAR_8 *= 8;
      VAR_8 += VAR_2->x_offset;
      uint8_t VAR_9 = ((u8x8_tile_t *)VAR_5)->cnt * 8;

      size_t VAR_10 = sizeof( struct fbrle_line ) + sizeof( struct fbrle_item ) * (VAR_9/2);
      int VAR_11 = 8;
      uint8_t *VAR_12 = ((u8x8_tile_t *)VAR_5)->tile_ptr;

      struct fbrle_line *VAR_13;
      if (!(VAR_13 = (struct fbrle_line *)FUNC_7( VAR_10 ))) {
        break;
      }

      for (int VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {
        int VAR_15 = -1;
        VAR_13->num_valid = 0;

        for (int VAR_16 = VAR_8; VAR_16 < VAR_8+VAR_9; VAR_16++) {
          if (FUNC_0( VAR_12, VAR_14, VAR_16 ) == 0) {
            if (VAR_15 >= 0) {

              VAR_13->items[VAR_13->num_valid].start_x = VAR_15;
              VAR_13->items[VAR_13->num_valid++].len = VAR_16 - VAR_15;

              VAR_15 = -1;
            }
          } else {
            if (VAR_15 < 0) {

              VAR_15 = VAR_16;
            }
          }

          if (VAR_13->num_valid >= VAR_9/2) break;
        }


        if (VAR_15 >= 0 && VAR_13->num_valid < VAR_9/2) {
          VAR_13->items[VAR_13->num_valid].start_x = VAR_15;
          VAR_13->items[VAR_13->num_valid++].len = VAR_9 - VAR_15;
        }


        if (VAR_6->overlay.rfb_cb_ref != VAR_0) {
          lua_State *VAR_17 = FUNC_3();

          FUNC_6( VAR_17, VAR_1, VAR_6->overlay.rfb_cb_ref );
          FUNC_4( VAR_17, (const char *)VAR_13, VAR_10 );
          FUNC_2( VAR_17, 1, 0 );
        }
      }

      FUNC_1( VAR_13 );
    }
    break;

  default:
    return 0;
    break;
  }

  return 1;
}
