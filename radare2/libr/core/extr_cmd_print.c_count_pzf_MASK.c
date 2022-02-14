
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct count_pz_t {scalar_t__ addr; int * ret; } ;
struct TYPE_3__ {scalar_t__ offset; scalar_t__ size; } ;
typedef TYPE_1__ RFlagItem ;



__attribute__((used)) static bool FUNC_0(RFlagItem *VAR_0, void *VAR_1) {
 struct count_pz_t *VAR_2 = (struct count_pz_t *)VAR_1;
 if (VAR_0->offset <= VAR_2->addr && VAR_2->addr < VAR_0->offset + VAR_0->size) {
  (*VAR_2->ret)++;
 }
 return 1;
}
