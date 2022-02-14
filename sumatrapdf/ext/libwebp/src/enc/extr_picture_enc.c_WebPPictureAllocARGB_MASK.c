
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_5__ {int argb_stride; int * argb; void* memory_argb_; } ;
typedef TYPE_1__ WebPPicture ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int const VAR_2 ;
 int FUNC_1 (TYPE_1__* const,int ) ;
 int FUNC_2 (TYPE_1__* const) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int const,int) ;
 int FUNC_5 (int ) ;

int FUNC_6(WebPPicture* const VAR_3, int VAR_4, int VAR_5) {
  void* VAR_6;
  const uint64_t VAR_7 = (uint64_t)VAR_4 * VAR_5;

  FUNC_5(VAR_3 != ((void*)0));

  FUNC_3(VAR_3->memory_argb_);
  FUNC_2(VAR_3);

  if (VAR_4 <= 0 || VAR_5 <= 0) {
    return FUNC_1(VAR_3, VAR_0);
  }

  VAR_6 = FUNC_4(VAR_7 + VAR_2, sizeof(*VAR_3->argb));
  if (VAR_6 == ((void*)0)) {
    return FUNC_1(VAR_3, VAR_1);
  }
  VAR_3->memory_argb_ = VAR_6;
  VAR_3->argb = (uint32_t*)FUNC_0(VAR_6);
  VAR_3->argb_stride = VAR_4;
  return 1;
}
