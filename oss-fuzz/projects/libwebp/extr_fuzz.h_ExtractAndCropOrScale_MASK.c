
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {int const width; int const height; } ;
typedef TYPE_1__ WebPPicture ;


 int FUNC_0 (int,int const*,size_t,int* const) ;
 int FUNC_1 (TYPE_1__* const,int const,int const,int const,int const) ;
 int FUNC_2 (TYPE_1__* const,int const,int const) ;
 int FUNC_3 (int,int const) ;

__attribute__((used)) static int FUNC_4(WebPPicture* const VAR_0, const uint8_t VAR_1[],
                                 size_t VAR_2, uint32_t* const VAR_3) {
  if (VAR_0 == ((void*)0)) return 0;
  const int VAR_4 = FUNC_0(1, VAR_1, VAR_2, VAR_3);
  const int VAR_5 = FUNC_0(1, VAR_1, VAR_2, VAR_3);
  const int VAR_6 = 1 + FUNC_0(7, VAR_1, VAR_2, VAR_3);
  const int VAR_7 = 1 + FUNC_0(7, VAR_1, VAR_2, VAR_3);
  if (VAR_4) {
    if (VAR_5) {
      const uint32_t VAR_8 = 1 + FUNC_0(7, VAR_1, VAR_2, VAR_3);
      const uint32_t VAR_9 = 1 + FUNC_0(7, VAR_1, VAR_2, VAR_3);
      const int VAR_10 = FUNC_3(1, VAR_0->width / VAR_6);
      const int VAR_11 = FUNC_3(1, VAR_0->height / VAR_7);
      const int VAR_12 = (VAR_0->width - VAR_10) / VAR_8;
      const int VAR_13 = (VAR_0->height - VAR_11) / VAR_9;
      return FUNC_1(VAR_0, VAR_12, VAR_13, VAR_10,
                             VAR_11);
    } else {
      const int VAR_14 = 1 + (VAR_0->width * VAR_6) / 8;
      const int VAR_15 = 1 + (VAR_0->height * VAR_7) / 8;
      return FUNC_2(VAR_0, VAR_14, VAR_15);
    }
  }
  return 1;
}
