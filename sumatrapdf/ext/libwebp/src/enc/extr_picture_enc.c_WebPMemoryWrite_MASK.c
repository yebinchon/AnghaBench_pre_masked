
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int const uint8_t ;
typedef unsigned long long uint64_t ;
struct TYPE_4__ {scalar_t__ custom_ptr; } ;
typedef TYPE_1__ WebPPicture ;
struct TYPE_5__ {size_t size; unsigned long long max_size; int const* mem; } ;
typedef TYPE_2__ WebPMemoryWriter ;


 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (unsigned long long,int) ;
 int FUNC_2 (int const*,int const*,size_t) ;

int FUNC_3(const uint8_t* VAR_0, size_t VAR_1,
                    const WebPPicture* VAR_2) {
  WebPMemoryWriter* const VAR_3 = (WebPMemoryWriter*)VAR_2->custom_ptr;
  uint64_t VAR_4;
  if (VAR_3 == ((void*)0)) {
    return 1;
  }
  VAR_4 = (uint64_t)VAR_3->size + VAR_1;
  if (VAR_4 > VAR_3->max_size) {
    uint8_t* VAR_5;
    uint64_t VAR_6 = 2ULL * VAR_3->max_size;
    if (VAR_6 < VAR_4) VAR_6 = VAR_4;
    if (VAR_6 < 8192ULL) VAR_6 = 8192ULL;
    VAR_5 = (uint8_t*)FUNC_1(VAR_6, 1);
    if (VAR_5 == ((void*)0)) {
      return 0;
    }
    if (VAR_3->size > 0) {
      FUNC_2(VAR_5, VAR_3->mem, VAR_3->size);
    }
    FUNC_0(VAR_3->mem);
    VAR_3->mem = VAR_5;

    VAR_3->max_size = (size_t)VAR_6;
  }
  if (VAR_1 > 0) {
    FUNC_2(VAR_3->mem + VAR_3->size, VAR_0, VAR_1);
    VAR_3->size += VAR_1;
  }
  return 1;
}
