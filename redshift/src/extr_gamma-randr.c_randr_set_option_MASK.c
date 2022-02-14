
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int crtc_num_count; int* crtc_num; int screen_num; } ;
typedef TYPE_1__ randr_state_t ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 int* FUNC_2 (int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ,char*,char const*,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 (char const*,char**,int ) ;

__attribute__((used)) static int
FUNC_6(randr_state_t *VAR_2, const char *VAR_3, const char *VAR_4)
{
 if (FUNC_4(VAR_3, "screen") == 0) {
  VAR_2->screen_num = FUNC_1(VAR_4);
 } else if (FUNC_4(VAR_3, "crtc") == 0) {
  char *VAR_5;


  const char *VAR_6 = VAR_4;
  while (1) {
   VAR_0 = 0;
   int VAR_7 = FUNC_5(VAR_6, &VAR_5, 0);
   if (VAR_7 == 0 && (VAR_0 != 0 ||
         VAR_5 == VAR_6)) {
    FUNC_3(VAR_1, FUNC_0("Unable to read screen"
        " number: `%s'.\n"), VAR_4);
    return -1;
   } else {
    VAR_2->crtc_num_count += 1;
   }
   VAR_6 = VAR_5;

   if (*VAR_6 == ',') {
    VAR_6 += 1;
   } else if (*VAR_6 == '\0') {
    break;
   }
  }


  VAR_2->crtc_num = FUNC_2(VAR_2->crtc_num_count, sizeof(int));
  VAR_6 = VAR_4;
  for (int VAR_8 = 0; VAR_8 < VAR_2->crtc_num_count; VAR_8++) {
   VAR_0 = 0;
   int VAR_9 = FUNC_5(VAR_6, &VAR_5, 0);
   if (VAR_9 == 0 && (VAR_0 != 0 ||
         VAR_5 == VAR_6)) {
    return -1;
   } else {
    VAR_2->crtc_num[VAR_8] = VAR_9;
   }
   VAR_6 = VAR_5;

   if (*VAR_6 == ',') {
    VAR_6 += 1;
   } else if (*VAR_6 == '\0') {
    break;
   }
  }
 } else if (FUNC_4(VAR_3, "preserve") == 0) {
  FUNC_3(VAR_1, FUNC_0("Parameter `%s` is now always on; "
      " Use the `%s` command-line option"
      " to disable.\n"),
   VAR_3, "-P");
 } else {
  FUNC_3(VAR_1, FUNC_0("Unknown method parameter: `%s'.\n"), VAR_3);
  return -1;
 }

 return 0;
}
