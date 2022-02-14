
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* rd_rel; int rd_smgr; } ;
struct TYPE_8__ {int relpersistence; } ;
typedef TYPE_2__* Relation ;
typedef int ReadBufferMode ;
typedef int ForkNumber ;
typedef int BufferAccessStrategy ;
typedef int Buffer ;
typedef int BlockNumber ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;

Buffer
FUNC_8(Relation VAR_2, ForkNumber VAR_3, BlockNumber VAR_4,
       ReadBufferMode VAR_5, BufferAccessStrategy VAR_6)
{
 bool VAR_7;
 Buffer VAR_8;


 FUNC_2(VAR_2);






 if (FUNC_0(VAR_2))
  FUNC_3(VAR_1,
    (FUNC_4(VAR_0),
     FUNC_5("cannot access temporary tables of other sessions")));





 FUNC_7(VAR_2);
 VAR_8 = FUNC_1(VAR_2->rd_smgr, VAR_2->rd_rel->relpersistence,
       VAR_3, VAR_4, VAR_5, VAR_6, &VAR_7);
 if (VAR_7)
  FUNC_6(VAR_2);
 return VAR_8;
}
