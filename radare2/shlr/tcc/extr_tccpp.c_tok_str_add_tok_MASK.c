
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ last_line_num; } ;
typedef TYPE_1__ TokenString ;
struct TYPE_10__ {scalar_t__ line_num; } ;
struct TYPE_9__ {scalar_t__ i; } ;
typedef TYPE_2__ CValue ;


 int VAR_0 ;
 TYPE_7__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,TYPE_2__*) ;
 TYPE_2__ VAR_3 ;

void FUNC_1(TokenString *VAR_4)
{
 CValue VAR_5;


 if (VAR_1->line_num != VAR_4->last_line_num) {
  VAR_4->last_line_num = VAR_1->line_num;
  VAR_5.i = VAR_4->last_line_num;
  FUNC_0 (VAR_4, VAR_0, &VAR_5);
 }
 FUNC_0 (VAR_4, VAR_2, &VAR_3);
}
