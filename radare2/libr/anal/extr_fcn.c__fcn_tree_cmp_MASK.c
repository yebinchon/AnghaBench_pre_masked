
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
typedef scalar_t__ ut32 ;
struct TYPE_5__ {scalar_t__ max; scalar_t__ min; } ;
struct TYPE_6__ {scalar_t__ addr; TYPE_1__ meta; } ;
typedef int RBNode ;
typedef TYPE_2__ RAnalFunction ;


 TYPE_2__* FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(const void *VAR_0, const RBNode *VAR_1, void *VAR_2) {
 const RAnalFunction *VAR_3 = (const RAnalFunction *)VAR_0;
 const RAnalFunction *VAR_4 = FUNC_0 (VAR_1);
 FUNC_1 ((RAnalFunction *)VAR_3);
 FUNC_1 ((RAnalFunction *)VAR_4);
 ut32 VAR_5 = VAR_3->meta.max - VAR_3->meta.min, VAR_6 = VAR_4->meta.max - VAR_4->meta.min;
 ut64 VAR_7 = VAR_3->meta.min, VAR_8 = VAR_3->meta.min + VAR_5, VAR_9 = VAR_3->addr;
 ut64 VAR_10 = VAR_4->meta.min, VAR_11 = VAR_4->meta.min + VAR_6, VAR_12 = VAR_4->addr;
 if (VAR_7 != VAR_10) {
  return VAR_7 < VAR_10 ? -1 : 1;
 }
 if (VAR_8 != VAR_11) {
  return VAR_8 - 1 < VAR_11 - 1 ? -1 : 1;
 }
 if (VAR_9 != VAR_12) {
  return VAR_9 < VAR_12 ? -1 : 1;
 }
 return 0;
}
