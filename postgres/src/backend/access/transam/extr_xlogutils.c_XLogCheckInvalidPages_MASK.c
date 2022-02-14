
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int blkno; int forkno; int node; } ;
struct TYPE_4__ {int present; TYPE_1__ key; } ;
typedef TYPE_2__ xl_invalid_page ;
typedef int HASH_SEQ_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * VAR_2 ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;

void
FUNC_5(void)
{
 HASH_SEQ_STATUS VAR_3;
 xl_invalid_page *VAR_4;
 bool VAR_5 = 0;

 if (VAR_2 == ((void*)0))
  return;

 FUNC_2(&VAR_3, VAR_2);





 while ((VAR_4 = (xl_invalid_page *) FUNC_3(&VAR_3)) != ((void*)0))
 {
  FUNC_4(VAR_1, VAR_4->key.node, VAR_4->key.forkno,
       VAR_4->key.blkno, VAR_4->present);
  VAR_5 = 1;
 }

 if (VAR_5)
  FUNC_0(VAR_0, "WAL contains references to invalid pages");

 FUNC_1(VAR_2);
 VAR_2 = ((void*)0);
}
