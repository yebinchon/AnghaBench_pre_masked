
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x_offset; int y_offset; } ;
typedef TYPE_1__ WebPMuxFrameInfo ;


 int FUNC_0 (int ,char*,int,int,int,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(const WebPMuxFrameInfo* const VAR_1) {
  if ((VAR_1->x_offset | VAR_1->y_offset) & 1) {
    FUNC_0(VAR_0, "Warning: odd offsets will be snapped to even values"
            " (%d, %d) -> (%d, %d)\n", VAR_1->x_offset, VAR_1->y_offset,
            VAR_1->x_offset & ~1, VAR_1->y_offset & ~1);
  }
}
