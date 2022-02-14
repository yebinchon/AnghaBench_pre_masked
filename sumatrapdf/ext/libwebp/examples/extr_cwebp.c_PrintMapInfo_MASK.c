
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* extra_info; int width; int height; int extra_info_type; } ;
typedef TYPE_1__ WebPPicture ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(const WebPPicture* const VAR_1) {
  if (VAR_1->extra_info != ((void*)0)) {
    const int VAR_2 = (VAR_1->width + 15) / 16;
    const int VAR_3 = (VAR_1->height + 15) / 16;
    const int VAR_4 = VAR_1->extra_info_type;
    int VAR_5, VAR_6;
    for (VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6) {
      for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5) {
        const int VAR_7 = VAR_1->extra_info[VAR_5 + VAR_6 * VAR_2];
        if (VAR_4 == 1) {
          FUNC_0(VAR_0, "%c", "+."[VAR_7]);
        } else if (VAR_4 == 2) {
          FUNC_0(VAR_0, "%c", ".-*X"[VAR_7]);
        } else if (VAR_4 == 3) {
          FUNC_0(VAR_0, "%.2d ", VAR_7);
        } else if (VAR_4 == 6 || VAR_4 == 7) {
          FUNC_0(VAR_0, "%3d ", VAR_7);
        } else {
          FUNC_0(VAR_0, "0x%.2x ", VAR_7);
        }
      }
      FUNC_0(VAR_0, "\n");
    }
  }
}
