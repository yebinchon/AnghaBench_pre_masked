
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ i_value; } ;
struct TYPE_5__ {TYPE_1__* print; } ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_2__ RCore ;
typedef TYPE_3__ RConfigNode ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(void *VAR_1, void *VAR_2) {
 RCore *VAR_3 = (RCore *) VAR_1;
 RConfigNode *VAR_4 = (RConfigNode *) VAR_2;
 if (VAR_4->i_value) {
  VAR_3->print->flags |= VAR_0;
 } else {
  VAR_3->print->flags &= (~VAR_0);
 }
 return 1;
}
