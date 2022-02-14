
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int i_value; } ;
struct TYPE_9__ {TYPE_3__* print; TYPE_2__* dbg; int anal; int assembler; } ;
struct TYPE_8__ {int big_endian; } ;
struct TYPE_7__ {TYPE_1__* bp; } ;
struct TYPE_6__ {int endian; } ;
typedef TYPE_4__ RCore ;
typedef TYPE_5__ RConfigNode ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static bool FUNC_2(void *VAR_0, void *VAR_1) {
 RCore *VAR_2 = (RCore *) VAR_0;
 RConfigNode *VAR_3 = (RConfigNode *) VAR_1;

 bool VAR_4 = FUNC_1 (VAR_2->assembler, VAR_3->i_value);

 FUNC_0 (VAR_2->anal, VAR_4);

 if (VAR_2->dbg && VAR_2->dbg->bp) {
  VAR_2->dbg->bp->endian = VAR_4;
 }

 VAR_2->print->big_endian = VAR_3->i_value;
 return 1;
}
