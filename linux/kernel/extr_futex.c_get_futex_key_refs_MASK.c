
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int inode; } ;
struct TYPE_3__ {int offset; int ptr; } ;
union futex_key {TYPE_2__ shared; TYPE_1__ both; } ;


 int VAR_0 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (union futex_key*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(union futex_key *VAR_1)
{
 if (!VAR_1->both.ptr)
  return;






 if (!FUNC_0(VAR_0)) {
  FUNC_3();
  return;
 }

 switch (VAR_1->both.offset & (129|128)) {
 case 129:
  FUNC_2(VAR_1->shared.inode);
  break;
 case 128:
  FUNC_1(VAR_1);
  break;
 default:





  FUNC_3();
 }
}
