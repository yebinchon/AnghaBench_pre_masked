
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_4__ {scalar_t__ RegionSize; scalar_t__ BaseAddress; } ;
typedef int RList ;
typedef int RDebugMap ;
typedef TYPE_1__ MEMORY_BASIC_INFORMATION ;


 int * FUNC_0 (int *,char const*,int ,int ,TYPE_1__*) ;

__attribute__((used)) static inline RDebugMap *FUNC_1(RList *VAR_0, const char *VAR_1, MEMORY_BASIC_INFORMATION *VAR_2) {
 return FUNC_0 (VAR_0, VAR_1, (ut64)(size_t)VAR_2->BaseAddress, (ut64)VAR_2->RegionSize, VAR_2);
}
