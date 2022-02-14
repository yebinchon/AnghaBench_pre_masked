
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int index; } ;
struct TYPE_5__ {scalar_t__ off; int blkno; int buffer; } ;
typedef int Snapshot ;
typedef int Page ;
typedef TYPE_1__ GinBtreeStack ;
typedef TYPE_2__ GinBtreeData ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static bool
FUNC_6(GinBtreeData *VAR_2, GinBtreeStack *VAR_3, Snapshot VAR_4)
{
 Page VAR_5 = FUNC_1(VAR_3->buffer);

 if (VAR_3->off > FUNC_3(VAR_5))
 {



  if (FUNC_2(VAR_5))
   return 0;

  VAR_3->buffer = FUNC_5(VAR_3->buffer, VAR_2->index, VAR_1);
  VAR_3->blkno = FUNC_0(VAR_3->buffer);
  VAR_3->off = VAR_0;
  FUNC_4(VAR_2->index, VAR_3->blkno, VAR_4);
 }

 return 1;
}
