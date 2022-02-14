
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int duration; int dispose_method; int x_offset; int y_offset; scalar_t__ blend_method; } ;
typedef TYPE_1__ WebPMuxFrameInfo ;
typedef int WebPMuxError ;
struct TYPE_7__ {int* bytes; size_t size; } ;
typedef TYPE_2__ WebPData ;
struct TYPE_8__ {size_t size; } ;


 size_t VAR_0 ;
 int FUNC_0 (int*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (unsigned long long,size_t const) ;
 int FUNC_2 (int) ;
 TYPE_3__* VAR_5 ;

__attribute__((used)) static WebPMuxError FUNC_3(
    int VAR_6, int VAR_7, const WebPMuxFrameInfo* const VAR_8,
    WebPData* const VAR_9) {
  uint8_t* VAR_10;
  const size_t VAR_11 = VAR_5[VAR_0].size;

  FUNC_2(VAR_6 > 0 && VAR_7 > 0 && VAR_8->duration >= 0);
  FUNC_2(VAR_8->dispose_method == (VAR_8->dispose_method & 1));


  VAR_10 = (uint8_t*)FUNC_1(1ULL, VAR_11);
  if (VAR_10 == ((void*)0)) return VAR_2;

  FUNC_0(VAR_10 + 0, VAR_8->x_offset / 2);
  FUNC_0(VAR_10 + 3, VAR_8->y_offset / 2);

  FUNC_0(VAR_10 + 6, VAR_6 - 1);
  FUNC_0(VAR_10 + 9, VAR_7 - 1);
  FUNC_0(VAR_10 + 12, VAR_8->duration);
  VAR_10[15] =
      (VAR_8->blend_method == VAR_3 ? 2 : 0) |
      (VAR_8->dispose_method == VAR_1 ? 1 : 0);

  VAR_9->bytes = VAR_10;
  VAR_9->size = VAR_11;
  return VAR_4;
}
