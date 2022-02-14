
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int mm; } ;
struct TYPE_5__ {int inode; } ;
struct TYPE_4__ {int offset; int ptr; } ;
union futex_key {TYPE_3__ private; TYPE_2__ shared; TYPE_1__ both; } ;


 int VAR_0 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(union futex_key *VAR_1)
{
 if (!VAR_1->both.ptr) {

  FUNC_1(1);
  return;
 }

 if (!FUNC_0(VAR_0))
  return;

 switch (VAR_1->both.offset & (129|128)) {
 case 129:
  FUNC_2(VAR_1->shared.inode);
  break;
 case 128:
  FUNC_3(VAR_1->private.mm);
  break;
 }
}
