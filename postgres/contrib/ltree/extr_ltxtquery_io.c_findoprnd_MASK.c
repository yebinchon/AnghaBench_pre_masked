
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t int32 ;
struct TYPE_3__ {scalar_t__ type; int left; size_t val; } ;
typedef TYPE_1__ ITEM ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static void
FUNC_1(ITEM *VAR_2, int32 *VAR_3)
{

 FUNC_0();

 if (VAR_2[*VAR_3].type == VAR_0 || VAR_2[*VAR_3].type == VAR_1)
 {
  VAR_2[*VAR_3].left = 0;
  (*VAR_3)++;
 }
 else if (VAR_2[*VAR_3].val == (int32) '!')
 {
  VAR_2[*VAR_3].left = 1;
  (*VAR_3)++;
  FUNC_1(VAR_2, VAR_3);
 }
 else
 {
  ITEM *VAR_4 = &VAR_2[*VAR_3];
  int32 VAR_5 = *VAR_3;

  (*VAR_3)++;
  FUNC_1(VAR_2, VAR_3);
  VAR_4->left = *VAR_3 - VAR_5;
  FUNC_1(VAR_2, VAR_3);
 }
}
