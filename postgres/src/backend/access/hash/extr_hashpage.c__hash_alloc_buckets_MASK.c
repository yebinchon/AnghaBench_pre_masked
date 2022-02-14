
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_9__ {int hasho_bucket; int hasho_page_id; int hasho_flag; scalar_t__ hasho_nextblkno; scalar_t__ hasho_prevblkno; } ;
struct TYPE_8__ {scalar_t__ data; } ;
struct TYPE_7__ {int rd_smgr; int rd_node; } ;
typedef TYPE_1__* Relation ;
typedef scalar_t__ Page ;
typedef TYPE_2__ PGAlignedBlock ;
typedef TYPE_3__* HashPageOpaque ;
typedef scalar_t__ BlockNumber ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int *,int ,scalar_t__,scalar_t__,int) ;
 int FUNC_6 (int ,int ,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static bool
FUNC_7(Relation VAR_5, BlockNumber VAR_6, uint32 VAR_7)
{
 BlockNumber VAR_8;
 PGAlignedBlock VAR_9;
 Page VAR_10;
 HashPageOpaque VAR_11;

 VAR_8 = VAR_6 + VAR_7 - 1;





 if (VAR_8 < VAR_6 || VAR_8 == VAR_2)
  return 0;

 VAR_10 = (Page) VAR_9.data;






 FUNC_4(VAR_10, VAR_0);

 VAR_11 = (HashPageOpaque) FUNC_0(VAR_10);

 VAR_11->hasho_prevblkno = VAR_2;
 VAR_11->hasho_nextblkno = VAR_2;
 VAR_11->hasho_bucket = -1;
 VAR_11->hasho_flag = VAR_3;
 VAR_11->hasho_page_id = VAR_1;

 if (FUNC_2(VAR_5))
  FUNC_5(&VAR_5->rd_node,
     VAR_4,
     VAR_8,
     VAR_9.data,
     1);

 FUNC_3(VAR_5);
 FUNC_1(VAR_10, VAR_8);
 FUNC_6(VAR_5->rd_smgr, VAR_4, VAR_8, VAR_9.data, 0);

 return 1;
}
