
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ custom_ptr; } ;
typedef TYPE_1__ WebPPicture ;
typedef int FILE ;


 int FUNC_0 (int const*,size_t,int,int * const) ;

__attribute__((used)) static int FUNC_1(const uint8_t* VAR_0, size_t VAR_1,
                    const WebPPicture* const VAR_2) {
  FILE* const VAR_3 = (FILE*)VAR_2->custom_ptr;
  return VAR_1 ? (FUNC_0(VAR_0, VAR_1, 1, VAR_3) == 1) : 1;
}
