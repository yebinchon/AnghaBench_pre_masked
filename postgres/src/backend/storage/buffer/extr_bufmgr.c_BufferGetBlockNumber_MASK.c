
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int blockNum; } ;
struct TYPE_6__ {TYPE_1__ tag; } ;
typedef TYPE_2__ BufferDesc ;
typedef int Buffer ;
typedef int BlockNumber ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 TYPE_2__* FUNC_3 (int) ;
 TYPE_2__* FUNC_4 (int) ;

BlockNumber
FUNC_5(Buffer VAR_0)
{
 BufferDesc *VAR_1;

 FUNC_0(FUNC_2(VAR_0));

 if (FUNC_1(VAR_0))
  VAR_1 = FUNC_4(-VAR_0 - 1);
 else
  VAR_1 = FUNC_3(VAR_0 - 1);


 return VAR_1->tag.blockNum;
}
