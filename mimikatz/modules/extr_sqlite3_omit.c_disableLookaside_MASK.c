
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* db; int disableLookaside; } ;
struct TYPE_5__ {int bDisable; } ;
struct TYPE_6__ {TYPE_1__ lookaside; } ;
typedef TYPE_3__ Parse ;



__attribute__((used)) static void FUNC_0(Parse *VAR_0){
  VAR_0->disableLookaside++;
  VAR_0->db->lookaside.bDisable++;
}
