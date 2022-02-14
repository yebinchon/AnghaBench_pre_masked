
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {size_t size; int * bytes; } ;
typedef TYPE_1__ MetadataPayload ;


 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (int *,char const*,size_t) ;

int FUNC_2(const char* VAR_0, size_t VAR_1,
                 MetadataPayload* const VAR_2) {
  if (VAR_0 == ((void*)0) || VAR_1 == 0 || VAR_2 == ((void*)0)) return 0;
  VAR_2->bytes = (uint8_t*)FUNC_0(VAR_1);
  if (VAR_2->bytes == ((void*)0)) return 0;
  VAR_2->size = VAR_1;
  FUNC_1(VAR_2->bytes, VAR_0, VAR_1);
  return 1;
}
