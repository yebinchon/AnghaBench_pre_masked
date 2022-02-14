
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
struct TYPE_8__ {int stride; size_t size; int * rgba; } ;
struct TYPE_9__ {TYPE_1__ RGBA; } ;
struct TYPE_11__ {int is_external_memory; TYPE_2__ u; int colorspace; } ;
typedef TYPE_4__ WebPDecBuffer ;
typedef int WEBP_CSP_MODE ;


 scalar_t__ FUNC_0 (int const* const,size_t,TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static uint8_t* FUNC_3(WEBP_CSP_MODE VAR_1,
                                     const uint8_t* const VAR_2,
                                     size_t VAR_3,
                                     uint8_t* const VAR_4,
                                     int VAR_5, size_t VAR_6) {
  WebPDecParams VAR_7;
  WebPDecBuffer VAR_8;
  if (VAR_4 == ((void*)0)) {
    return ((void*)0);
  }
  FUNC_1(&VAR_8);
  FUNC_2(&VAR_7);
  VAR_7.output = &VAR_8;
  VAR_8.colorspace = VAR_1;
  VAR_8.u.RGBA.rgba = VAR_4;
  VAR_8.u.RGBA.stride = VAR_5;
  VAR_8.u.RGBA.size = VAR_6;
  VAR_8.is_external_memory = 1;
  if (FUNC_0(VAR_2, VAR_3, &VAR_7) != VAR_0) {
    return ((void*)0);
  }
  return VAR_4;
}
