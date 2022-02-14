
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int width; float height; TYPE_2__* stats; } ;
typedef TYPE_1__ WebPPicture ;
struct TYPE_6__ {int coded_size; float* PSNR; } ;
typedef TYPE_2__ WebPAuxStats ;
typedef int W_CHAR ;


 int FUNC_0 (TYPE_2__ const* const,char*) ;
 int FUNC_1 (int ,char*,int const*) ;
 int FUNC_2 (int ,char*,int,float) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(const WebPPicture* const VAR_1,
                                   int VAR_2,
                                   const char* const VAR_3) {
  const WebPAuxStats* const VAR_4 = VAR_1->stats;
  if (VAR_2) {
    FUNC_2(VAR_0, "%7d %2.2f\n", VAR_4->coded_size, VAR_4->PSNR[3]);
  } else {
    FUNC_1(VAR_0, "File:      %s\n", (const W_CHAR*)VAR_3);
    FUNC_2(VAR_0, "Dimension: %d x %f\n", VAR_1->width, VAR_1->height);
    FUNC_2(VAR_0, "Output:    %d bytes (%.2f bpp)\n", VAR_4->coded_size,
            8.f * VAR_4->coded_size / VAR_1->width / VAR_1->height);
    FUNC_0(VAR_4, "ARGB");
  }
}
