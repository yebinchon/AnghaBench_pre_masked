
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int width; int height; } ;
typedef TYPE_1__ WebPBitstreamFeatures ;


 scalar_t__ FUNC_0 (int const*,size_t,TYPE_1__*) ;
 scalar_t__ VAR_0 ;

int FUNC_1(const uint8_t* VAR_1, size_t VAR_2,
                int* VAR_3, int* VAR_4) {
  WebPBitstreamFeatures VAR_5;

  if (FUNC_0(VAR_1, VAR_2, &VAR_5) != VAR_0) {
    return 0;
  }

  if (VAR_3 != ((void*)0)) {
    *VAR_3 = VAR_5.width;
  }
  if (VAR_4 != ((void*)0)) {
    *VAR_4 = VAR_5.height;
  }

  return 1;
}
