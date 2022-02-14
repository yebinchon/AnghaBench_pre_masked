
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int error_code; int atom; } ;
typedef TYPE_1__ xcb_intern_atom_reply_t ;
typedef int xcb_intern_atom_cookie_t ;
typedef TYPE_1__ xcb_generic_error_t ;
typedef int xcb_connection_t ;
struct wl_listener {int dummy; } ;
struct sway_xwayland {int * atoms; } ;
struct sway_server {struct sway_xwayland xwayland; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 struct sway_server* VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,...) ;
 struct sway_server* FUNC_3 (struct wl_listener*,int ,int ) ;
 int * FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ,int ) ;
 TYPE_1__* FUNC_8 (int *,int ,TYPE_1__**) ;
 int VAR_4 ;

void FUNC_9(struct wl_listener *VAR_5, void *VAR_6) {
 struct sway_server *VAR_7 =
  FUNC_3(VAR_5, VAR_7, VAR_4);
 struct sway_xwayland *VAR_8 = &VAR_7->xwayland;

 xcb_connection_t *VAR_9 = FUNC_4(((void*)0), ((void*)0));
 int VAR_10 = FUNC_5(VAR_9);
 if (VAR_10) {
  FUNC_2(VAR_1, "XCB connect failed: %d", VAR_10);
  return;
 }

 xcb_intern_atom_cookie_t VAR_11[VAR_0];
 for (size_t VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
  VAR_11[VAR_12] =
   FUNC_7(VAR_9, 0, FUNC_1(VAR_2[VAR_12]), VAR_2[VAR_12]);
 }
 for (size_t VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
  xcb_generic_error_t *VAR_14 = ((void*)0);
  xcb_intern_atom_reply_t *VAR_15 =
   FUNC_8(VAR_9, VAR_11[VAR_13], &VAR_14);
  if (VAR_15 != ((void*)0) && VAR_14 == ((void*)0)) {
   VAR_8->atoms[VAR_13] = VAR_15->atom;
  }
  FUNC_0(VAR_15);

  if (VAR_14 != ((void*)0)) {
   FUNC_2(VAR_1, "could not resolve atom %s, X11 error code %d",
    VAR_2[VAR_13], VAR_14->error_code);
   FUNC_0(VAR_14);
   break;
  }
 }

 FUNC_6(VAR_9);
}
