
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ start; } ;
struct TYPE_8__ {scalar_t__ temperature; void** gamma; void* brightness; } ;
struct TYPE_7__ {scalar_t__ temperature; void** gamma; void* brightness; } ;
struct TYPE_9__ {TYPE_5__ dusk; TYPE_5__ dawn; TYPE_2__ night; TYPE_1__ day; void* low; void* high; } ;
struct TYPE_10__ {int use_fade; TYPE_3__ scheme; int * provider; int * method; } ;
typedef TYPE_4__ options_t ;
typedef int location_provider_t ;
typedef int gamma_method_t ;


 char* FUNC_0 (char*) ;
 void* FUNC_1 (char const*) ;
 void* FUNC_2 (char const*) ;
 int * FUNC_3 (int const*,char const*) ;
 int * FUNC_4 (int const*,char const*) ;
 int FUNC_5 (int ,char*,char const*) ;
 int FUNC_6 (char*,int ) ;
 scalar_t__ FUNC_7 (void*) ;
 int FUNC_8 (void**,void**,int) ;
 int FUNC_9 (char const*,void**) ;
 int FUNC_10 (char const*,TYPE_5__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_11 (char const*,char*) ;

__attribute__((used)) static int
FUNC_12(
 const char *VAR_1, const char *VAR_2, options_t *VAR_3,
 const gamma_method_t *VAR_4,
 const location_provider_t *VAR_5)
{
 if (FUNC_11(VAR_1, "temp-day") == 0) {
  if (VAR_3->scheme.day.temperature < 0) {
   VAR_3->scheme.day.temperature = FUNC_2(VAR_2);
  }
 } else if (FUNC_11(VAR_1, "temp-night") == 0) {
  if (VAR_3->scheme.night.temperature < 0) {
   VAR_3->scheme.night.temperature = FUNC_2(VAR_2);
  }
 } else if (FUNC_11(VAR_1, "transition") == 0 ||
     FUNC_11(VAR_1, "fade") == 0) {


  if (VAR_3->use_fade < 0) {
   VAR_3->use_fade = !!FUNC_2(VAR_2);
  }
 } else if (FUNC_11(VAR_1, "brightness") == 0) {
  if (FUNC_7(VAR_3->scheme.day.brightness)) {
   VAR_3->scheme.day.brightness = FUNC_1(VAR_2);
  }
  if (FUNC_7(VAR_3->scheme.night.brightness)) {
   VAR_3->scheme.night.brightness = FUNC_1(VAR_2);
  }
 } else if (FUNC_11(VAR_1, "brightness-day") == 0) {
  if (FUNC_7(VAR_3->scheme.day.brightness)) {
   VAR_3->scheme.day.brightness = FUNC_1(VAR_2);
  }
 } else if (FUNC_11(VAR_1, "brightness-night") == 0) {
  if (FUNC_7(VAR_3->scheme.night.brightness)) {
   VAR_3->scheme.night.brightness = FUNC_1(VAR_2);
  }
 } else if (FUNC_11(VAR_1, "elevation-high") == 0) {
  VAR_3->scheme.high = FUNC_1(VAR_2);
 } else if (FUNC_11(VAR_1, "elevation-low") == 0) {
  VAR_3->scheme.low = FUNC_1(VAR_2);
 } else if (FUNC_11(VAR_1, "gamma") == 0) {
  if (FUNC_7(VAR_3->scheme.day.gamma[0])) {
   int VAR_6 = FUNC_9(
    VAR_2, VAR_3->scheme.day.gamma);
   if (VAR_6 < 0) {
    FUNC_6(FUNC_0("Malformed gamma setting.\n"), VAR_0);
    return -1;
   }
   FUNC_8(VAR_3->scheme.night.gamma,
          VAR_3->scheme.day.gamma,
          sizeof(VAR_3->scheme.night.gamma));
  }
 } else if (FUNC_11(VAR_1, "gamma-day") == 0) {
  if (FUNC_7(VAR_3->scheme.day.gamma[0])) {
   int VAR_7 = FUNC_9(
    VAR_2, VAR_3->scheme.day.gamma);
   if (VAR_7 < 0) {
    FUNC_6(FUNC_0("Malformed gamma setting.\n"), VAR_0);
    return -1;
   }
  }
 } else if (FUNC_11(VAR_1, "gamma-night") == 0) {
  if (FUNC_7(VAR_3->scheme.night.gamma[0])) {
   int VAR_8 = FUNC_9(
    VAR_2, VAR_3->scheme.night.gamma);
   if (VAR_8 < 0) {
    FUNC_6(FUNC_0("Malformed gamma setting.\n"), VAR_0);
    return -1;
   }
  }
 } else if (FUNC_11(VAR_1, "adjustment-method") == 0) {
  if (VAR_3->method == ((void*)0)) {
   VAR_3->method = FUNC_3(
    VAR_4, VAR_2);
   if (VAR_3->method == ((void*)0)) {
    FUNC_5(VAR_0, FUNC_0("Unknown adjustment"
        " method `%s'.\n"), VAR_2);
    return -1;
   }
  }
 } else if (FUNC_11(VAR_1, "location-provider") == 0) {
  if (VAR_3->provider == ((void*)0)) {
   VAR_3->provider = FUNC_4(
    VAR_5, VAR_2);
   if (VAR_3->provider == ((void*)0)) {
    FUNC_5(VAR_0, FUNC_0("Unknown location"
        " provider `%s'.\n"), VAR_2);
    return -1;
   }
  }
 } else if (FUNC_11(VAR_1, "dawn-time") == 0) {
  if (VAR_3->scheme.dawn.start < 0) {
   int VAR_9 = FUNC_10(
    VAR_2, &VAR_3->scheme.dawn);
   if (VAR_9 < 0) {
    FUNC_5(VAR_0, FUNC_0("Malformed dawn-time"
        " setting `%s'.\n"), VAR_2);
    return -1;
   }
  }
 } else if (FUNC_11(VAR_1, "dusk-time") == 0) {
  if (VAR_3->scheme.dusk.start < 0) {
   int VAR_10 = FUNC_10(
    VAR_2, &VAR_3->scheme.dusk);
   if (VAR_10 < 0) {
    FUNC_5(VAR_0, FUNC_0("Malformed dusk-time"
        " setting `%s'.\n"), VAR_2);
    return -1;
   }
  }
 } else {
  FUNC_5(VAR_0, FUNC_0("Unknown configuration setting `%s'.\n"),
   VAR_1);
 }

 return 0;
}
