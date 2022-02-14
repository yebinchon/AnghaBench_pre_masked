
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int location_geoclue2_state_t ;
typedef int * gpointer ;
typedef char gchar ;
struct TYPE_7__ {int message; } ;
typedef int GVariant ;
typedef TYPE_1__ GError ;
typedef int GDBusProxy ;
typedef int GDBusConnection ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int * FUNC_4 (int *,char*,int *,int ,int,int *,TYPE_1__**) ;
 int * FUNC_5 (int *,int ,int *,char*,char const*,char*,int *,TYPE_1__**) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int *,char*,int ,int *) ;
 scalar_t__ FUNC_11 (char*,int ) ;
 int FUNC_12 (int *,char*,char const**) ;
 int * FUNC_13 (char*,...) ;
 int FUNC_14 (int *) ;
 int VAR_3 ;
 int FUNC_15 (int *) ;
 int FUNC_16 () ;

__attribute__((used)) static void
FUNC_17(GDBusConnection *VAR_4, const gchar *VAR_5,
   const gchar *VAR_6, gpointer VAR_7)
{
 location_geoclue2_state_t *VAR_8 = VAR_7;


 GError *VAR_9 = ((void*)0);
 GDBusProxy *VAR_10 = FUNC_5(
  VAR_4,
  VAR_2,
  ((void*)0),
  "org.freedesktop.GeoClue2",
  "/org/freedesktop/GeoClue2/Manager",
  "org.freedesktop.GeoClue2.Manager",
  ((void*)0), &VAR_9);
 if (VAR_10 == ((void*)0)) {
  FUNC_9(FUNC_1("Unable to obtain GeoClue Manager: %s.\n"),
      VAR_9->message);
  FUNC_6(VAR_9);
  FUNC_15(VAR_8);
  return;
 }


 VAR_9 = ((void*)0);
 GVariant *VAR_11 =
  FUNC_4(VAR_10,
           "GetClient",
           ((void*)0),
           VAR_1,
           -1, ((void*)0), &VAR_9);
 if (VAR_11 == ((void*)0)) {
  FUNC_9(FUNC_1("Unable to obtain GeoClue client path: %s.\n"),
      VAR_9->message);
  FUNC_6(VAR_9);
  FUNC_8(VAR_10);
  FUNC_15(VAR_8);
  return;
 }

 const gchar *VAR_12;
 FUNC_12(VAR_11, "(&o)", &VAR_12);


 VAR_9 = ((void*)0);
 GDBusProxy *VAR_13 = FUNC_5(
  VAR_4,
  VAR_2,
  ((void*)0),
  "org.freedesktop.GeoClue2",
  VAR_12,
  "org.freedesktop.GeoClue2.Client",
  ((void*)0), &VAR_9);
 if (VAR_13 == ((void*)0)) {
  FUNC_9(FUNC_1("Unable to obtain GeoClue Client: %s.\n"),
      VAR_9->message);
  FUNC_6(VAR_9);
  FUNC_14(VAR_11);
  FUNC_8(VAR_10);
  FUNC_15(VAR_8);
  return;
 }

 FUNC_14(VAR_11);


 VAR_9 = ((void*)0);
 GVariant *VAR_14 = FUNC_4(
  VAR_13,
  "org.freedesktop.DBus.Properties.Set",
  FUNC_13("(ssv)",
  "org.freedesktop.GeoClue2.Client",
  "DesktopId",
  FUNC_13("s", "redshift")),
  VAR_1,
  -1, ((void*)0), &VAR_9);
 if (VAR_14 == ((void*)0)) {


 } else {
  FUNC_14(VAR_14);
 }


 VAR_9 = ((void*)0);
 VAR_14 = FUNC_4(
  VAR_13,
  "org.freedesktop.DBus.Properties.Set",
  FUNC_13("(ssv)",
  "org.freedesktop.GeoClue2.Client",
  "DistanceThreshold",
  FUNC_13("u", 50000)),
  VAR_1,
  -1, ((void*)0), &VAR_9);
 if (VAR_14 == ((void*)0)) {
  FUNC_9(FUNC_1("Unable to set distance threshold: %s.\n"),
      VAR_9->message);
  FUNC_6(VAR_9);
  FUNC_8(VAR_13);
  FUNC_8(VAR_10);
  FUNC_15(VAR_8);
  return;
 }

 FUNC_14(VAR_14);


 FUNC_10(VAR_13, "g-signal",
    FUNC_0(VAR_3),
    VAR_7);


 VAR_9 = ((void*)0);
 VAR_14 = FUNC_4(VAR_13,
           "Start",
           ((void*)0),
           VAR_1,
           -1, ((void*)0), &VAR_9);
 if (VAR_14 == ((void*)0)) {
  FUNC_9(FUNC_1("Unable to start GeoClue client: %s.\n"),
      VAR_9->message);
  if (FUNC_3(VAR_9)) {
   gchar *VAR_15 = FUNC_2(
    VAR_9);
   if (FUNC_11(VAR_15, VAR_0) == 0) {
    FUNC_16();
   }
   FUNC_7(VAR_15);
  }
  FUNC_6(VAR_9);
  FUNC_8(VAR_13);
  FUNC_8(VAR_10);
  FUNC_15(VAR_8);
  return;
 }

 FUNC_14(VAR_14);
}
