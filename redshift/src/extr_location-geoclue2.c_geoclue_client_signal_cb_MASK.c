
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int available; int pipe_fd_write; int lock; void* longitude; void* latitude; } ;
typedef TYPE_1__ location_geoclue2_state_t ;
typedef TYPE_1__* gpointer ;
typedef int gchar ;
struct TYPE_9__ {int message; } ;
typedef int GVariant ;
typedef TYPE_3__ GError ;
typedef int GDBusProxy ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int ,int *,char*,int const*,char*,int *,TYPE_3__**) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,int,char*,int const**) ;
 void* FUNC_10 (int *) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void
FUNC_13(GDBusProxy *VAR_1, gchar *VAR_2,
    gchar *VAR_3, GVariant *VAR_4,
    gpointer VAR_5)
{
 location_geoclue2_state_t *VAR_6 = VAR_5;


 if (FUNC_8(VAR_3, "LocationUpdated") != 0) {
  return;
 }


 const gchar *VAR_7;
 FUNC_9(VAR_4, 1, "&o", &VAR_7);


 GError *VAR_8 = ((void*)0);
 GDBusProxy *VAR_9 = FUNC_3(
  FUNC_2(VAR_1),
  VAR_0,
  ((void*)0),
  "org.freedesktop.GeoClue2",
  VAR_7,
  "org.freedesktop.GeoClue2.Location",
  ((void*)0), &VAR_8);
 if (VAR_9 == ((void*)0)) {
  FUNC_7(FUNC_0("Unable to obtain location: %s.\n"),
      VAR_8->message);
  FUNC_4(VAR_8);
  FUNC_11(VAR_6);
  return;
 }

 FUNC_5(&VAR_6->lock);


 GVariant *VAR_10 = FUNC_1(
  VAR_9, "Latitude");
 VAR_6->latitude = FUNC_10(VAR_10);

 GVariant *VAR_11 = FUNC_1(
  VAR_9, "Longitude");
 VAR_6->longitude = FUNC_10(VAR_11);

 VAR_6->available = 1;

 FUNC_6(&VAR_6->lock);

 FUNC_12(VAR_6->pipe_fd_write);
}
