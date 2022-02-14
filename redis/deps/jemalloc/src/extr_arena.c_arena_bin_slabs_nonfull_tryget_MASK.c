
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int extent_t ;
struct TYPE_4__ {int reslabs; } ;
struct TYPE_5__ {TYPE_1__ stats; int slabs_nonfull; } ;
typedef TYPE_2__ bin_t ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *) ;

__attribute__((used)) static extent_t *
FUNC_1(bin_t *VAR_1) {
 extent_t *VAR_2 = FUNC_0(&VAR_1->slabs_nonfull);
 if (VAR_2 == ((void*)0)) {
  return ((void*)0);
 }
 if (VAR_0) {
  VAR_1->stats.reslabs++;
 }
 return VAR_2;
}
