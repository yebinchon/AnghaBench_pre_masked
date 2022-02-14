
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int i_value; } ;
struct TYPE_5__ {TYPE_1__* parser; } ;
struct TYPE_4__ {int minval; } ;
typedef TYPE_2__ RCore ;
typedef TYPE_3__ RConfigNode ;



__attribute__((used)) static bool FUNC_0(void *VAR_0, void *VAR_1) {
 RCore *VAR_2 = (RCore *) VAR_0;
 RConfigNode *VAR_3 = (RConfigNode *) VAR_1;
 VAR_2->parser->minval = VAR_3->i_value;
 return 1;
}
