
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int Relation ;
typedef int HashMetaPage ;
typedef int Buffer ;
typedef int Bucket ;
typedef int BlockNumber ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;

BlockNumber
FUNC_6(Relation VAR_3, Bucket VAR_4)
{
 Bucket VAR_5;
 uint32 VAR_6;
 Buffer VAR_7;
 HashMetaPage VAR_8;
 BlockNumber VAR_9;
 VAR_6 = (((uint32) 1) << (FUNC_5(VAR_4) - 1)) - 1;
 VAR_5 = VAR_4 & VAR_6;

 VAR_7 = FUNC_3(VAR_3, VAR_0, VAR_1, VAR_2);
 VAR_8 = FUNC_2(FUNC_1(VAR_7));

 VAR_9 = FUNC_0(VAR_8, VAR_5);

 FUNC_4(VAR_3, VAR_7);

 return VAR_9;
}
