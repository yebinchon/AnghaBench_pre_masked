
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int width; int height; } ;
typedef TYPE_1__ WebPPicture ;


 int FUNC_0 (TYPE_1__ const* const,int* const,int* const) ;

__attribute__((used)) static int FUNC_1(const WebPPicture* const VAR_0,
                                   int* const VAR_1, int* const VAR_2,
                                   int VAR_3, int VAR_4) {
  FUNC_0(VAR_0, VAR_1, VAR_2);
  if ((*VAR_1) < 0 || (*VAR_2) < 0) return 0;
  if (VAR_3 <= 0 || VAR_4 <= 0) return 0;
  if ((*VAR_1) + VAR_3 > VAR_0->width) return 0;
  if ((*VAR_2) + VAR_4 > VAR_0->height) return 0;
  return 1;
}
