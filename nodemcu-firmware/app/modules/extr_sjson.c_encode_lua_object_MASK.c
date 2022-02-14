
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
typedef int luaL_Buffer ;
struct TYPE_3__ {scalar_t__ null_ref; } ;
typedef TYPE_1__ ENC_DATA ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (int *,char const) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ,scalar_t__) ;
 int FUNC_9 (int *,int) ;
 char* FUNC_10 (int *,int,size_t*) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (char*,char const*) ;

__attribute__((used)) static void FUNC_13(lua_State *VAR_2, ENC_DATA *VAR_3, int VAR_4, const char *VAR_5, const char *VAR_6) {
  luaL_Buffer VAR_7;
  FUNC_2(VAR_2, &VAR_7);

  FUNC_1(&VAR_7, VAR_5);

  int VAR_8 = FUNC_11(VAR_2, VAR_4);

  if (VAR_8 == 128) {

    if (VAR_3->null_ref != VAR_0) {
      FUNC_8(VAR_2, VAR_1, VAR_3->null_ref);
      if (FUNC_5(VAR_2, -1, -2)) {
        VAR_8 = 130;
      }
      FUNC_6(VAR_2, 1);
    }
  }

  switch (VAR_8) {
    default:
      FUNC_3(VAR_2, "Cannot encode type %d", VAR_8);
      break;

    case 131:
    case 130:
      FUNC_1(&VAR_7, "null");
      break;

    case 132:
      FUNC_1(&VAR_7, FUNC_9(VAR_2, VAR_4) ? "true" : "false");
      break;

    case 129:
    {
      FUNC_7(VAR_2, VAR_4);
      size_t VAR_9;
      const char *VAR_10 = FUNC_10(VAR_2, -1, &VAR_9);
      char VAR_11[VAR_9 + 1];
      FUNC_12(VAR_11, VAR_10);
      FUNC_6(VAR_2, 1);
      FUNC_1(&VAR_7, VAR_11);
      break;
    }

    case 128:
    {
      FUNC_0(&VAR_7, '"');
      size_t VAR_12;
      const char *VAR_13 = FUNC_10(VAR_2, VAR_4, &VAR_12);
      while (VAR_12 > 0) {
        if ((*VAR_13 & 0xff) < 0x20) {
          char VAR_14[8];
          VAR_14[0] = '\\';

          char *VAR_15 = VAR_14 + 1;

          switch(*VAR_13) {
            case '\f':
              *VAR_15++ = 'f';
              break;
            case '\n':
              *VAR_15++ = 'n';
              break;
            case '\t':
              *VAR_15++ = 't';
              break;
            case '\r':
              *VAR_15++ = 'r';
              break;
            case '\b':
              *VAR_15++ = 'b';
              break;

            default:
              *VAR_15++ = 'u';
              *VAR_15++ = '0';
              *VAR_15++ = '0';
              *VAR_15++ = "0123456789abcdef"[(*VAR_13 >> 4) & 0xf];
              *VAR_15++ = "0123456789abcdef"[(*VAR_13 ) & 0xf];
              break;

          }
          *VAR_15 = '\0';
          FUNC_1(&VAR_7, VAR_14);
        } else if (*VAR_13 == '"') {
          FUNC_1(&VAR_7, "\\\"");
        } else {
          FUNC_0(&VAR_7, *VAR_13);
        }
        VAR_13++;
        VAR_12--;
      }
      FUNC_0(&VAR_7, '"');
      break;
    }
  }

  FUNC_1(&VAR_7, VAR_6);
  FUNC_4(&VAR_7);
}
