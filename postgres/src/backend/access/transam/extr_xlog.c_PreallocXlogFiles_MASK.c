
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
typedef scalar_t__ uint32 ;
typedef int XLogSegNo ;
typedef scalar_t__ XLogRecPtr ;
struct TYPE_2__ {int ckpt_segs_added; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (scalar_t__,int ,double) ;
 int FUNC_1 (int ,int*,int) ;
 scalar_t__ FUNC_2 (scalar_t__,double) ;
 int FUNC_3 (int) ;
 double VAR_1 ;

__attribute__((used)) static void
FUNC_4(XLogRecPtr VAR_2)
{
 XLogSegNo VAR_3;
 int VAR_4;
 bool VAR_5;
 uint64 VAR_6;

 FUNC_0(VAR_2, VAR_3, VAR_1);
 VAR_6 = FUNC_2(VAR_2 - 1, VAR_1);
 if (VAR_6 >= (uint32) (0.75 * VAR_1))
 {
  VAR_3++;
  VAR_5 = 1;
  VAR_4 = FUNC_1(VAR_3, &VAR_5, 1);
  FUNC_3(VAR_4);
  if (!VAR_5)
   VAR_0.ckpt_segs_added++;
 }
}
