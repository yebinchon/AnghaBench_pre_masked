
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int width; int height; } ;
typedef TYPE_1__ WebPPicture ;
struct TYPE_5__ {int * refs_; int hash_chain_; TYPE_1__* pic_; } ;
typedef TYPE_2__ VP8LEncoder ;


 int const VAR_0 ;
 int FUNC_0 (int *,int const) ;
 int FUNC_1 (int *,int const) ;

__attribute__((used)) static int FUNC_2(VP8LEncoder* const VAR_1) {
  const WebPPicture* const VAR_2 = VAR_1->pic_;
  const int VAR_3 = VAR_2->width;
  const int VAR_4 = VAR_2->height;
  const int VAR_5 = VAR_3 * VAR_4;


  const int VAR_6 = (VAR_5 - 1) / VAR_0 + 1;
  int VAR_7;
  if (!FUNC_1(&VAR_1->hash_chain_, VAR_5)) return 0;

  for (VAR_7 = 0; VAR_7 < 3; ++VAR_7) FUNC_0(&VAR_1->refs_[VAR_7], VAR_6);

  return 1;
}
