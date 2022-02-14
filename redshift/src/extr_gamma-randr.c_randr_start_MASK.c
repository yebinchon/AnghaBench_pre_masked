
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_22__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int xcb_setup_t ;
struct TYPE_25__ {scalar_t__ rem; TYPE_1__* data; } ;
typedef TYPE_2__ xcb_screen_iterator_t ;
struct TYPE_26__ {int num_crtcs; unsigned int size; } ;
typedef TYPE_3__ xcb_randr_get_screen_resources_current_reply_t ;
typedef int xcb_randr_get_screen_resources_current_cookie_t ;
typedef TYPE_3__ xcb_randr_get_crtc_gamma_size_reply_t ;
typedef int xcb_randr_get_crtc_gamma_size_cookie_t ;
typedef TYPE_3__ xcb_randr_get_crtc_gamma_reply_t ;
typedef int xcb_randr_get_crtc_gamma_cookie_t ;
typedef int xcb_randr_crtc_t ;
struct TYPE_27__ {int error_code; } ;
typedef TYPE_6__ xcb_generic_error_t ;
typedef int uint16_t ;
struct TYPE_28__ {int screen_num; int preferred_screen; int crtc_count; TYPE_22__* crtcs; int conn; TYPE_1__* screen; } ;
typedef TYPE_7__ randr_state_t ;
typedef int randr_crtc_state_t ;
struct TYPE_24__ {unsigned int ramp_size; int * saved_ramps; int crtc; } ;
struct TYPE_23__ {int root; } ;


 char* FUNC_0 (char*) ;
 TYPE_22__* FUNC_1 (int,int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (TYPE_3__*) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (int *,int *,unsigned int) ;
 int FUNC_6 (char*) ;
 int VAR_0 ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int * FUNC_9 (TYPE_3__*) ;
 int * FUNC_10 (TYPE_3__*) ;
 int * FUNC_11 (TYPE_3__*) ;
 TYPE_3__* FUNC_12 (int ,int ,TYPE_6__**) ;
 int FUNC_13 (int ,int ) ;
 TYPE_3__* FUNC_14 (int ,int ,TYPE_6__**) ;
 int FUNC_15 (int ,int ) ;
 int * FUNC_16 (TYPE_3__*) ;
 TYPE_3__* FUNC_17 (int ,int ,TYPE_6__**) ;
 int FUNC_18 (TYPE_2__*) ;
 TYPE_2__ FUNC_19 (int const*) ;

__attribute__((used)) static int
FUNC_20(randr_state_t *VAR_1)
{
 xcb_generic_error_t *VAR_2;

 int VAR_3 = VAR_1->screen_num;
 if (VAR_3 < 0) VAR_3 = VAR_1->preferred_screen;


 const xcb_setup_t *VAR_4 = FUNC_7(VAR_1->conn);
 xcb_screen_iterator_t VAR_5 = FUNC_19(VAR_4);
 VAR_1->screen = ((void*)0);

 for (int VAR_6 = 0; VAR_5.rem > 0; VAR_6++) {
  if (VAR_6 == VAR_3) {
   VAR_1->screen = VAR_5.data;
   break;
  }
  FUNC_18(&VAR_5);
 }

 if (VAR_1->screen == ((void*)0)) {
  FUNC_2(VAR_0, FUNC_0("Screen %i could not be found.\n"),
   VAR_3);
  return -1;
 }


 xcb_randr_get_screen_resources_current_cookie_t VAR_7 =
  FUNC_15(VAR_1->conn,
             VAR_1->screen->root);
 xcb_randr_get_screen_resources_current_reply_t *VAR_8 =
  FUNC_17(VAR_1->conn,
            VAR_7,
            &VAR_2);

 if (VAR_2) {
  FUNC_2(VAR_0, FUNC_0("`%s' returned error %d\n"),
   "RANDR Get Screen Resources Current",
   VAR_2->error_code);
  return -1;
 }

 VAR_1->crtc_count = VAR_8->num_crtcs;
 VAR_1->crtcs = FUNC_1(VAR_1->crtc_count, sizeof(randr_crtc_state_t));
 if (VAR_1->crtcs == ((void*)0)) {
  FUNC_6("malloc");
  VAR_1->crtc_count = 0;
  return -1;
 }

 xcb_randr_crtc_t *VAR_9 =
  FUNC_16(VAR_8);


 for (int VAR_10 = 0; VAR_10 < VAR_1->crtc_count; VAR_10++) {
  VAR_1->crtcs[VAR_10].crtc = VAR_9[VAR_10];
 }

 FUNC_3(VAR_8);




 for (int VAR_11 = 0; VAR_11 < VAR_1->crtc_count; VAR_11++) {
  xcb_randr_crtc_t VAR_12 = VAR_1->crtcs[VAR_11].crtc;


  xcb_randr_get_crtc_gamma_size_cookie_t VAR_13 =
   FUNC_13(VAR_1->conn, VAR_12);
  xcb_randr_get_crtc_gamma_size_reply_t *VAR_14 =
   FUNC_14(VAR_1->conn,
           VAR_13,
           &VAR_2);

  if (VAR_2) {
   FUNC_2(VAR_0, FUNC_0("`%s' returned error %d\n"),
    "RANDR Get CRTC Gamma Size",
    VAR_2->error_code);
   return -1;
  }

  unsigned int VAR_15 = VAR_14->size;
  VAR_1->crtcs[VAR_11].ramp_size = VAR_15;

  FUNC_3(VAR_14);

  if (VAR_15 == 0) {
   FUNC_2(VAR_0, FUNC_0("Gamma ramp size too small: %i\n"),
    VAR_15);
   return -1;
  }


  xcb_randr_get_crtc_gamma_cookie_t VAR_16 =
   FUNC_8(VAR_1->conn, VAR_12);
  xcb_randr_get_crtc_gamma_reply_t *VAR_17 =
   FUNC_12(VAR_1->conn,
             VAR_16,
             &VAR_2);

  if (VAR_2) {
   FUNC_2(VAR_0, FUNC_0("`%s' returned error %d\n"),
    "RANDR Get CRTC Gamma", VAR_2->error_code);
   return -1;
  }

  uint16_t *VAR_18 =
   FUNC_11(VAR_17);
  uint16_t *VAR_19 =
   FUNC_10(VAR_17);
  uint16_t *VAR_20 =
   FUNC_9(VAR_17);


  VAR_1->crtcs[VAR_11].saved_ramps =
   FUNC_4(3*VAR_15*sizeof(uint16_t));
  if (VAR_1->crtcs[VAR_11].saved_ramps == ((void*)0)) {
   FUNC_6("malloc");
   FUNC_3(VAR_17);
   return -1;
  }


  FUNC_5(&VAR_1->crtcs[VAR_11].saved_ramps[0*VAR_15], VAR_18,
         VAR_15*sizeof(uint16_t));
  FUNC_5(&VAR_1->crtcs[VAR_11].saved_ramps[1*VAR_15], VAR_19,
         VAR_15*sizeof(uint16_t));
  FUNC_5(&VAR_1->crtcs[VAR_11].saved_ramps[2*VAR_15], VAR_20,
         VAR_15*sizeof(uint16_t));

  FUNC_3(VAR_17);
 }

 return 0;
}
