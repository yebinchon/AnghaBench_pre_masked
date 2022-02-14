
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct napi_struct {scalar_t__ gro_bitmask; TYPE_1__* gro_hash; } ;
struct TYPE_2__ {scalar_t__ count; int list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct napi_struct *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_0(&VAR_1->gro_hash[VAR_2].list);
  VAR_1->gro_hash[VAR_2].count = 0;
 }
 VAR_1->gro_bitmask = 0;
}
