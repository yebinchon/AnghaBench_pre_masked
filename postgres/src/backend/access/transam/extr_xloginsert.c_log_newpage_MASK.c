
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XLogRecPtr ;
typedef int RelFileNode ;
typedef int Page ;
typedef int ForkNumber ;
typedef int BlockNumber ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *,int ,int ,int ,int) ;

XLogRecPtr
FUNC_5(RelFileNode *VAR_4, ForkNumber VAR_5, BlockNumber VAR_6,
   Page VAR_7, bool VAR_8)
{
 int VAR_9;
 XLogRecPtr VAR_10;

 VAR_9 = VAR_0;
 if (VAR_8)
  VAR_9 |= VAR_1;

 FUNC_2();
 FUNC_4(0, VAR_4, VAR_5, VAR_6, VAR_7, VAR_9);
 VAR_10 = FUNC_3(VAR_2, VAR_3);





 if (!FUNC_0(VAR_7))
 {
  FUNC_1(VAR_7, VAR_10);
 }

 return VAR_10;
}
