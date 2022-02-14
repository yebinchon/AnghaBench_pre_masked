
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
struct TYPE_5__ {int context; int old_header; TYPE_1__* sdl; } ;
typedef TYPE_2__ sdlCtx ;
struct TYPE_4__ {char* source; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 char* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char*,char*,size_t) ;
 int FUNC_7 (scalar_t__,char*,int) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int) ;
 int * FUNC_10 (int ,char*,char*) ;
 int FUNC_11 (int ,char*,char*,int *) ;
 char* FUNC_12 (char*,char) ;
 size_t FUNC_13 (char*) ;
 char* FUNC_14 (char*,char*) ;
 int FUNC_15 (int,int ) ;
 int FUNC_16 (int *) ;

void FUNC_17(sdlCtx *VAR_1, char *VAR_2)
{
 char *VAR_3;
 size_t VAR_4, VAR_5;
 zval VAR_6;
 zval *VAR_7 = ((void*)0);


 VAR_3 = FUNC_14(VAR_1->sdl->source, "://");
 if (!VAR_3) return;
 VAR_3 = FUNC_12(VAR_3+3, '/');
 VAR_4 = VAR_3 ? (size_t)(VAR_3 - VAR_1->sdl->source) : FUNC_13(VAR_1->sdl->source);
 VAR_3 = FUNC_14((char*)VAR_2, "://");
 if (!VAR_3) return;
 VAR_3 = FUNC_12(VAR_3+3, '/');
 VAR_5 = VAR_3 ? (size_t)(VAR_3 - (char*)VAR_2) : FUNC_13((char*)VAR_2);
 if (VAR_4 != VAR_5) {

  if (VAR_4 > 11 &&
      VAR_1->sdl->source[4] == ':' &&
      VAR_1->sdl->source[VAR_4-3] == ':' &&
      VAR_1->sdl->source[VAR_4-2] == '8' &&
      VAR_1->sdl->source[VAR_4-1] == '0') {
   VAR_4 -= 3;
  }
  if (VAR_5 > 11 &&
      VAR_2[4] == ':' &&
      VAR_2[VAR_5-3] == ':' &&
      VAR_2[VAR_5-2] == '8' &&
      VAR_2[VAR_5-1] == '0') {
   VAR_5 -= 3;
  }

  if (VAR_4 > 13 &&
      VAR_1->sdl->source[4] == 's' &&
      VAR_1->sdl->source[VAR_4-4] == ':' &&
      VAR_1->sdl->source[VAR_4-3] == '4' &&
      VAR_1->sdl->source[VAR_4-2] == '4' &&
      VAR_1->sdl->source[VAR_4-1] == '3') {
   VAR_4 -= 4;
  }
  if (VAR_5 > 13 &&
      VAR_2[4] == 's' &&
      VAR_2[VAR_5-4] == ':' &&
      VAR_2[VAR_5-3] == '4' &&
      VAR_2[VAR_5-2] == '4' &&
      VAR_2[VAR_5-1] == '3') {
   VAR_5 -= 4;
  }
 }
 if (VAR_4 != VAR_5 || FUNC_6(VAR_1->sdl->source, VAR_2, VAR_4) != 0) {

  FUNC_8(((void*)0), &VAR_6);
  FUNC_8(&VAR_6, ((void*)0));
  if (FUNC_5(VAR_6) != VAR_0) {
   zval *VAR_8 = &VAR_6;
   VAR_1->context = FUNC_9(VAR_8, 1);

   if (VAR_1->context &&
       (VAR_7 = FUNC_10(VAR_1->context, "http", "header")) != ((void*)0)) {
    VAR_3 = FUNC_14(FUNC_4(VAR_7), "Authorization: Basic");
    if (VAR_3 && (VAR_3 == FUNC_4(VAR_7) || *(VAR_3-1) == '\n' || *(VAR_3-1) == '\r')) {
     char *VAR_9 = FUNC_14(VAR_3, "\r\n");
     if (VAR_9) {
      zval VAR_10;

      VAR_9 += 2;
      FUNC_1(&VAR_10, FUNC_15(FUNC_2(VAR_7) - (VAR_9 - VAR_3), 0));
      FUNC_7(FUNC_3(VAR_10), FUNC_4(VAR_7), VAR_3 - FUNC_4(VAR_7));
      FUNC_7(FUNC_3(VAR_10) + (VAR_3 - FUNC_4(VAR_7)), VAR_9, FUNC_2(VAR_7) - (VAR_9 - FUNC_4(VAR_7)) + 1);
      FUNC_0(&VAR_1->old_header, VAR_7);
      FUNC_11(VAR_1->context, "http", "header", &VAR_10);
      FUNC_16(&VAR_10);
     }
    }
   }
  }
 }
}
