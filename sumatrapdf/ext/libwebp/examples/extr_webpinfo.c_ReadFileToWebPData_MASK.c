
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {size_t size; int const* bytes; } ;
typedef TYPE_1__ WebPData ;


 int FUNC_0 (char const* const,int const**,size_t*) ;

__attribute__((used)) static int FUNC_1(const char* const VAR_0,
                              WebPData* const VAR_1) {
  const uint8_t* VAR_2;
  size_t VAR_3;
  if (!FUNC_0(VAR_0, &VAR_2, &VAR_3)) return 0;
  VAR_1->bytes = VAR_2;
  VAR_1->size = VAR_3;
  return 1;
}
