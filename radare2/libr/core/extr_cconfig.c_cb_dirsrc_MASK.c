
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int value; } ;
struct TYPE_5__ {TYPE_1__* bin; } ;
struct TYPE_4__ {int srcdir; } ;
typedef TYPE_2__ RCore ;
typedef TYPE_3__ RConfigNode ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(void *VAR_0, void *VAR_1) {
 RConfigNode *VAR_2 = (RConfigNode*) VAR_1;
 RCore *VAR_3 = (RCore *)VAR_0;
 FUNC_0 (VAR_3->bin->srcdir);
 VAR_3->bin->srcdir = FUNC_1 (VAR_2->value);
 return 1;
}
