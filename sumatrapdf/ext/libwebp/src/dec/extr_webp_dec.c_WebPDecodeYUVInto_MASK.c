
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {TYPE_4__* output; } ;
typedef TYPE_3__ WebPDecParams ;
struct TYPE_8__ {int y_stride; size_t y_size; int u_stride; size_t u_size; int v_stride; size_t v_size; int * v; int * u; int * y; } ;
struct TYPE_9__ {TYPE_1__ YUVA; } ;
struct TYPE_11__ {int is_external_memory; TYPE_2__ u; int colorspace; } ;
typedef TYPE_4__ WebPDecBuffer ;


 scalar_t__ FUNC_0 (int const*,size_t,TYPE_3__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*) ;

uint8_t* FUNC_3(const uint8_t* VAR_2, size_t VAR_3,
                           uint8_t* VAR_4, size_t VAR_5, int VAR_6,
                           uint8_t* VAR_7, size_t VAR_8, int VAR_9,
                           uint8_t* VAR_10, size_t VAR_11, int VAR_12) {
  WebPDecParams VAR_13;
  WebPDecBuffer VAR_14;
  if (VAR_4 == ((void*)0)) return ((void*)0);
  FUNC_1(&VAR_14);
  FUNC_2(&VAR_13);
  VAR_13.output = &VAR_14;
  VAR_14.colorspace = VAR_0;
  VAR_14.u.YUVA.y = VAR_4;
  VAR_14.u.YUVA.y_stride = VAR_6;
  VAR_14.u.YUVA.y_size = VAR_5;
  VAR_14.u.YUVA.u = VAR_7;
  VAR_14.u.YUVA.u_stride = VAR_9;
  VAR_14.u.YUVA.u_size = VAR_8;
  VAR_14.u.YUVA.v = VAR_10;
  VAR_14.u.YUVA.v_stride = VAR_12;
  VAR_14.u.YUVA.v_size = VAR_11;
  VAR_14.is_external_memory = 1;
  if (FUNC_0(VAR_2, VAR_3, &VAR_13) != VAR_1) {
    return ((void*)0);
  }
  return VAR_4;
}
