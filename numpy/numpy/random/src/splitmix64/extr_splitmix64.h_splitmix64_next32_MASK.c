
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_4__ {int has_uint32; scalar_t__ uinteger; } ;
typedef TYPE_1__ splitmix64_state ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline uint32_t FUNC_1(splitmix64_state *VAR_0) {
  uint64_t VAR_1;
  if (VAR_0->has_uint32) {
    VAR_0->has_uint32 = 0;
    return VAR_0->uinteger;
  }
  VAR_1 = FUNC_0(VAR_0);
  VAR_0->has_uint32 = 1;
  VAR_0->uinteger = (uint32_t)(VAR_1 >> 32);
  return (uint32_t)(VAR_1 & 0xffffffff);
}
