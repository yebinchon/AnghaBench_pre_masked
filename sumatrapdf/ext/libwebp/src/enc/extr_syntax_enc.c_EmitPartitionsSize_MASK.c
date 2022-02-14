
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_7__ {int (* writer ) (size_t*,int,TYPE_1__* const) ;} ;
typedef TYPE_1__ WebPPicture ;
struct TYPE_8__ {int num_parts_; scalar_t__ parts_; } ;
typedef TYPE_2__ VP8Encoder ;


 int VAR_0 ;
 size_t FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 size_t const VAR_2 ;
 int FUNC_1 (TYPE_1__* const,int ) ;
 int FUNC_2 (size_t*,int,TYPE_1__* const) ;

__attribute__((used)) static int FUNC_3(const VP8Encoder* const VAR_3,
                              WebPPicture* const VAR_4) {
  uint8_t VAR_5[3 * (VAR_0 - 1)];
  int VAR_6;
  for (VAR_6 = 0; VAR_6 < VAR_3->num_parts_ - 1; ++VAR_6) {
    const size_t VAR_7 = FUNC_0(VAR_3->parts_ + VAR_6);
    if (VAR_7 >= VAR_2) {
      return FUNC_1(VAR_4, VAR_1);
    }
    VAR_5[3 * VAR_6 + 0] = (VAR_7 >> 0) & 0xff;
    VAR_5[3 * VAR_6 + 1] = (VAR_7 >> 8) & 0xff;
    VAR_5[3 * VAR_6 + 2] = (VAR_7 >> 16) & 0xff;
  }
  return VAR_6 ? VAR_4->writer(VAR_5, 3 * VAR_6, VAR_4) : 1;
}
