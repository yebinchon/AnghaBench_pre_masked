
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int y_stride; int u_stride; int v_stride; int * v; int * u; } ;
typedef TYPE_2__ WebPYUVABuffer ;
struct TYPE_5__ {TYPE_2__ YUVA; } ;
struct TYPE_7__ {TYPE_1__ u; } ;
typedef TYPE_3__ WebPDecBuffer ;


 int * FUNC_0 (int ,int const*,size_t,int*,int*,TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

uint8_t* FUNC_2(const uint8_t* VAR_1, size_t VAR_2,
                       int* VAR_3, int* VAR_4, uint8_t** VAR_5, uint8_t** VAR_6,
                       int* VAR_7, int* VAR_8) {
  WebPDecBuffer VAR_9;
  uint8_t* const VAR_10 = FUNC_0(VAR_0, VAR_1, VAR_2,
                              VAR_3, VAR_4, &VAR_9);

  if (VAR_10 != ((void*)0)) {
    const WebPYUVABuffer* const VAR_11 = &VAR_9.u.YUVA;
    *VAR_5 = VAR_11->u;
    *VAR_6 = VAR_11->v;
    *VAR_7 = VAR_11->y_stride;
    *VAR_8 = VAR_11->u_stride;
    FUNC_1(VAR_11->u_stride == VAR_11->v_stride);
  }
  return VAR_10;
}
