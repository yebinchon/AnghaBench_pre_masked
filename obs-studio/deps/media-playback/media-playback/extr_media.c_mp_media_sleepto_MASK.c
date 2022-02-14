
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {scalar_t__ next_ns; } ;
typedef TYPE_1__ mp_media_t ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline bool FUNC_2(mp_media_t *VAR_0)
{
 bool VAR_1 = 0;

 if (!VAR_0->next_ns) {
  VAR_0->next_ns = FUNC_0();
 } else {
  uint64_t VAR_2 = FUNC_0();
  const uint64_t VAR_3 = 200000000;

  if (VAR_0->next_ns > VAR_2 && (VAR_0->next_ns - VAR_2) > VAR_3) {
   FUNC_1(VAR_2 + VAR_3);
   VAR_1 = 1;
  } else {
   FUNC_1(VAR_0->next_ns);
  }
 }

 return VAR_1;
}
