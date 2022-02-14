
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int size; char const* bytes; } ;
typedef TYPE_1__ MetadataPayload ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int * const,int ) ;
 size_t const FUNC_1 (char const*,size_t const,size_t const,int * const) ;
 size_t const VAR_0 ;

__attribute__((used)) static int FUNC_2(FILE* const VAR_1, const char VAR_2[4],
                              const MetadataPayload* const VAR_3) {
  const uint8_t VAR_4 = 0;
  const size_t VAR_5 = VAR_3->size & 1;
  int VAR_6 = (FUNC_1(VAR_2, VAR_0, 1, VAR_1) == 1);
  VAR_6 = VAR_6 && FUNC_0(VAR_1, (uint32_t)VAR_3->size);
  VAR_6 = VAR_6 && (FUNC_1(VAR_3->bytes, VAR_3->size, 1, VAR_1) == 1);
  return VAR_6 && (FUNC_1(&VAR_4, VAR_5, VAR_5, VAR_1) == VAR_5);
}
