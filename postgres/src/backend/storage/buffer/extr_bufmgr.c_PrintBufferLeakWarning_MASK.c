
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
typedef int int32 ;
struct TYPE_5__ {int blockNum; int forkNum; int rnode; } ;
struct TYPE_6__ {TYPE_1__ tag; int state; } ;
typedef TYPE_2__ BufferDesc ;
typedef int Buffer ;
typedef int BackendId ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 TYPE_2__* FUNC_4 (int) ;
 TYPE_2__* FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int ,char*,int,char*,int ,int,int ,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *) ;
 char* FUNC_10 (int ,int ,int ) ;

void
FUNC_11(Buffer VAR_5)
{
 BufferDesc *VAR_6;
 int32 VAR_7;
 char *VAR_8;
 BackendId VAR_9;
 uint32 VAR_10;

 FUNC_0(FUNC_3(VAR_5));
 if (FUNC_2(VAR_5))
 {
  VAR_6 = FUNC_5(-VAR_5 - 1);
  VAR_7 = VAR_2[-VAR_5 - 1];
  VAR_9 = VAR_3;
 }
 else
 {
  VAR_6 = FUNC_4(VAR_5 - 1);
  VAR_7 = FUNC_6(VAR_5);
  VAR_9 = VAR_1;
 }


 VAR_8 = FUNC_10(VAR_6->tag.rnode, VAR_9, VAR_6->tag.forkNum);
 VAR_10 = FUNC_9(&VAR_6->state);
 FUNC_7(VAR_4,
   "buffer refcount leak: [%03d] "
   "(rel=%s, blockNum=%u, flags=0x%x, refcount=%u %d)",
   VAR_5, VAR_8,
   VAR_6->tag.blockNum, VAR_10 & VAR_0,
   FUNC_1(VAR_10), VAR_7);
 FUNC_8(VAR_8);
}
