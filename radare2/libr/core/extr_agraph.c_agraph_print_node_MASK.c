
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ is_tiny; scalar_t__ curnode; } ;
struct TYPE_13__ {scalar_t__ is_mini; scalar_t__ is_dummy; } ;
typedef TYPE_1__ RANode ;
typedef TYPE_2__ RAGraph ;


 TYPE_1__* FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__ const*) ;
 int FUNC_2 (TYPE_2__ const*,TYPE_1__*,int const,int const) ;
 int FUNC_3 (TYPE_2__ const*,TYPE_1__*,int const) ;
 int FUNC_4 (TYPE_2__ const*,TYPE_1__*,int const) ;

__attribute__((used)) static void FUNC_5(const RAGraph *VAR_0, RANode *VAR_1) {
 if (VAR_1->is_dummy) {
  return;
 }
 const int VAR_2 = VAR_0->curnode && FUNC_0 (VAR_0->curnode) == VAR_1;
 const bool VAR_3 = FUNC_1 (VAR_0);
 if (VAR_0->is_tiny) {
  FUNC_4 (VAR_0, VAR_1, VAR_2);
 } else if (VAR_3 || VAR_1->is_mini) {
  FUNC_2 (VAR_0, VAR_1, VAR_2, VAR_3);
 } else {
  FUNC_3 (VAR_0, VAR_1, VAR_2);
 }
}
