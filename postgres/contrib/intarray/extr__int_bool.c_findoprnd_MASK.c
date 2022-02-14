
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t int32 ;
struct TYPE_3__ {scalar_t__ type; size_t val; int left; } ;
typedef TYPE_1__ ITEM ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,size_t,size_t) ;

__attribute__((used)) static void
FUNC_2(ITEM *VAR_3, int32 *VAR_4)
{

 FUNC_0();





 if (VAR_3[*VAR_4].type == VAR_2)
 {
  VAR_3[*VAR_4].left = 0;
  (*VAR_4)--;
 }
 else if (VAR_3[*VAR_4].val == (int32) '!')
 {
  VAR_3[*VAR_4].left = -1;
  (*VAR_4)--;
  FUNC_2(VAR_3, VAR_4);
 }
 else
 {
  ITEM *VAR_5 = &VAR_3[*VAR_4];
  int32 VAR_6 = *VAR_4;

  (*VAR_4)--;
  FUNC_2(VAR_3, VAR_4);
  VAR_5->left = *VAR_4 - VAR_6;
  FUNC_2(VAR_3, VAR_4);
 }
}
