
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8 ;
typedef int uint16 ;
struct TYPE_5__ {scalar_t__* fp_nodes; int fp_next_slot; } ;
struct TYPE_4__ {int relNode; int dbNode; int spcNode; } ;
typedef TYPE_1__ RelFileNode ;
typedef int Page ;
typedef int ForkNumber ;
typedef TYPE_2__* FSMPage ;
typedef int Buffer ;
typedef int BlockNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;

int
FUNC_10(Buffer VAR_6, uint8 VAR_7, bool VAR_8,
     bool VAR_9)
{
 Page VAR_10 = FUNC_0(VAR_6);
 FSMPage VAR_11 = (FSMPage) FUNC_4(VAR_10);
 int VAR_12;
 int VAR_13;
 uint16 VAR_14;

restart:





 if (VAR_11->fp_nodes[0] < VAR_7)
  return -1;






 VAR_13 = VAR_11->fp_next_slot;
 if (VAR_13 < 0 || VAR_13 >= VAR_3)
  VAR_13 = 0;
 VAR_13 += VAR_5;
 VAR_12 = VAR_13;
 while (VAR_12 > 0)
 {
  if (VAR_11->fp_nodes[VAR_12] >= VAR_7)
   break;





  VAR_12 = FUNC_8(FUNC_9(VAR_12));
 }






 while (VAR_12 < VAR_5)
 {
  int VAR_15 = FUNC_7(VAR_12);

  if (VAR_15 < VAR_4 &&
   VAR_11->fp_nodes[VAR_15] >= VAR_7)
  {
   VAR_12 = VAR_15;
   continue;
  }
  VAR_15++;
  if (VAR_15 < VAR_4 &&
   VAR_11->fp_nodes[VAR_15] >= VAR_7)
  {
   VAR_12 = VAR_15;
  }
  else
  {
   RelFileNode VAR_16;
   ForkNumber VAR_17;
   BlockNumber VAR_18;

   FUNC_1(VAR_6, &VAR_16, &VAR_17, &VAR_18);
   FUNC_5(VAR_2, "fixing corrupt FSM block %u, relation %u/%u/%u",
     VAR_18, VAR_16.spcNode, VAR_16.dbNode, VAR_16.relNode);


   if (!VAR_9)
   {
    FUNC_2(VAR_6, VAR_1);
    FUNC_2(VAR_6, VAR_0);
    VAR_9 = 1;
   }
   FUNC_6(VAR_10);
   FUNC_3(VAR_6, 0);
   goto restart;
  }
 }


 VAR_14 = VAR_12 - VAR_5;
 VAR_11->fp_next_slot = VAR_14 + (VAR_8 ? 1 : 0);

 return VAR_14;
}
