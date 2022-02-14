
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_15__ {TYPE_5__* output; } ;
typedef TYPE_4__ WebPDecParams ;
struct TYPE_13__ {int * y; } ;
struct TYPE_12__ {int * rgba; } ;
struct TYPE_14__ {TYPE_2__ YUVA; TYPE_1__ RGBA; } ;
struct TYPE_16__ {int width; int height; TYPE_3__ u; int colorspace; } ;
typedef TYPE_5__ WebPDecBuffer ;
typedef int WEBP_CSP_MODE ;


 scalar_t__ FUNC_0 (int const* const,size_t,TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_5__*,TYPE_5__* const) ;
 int FUNC_2 (int const* const,size_t,int*,int*) ;
 int FUNC_3 (TYPE_5__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*) ;

__attribute__((used)) static uint8_t* FUNC_6(WEBP_CSP_MODE VAR_1, const uint8_t* const VAR_2,
                       size_t VAR_3, int* const VAR_4, int* const VAR_5,
                       WebPDecBuffer* const VAR_6) {
  WebPDecParams VAR_7;
  WebPDecBuffer VAR_8;

  FUNC_3(&VAR_8);
  FUNC_5(&VAR_7);
  VAR_7.output = &VAR_8;
  VAR_8.colorspace = VAR_1;


  if (!FUNC_2(VAR_2, VAR_3, &VAR_8.width, &VAR_8.height)) {
    return ((void*)0);
  }
  if (VAR_4 != ((void*)0)) *VAR_4 = VAR_8.width;
  if (VAR_5 != ((void*)0)) *VAR_5 = VAR_8.height;


  if (FUNC_0(VAR_2, VAR_3, &VAR_7) != VAR_0) {
    return ((void*)0);
  }
  if (VAR_6 != ((void*)0)) {
    FUNC_1(&VAR_8, VAR_6);
  }

  return FUNC_4(VAR_1) ? VAR_8.u.RGBA.rgba : VAR_8.u.YUVA.y;
}
