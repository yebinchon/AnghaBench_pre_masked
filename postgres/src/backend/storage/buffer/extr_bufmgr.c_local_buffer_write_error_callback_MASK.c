
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int blockNum; int forkNum; int rnode; } ;
struct TYPE_4__ {TYPE_1__ tag; } ;
typedef TYPE_2__ BufferDesc ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1)
{
 BufferDesc *VAR_2 = (BufferDesc *) VAR_1;

 if (VAR_2 != ((void*)0))
 {
  char *VAR_3 = FUNC_2(VAR_2->tag.rnode, VAR_0,
            VAR_2->tag.forkNum);

  FUNC_0("writing block %u of relation %s",
       VAR_2->tag.blockNum, VAR_3);
  FUNC_1(VAR_3);
 }
}
