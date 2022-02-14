
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {scalar_t__ i_value; } ;
struct TYPE_4__ {TYPE_3__* print; } ;
typedef TYPE_1__ RCore ;
typedef TYPE_2__ RConfigNode ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ) ;

__attribute__((used)) static bool FUNC_1(void *VAR_1, void *VAR_2) {
 RCore *VAR_3 = (RCore *) VAR_1;
 RConfigNode *VAR_4 = (RConfigNode *) VAR_2;
 if (VAR_4->i_value) {
  VAR_3->print->flags |= VAR_0;
 } else {
  VAR_3->print->flags &= (~VAR_0);
 }
 FUNC_0 (VAR_3->print, VAR_3->print->flags);
 return 1;
}
