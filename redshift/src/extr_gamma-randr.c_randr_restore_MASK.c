
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
typedef int uint16_t ;
struct TYPE_8__ {int crtc_count; int conn; TYPE_1__* crtcs; } ;
typedef TYPE_3__ randr_state_t ;
struct TYPE_6__ {unsigned int ramp_size; int * saved_ramps; int crtc; } ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,unsigned int,int *,int *,int *) ;
 TYPE_2__* FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(randr_state_t *VAR_1)
{
 xcb_generic_error_t *VAR_2;


 for (int VAR_3 = 0; VAR_3 < VAR_1->crtc_count; VAR_3++) {
  xcb_randr_crtc_t VAR_4 = VAR_1->crtcs[VAR_3].crtc;

  unsigned int VAR_5 = VAR_1->crtcs[VAR_3].ramp_size;
  uint16_t *VAR_6 = &VAR_1->crtcs[VAR_3].saved_ramps[0*VAR_5];
  uint16_t *VAR_7 = &VAR_1->crtcs[VAR_3].saved_ramps[1*VAR_5];
  uint16_t *VAR_8 = &VAR_1->crtcs[VAR_3].saved_ramps[2*VAR_5];


  xcb_void_cookie_t VAR_9 =
   FUNC_2(VAR_1->conn, VAR_4,
        VAR_5, VAR_6,
        VAR_7, VAR_8);
  VAR_2 = FUNC_3(VAR_1->conn, VAR_9);

  if (VAR_2) {
   FUNC_1(VAR_0, FUNC_0("`%s' returned error %d\n"),
    "RANDR Set CRTC Gamma", VAR_2->error_code);
   FUNC_1(VAR_0, FUNC_0("Unable to restore CRTC %i\n"), VAR_3);
  }
 }
}
