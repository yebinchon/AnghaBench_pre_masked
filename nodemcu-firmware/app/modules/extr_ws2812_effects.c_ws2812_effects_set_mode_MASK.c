
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int lua_State ;
struct TYPE_4__ {int effect_type; int mode_delay; int effect_int_param1; int* color; TYPE_1__* buffer; scalar_t__ counter_mode_step; } ;
struct TYPE_3__ {size_t colorsPerLed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int,int ) ;
 int FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,int,int *,char const* const*) ;
 int FUNC_3 (int *,int,int) ;
 char* FUNC_4 (int *,int,size_t*) ;
 int FUNC_5 (int *,int) ;
 TYPE_2__* VAR_6 ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (char const*,size_t) ;
 int FUNC_9 (char const*,size_t) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (int) ;
 int FUNC_17 () ;
 int FUNC_18 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_19(lua_State* VAR_7) {

  FUNC_0(VAR_7, VAR_6 != ((void*)0), 1, VAR_1);


  static const char * const VAR_8[] = {"static", "blink", "gradient", "gradient_rgb", "random_color", "rainbow",
    "rainbow_cycle", "flicker", "fire", "fire_soft", "fire_intense", "halloween", "circus_combustus",
    "larson_scanner", "cycle", "color_wipe", "random_dot", ((void*)0)};

  int VAR_9 = FUNC_2(VAR_7, 1, ((void*)0), VAR_8);

  VAR_6->effect_type = VAR_9;
  int VAR_10 = VAR_0;


  int VAR_11 = FUNC_5(VAR_7, 2);
  if (VAR_11 == VAR_3 || VAR_11 == VAR_2)
  {

  }
  else if(VAR_11 == VAR_4)
  {
    VAR_10 = FUNC_3( VAR_7, 2, VAR_0 );
  }


  VAR_6->counter_mode_step = 0;

  switch (VAR_6->effect_type) {
    case 128:

    FUNC_7();
    VAR_6->mode_delay = 250;
    break;
    case 144:
    FUNC_10();
    break;
    case 136:
    if(VAR_11 == VAR_5)
    {
      size_t VAR_12;
      const char *VAR_13 = FUNC_4(VAR_7, 2, &VAR_12);

      if ((VAR_12 / VAR_6->buffer->colorsPerLed < 2) || (VAR_12 % VAR_6->buffer->colorsPerLed != 0))
      {
        FUNC_1(VAR_7, 2, "must be at least two colors and same size as buffer colors");
      }

      FUNC_8(VAR_13, VAR_12);
      FUNC_18(VAR_6->buffer);
    }
    else
    {
      FUNC_1(VAR_7, 2, "string expected");
    }

    break;
    case 135:
    if(VAR_11 == VAR_5)
    {
      size_t VAR_14;
      const char *VAR_15 = FUNC_4(VAR_7, 2, &VAR_14);

      if ((VAR_14 / VAR_6->buffer->colorsPerLed < 2) || (VAR_14 % VAR_6->buffer->colorsPerLed != 0))
      {
        FUNC_1(VAR_7, 2, "must be at least two colors and same size as buffer colors");
      }

      FUNC_9(VAR_15, VAR_14);
      FUNC_18(VAR_6->buffer);
    }
    else
    {
      FUNC_1(VAR_7, 2, "string expected");
    }

    break;
    case 130:
    FUNC_17();
    break;
    case 132:
    FUNC_15();
    break;
    case 131:
    FUNC_16(VAR_10 != VAR_0 ? VAR_10 : 1);
    break;

    case 137:
    VAR_6->effect_int_param1 = VAR_10;
    break;
    case 140:
    case 138:
    case 139:
    {
      VAR_6->color[0] = 255-40;
      VAR_6->color[1] = 255;
      VAR_6->color[2] = 40;
      VAR_6->color[3] = 0;
    }
    break;
    case 134:
    FUNC_13();
    break;
    case 143:
    FUNC_11();
    break;
    case 133:
    FUNC_14();
    break;
    case 141:
    if (VAR_10 != VAR_0) {
      VAR_6->effect_int_param1 = VAR_10;
    }
    break;
    case 142:
    {
      uint32_t VAR_16 = 0;
      FUNC_6(VAR_16);
      FUNC_12();
      break;
    }
    case 129:
    {

      VAR_6->effect_int_param1 = VAR_10;
      uint32_t VAR_17 = 0;
      FUNC_6(VAR_17);
      break;
    }
  }

}
