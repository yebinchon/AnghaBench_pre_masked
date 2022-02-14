
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XLogRecPtr ;
typedef int RelFileNode ;
typedef int Page ;
typedef int ForkNumber ;
typedef int Buffer ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int *,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int *,int ,int ,int ,int) ;

XLogRecPtr
FUNC_4(Buffer VAR_1, bool VAR_2)
{
 Page VAR_3 = FUNC_1(VAR_1);
 RelFileNode VAR_4;
 ForkNumber VAR_5;
 BlockNumber VAR_6;


 FUNC_0(VAR_0 > 0);

 FUNC_2(VAR_1, &VAR_4, &VAR_5, &VAR_6);

 return FUNC_3(&VAR_4, VAR_5, VAR_6, VAR_3, VAR_2);
}
