
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut32 ;
struct TYPE_5__ {scalar_t__ data; } ;
struct TYPE_4__ {int size; } ;
typedef TYPE_1__ RIOMalloc ;
typedef TYPE_2__ RIODesc ;



__attribute__((used)) static inline void FUNC_0(RIODesc *VAR_0, ut32 VAR_1) {
 if (!VAR_0) {
  return;
 }
 RIOMalloc *VAR_2 = (RIOMalloc*)VAR_0->data;
 if (VAR_2) {
  VAR_2->size = VAR_1;
 }
}
