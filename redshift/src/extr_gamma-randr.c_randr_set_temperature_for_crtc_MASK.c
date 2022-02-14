
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xcb_void_cookie_t ;
typedef int xcb_randr_crtc_t ;
struct TYPE_7__ {int error_code; } ;
typedef TYPE_2__ xcb_generic_error_t ;
typedef double uint16_t ;
struct TYPE_8__ {int crtc_count; int conn; TYPE_1__* crtcs; } ;
typedef TYPE_3__ randr_state_t ;
typedef int color_setting_t ;
struct TYPE_6__ {unsigned int ramp_size; int saved_ramps; int crtc; } ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (double*,double*,double*,unsigned int,int const*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (double*) ;
 double* FUNC_4 (int) ;
 int FUNC_5 (double*,int ,int) ;
 int FUNC_6 (char*) ;
 int VAR_1 ;
 int FUNC_7 (int ,int ,unsigned int,double*,double*,double*) ;
 TYPE_2__* FUNC_8 (int ,int ) ;

__attribute__((used)) static int
FUNC_9(
 randr_state_t *VAR_2, int VAR_3, const color_setting_t *VAR_4,
 int VAR_5)
{
 xcb_generic_error_t *VAR_6;

 if (VAR_3 >= VAR_2->crtc_count || VAR_3 < 0) {
  FUNC_2(VAR_1, FUNC_0("CRTC %d does not exist. "),
   VAR_3);
  if (VAR_2->crtc_count > 1) {
   FUNC_2(VAR_1, FUNC_0("Valid CRTCs are [0-%d].\n"),
    VAR_2->crtc_count-1);
  } else {
   FUNC_2(VAR_1, "%s", FUNC_0("Only CRTC 0 exists.\n"));
  }

  return -1;
 }

 xcb_randr_crtc_t VAR_7 = VAR_2->crtcs[VAR_3].crtc;
 unsigned int VAR_8 = VAR_2->crtcs[VAR_3].ramp_size;


 uint16_t *VAR_9 = FUNC_4(3*VAR_8*sizeof(uint16_t));
 if (VAR_9 == ((void*)0)) {
  FUNC_6("malloc");
  return -1;
 }

 uint16_t *VAR_10 = &VAR_9[0*VAR_8];
 uint16_t *VAR_11 = &VAR_9[1*VAR_8];
 uint16_t *VAR_12 = &VAR_9[2*VAR_8];

 if (VAR_5) {

  FUNC_5(VAR_9, VAR_2->crtcs[VAR_3].saved_ramps,
         3*VAR_8*sizeof(uint16_t));
 } else {

  for (int VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
   uint16_t VAR_14 = (double)VAR_13/VAR_8 * (VAR_0+1);
   VAR_10[VAR_13] = VAR_14;
   VAR_11[VAR_13] = VAR_14;
   VAR_12[VAR_13] = VAR_14;
  }
 }

 FUNC_1(VAR_10, VAR_11, VAR_12, VAR_8,
         VAR_4);


 xcb_void_cookie_t VAR_15 =
  FUNC_7(VAR_2->conn, VAR_7,
       VAR_8, VAR_10,
       VAR_11, VAR_12);
 VAR_6 = FUNC_8(VAR_2->conn, VAR_15);

 if (VAR_6) {
  FUNC_2(VAR_1, FUNC_0("`%s' returned error %d\n"),
   "RANDR Set CRTC Gamma", VAR_6->error_code);
  FUNC_3(VAR_9);
  return -1;
 }

 FUNC_3(VAR_9);

 return 0;
}
