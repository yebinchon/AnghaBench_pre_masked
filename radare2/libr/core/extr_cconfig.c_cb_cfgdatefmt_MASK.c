
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {char* value; } ;
struct TYPE_5__ {TYPE_1__* print; } ;
struct TYPE_4__ {int datefmt; } ;
typedef TYPE_2__ RCore ;
typedef TYPE_3__ RConfigNode ;


 int FUNC_0 (int ,int,char*,char*) ;

__attribute__((used)) static bool FUNC_1(void *VAR_0, void *VAR_1) {
 RCore *VAR_2 = (RCore*) VAR_0;
 RConfigNode *VAR_3 = (RConfigNode*) VAR_1;
 FUNC_0 (VAR_2->print->datefmt, 32, "%s", VAR_3->value);
 return 1;
}
