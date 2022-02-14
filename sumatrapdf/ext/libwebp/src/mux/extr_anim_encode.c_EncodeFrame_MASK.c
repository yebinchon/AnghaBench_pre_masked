
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int use_argb; int * custom_ptr; int writer; } ;
typedef TYPE_1__ WebPPicture ;
typedef int WebPMemoryWriter ;
typedef int WebPConfig ;


 int FUNC_0 (int const* const,TYPE_1__* const) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(const WebPConfig* const VAR_1, WebPPicture* const VAR_2,
                       WebPMemoryWriter* const VAR_3) {
  VAR_2->use_argb = 1;
  VAR_2->writer = VAR_0;
  VAR_2->custom_ptr = VAR_3;
  if (!FUNC_0(VAR_1, VAR_2)) {
    return 0;
  }
  return 1;
}
