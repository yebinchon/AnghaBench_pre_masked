
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SMgrRelation ;
typedef int RelFileNode ;
typedef int ReadBufferMode ;
typedef int ForkNumber ;
typedef int BufferAccessStrategy ;
typedef int Buffer ;
typedef int BlockNumber ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int*) ;
 int FUNC_2 (int ,int ) ;

Buffer
FUNC_3(RelFileNode VAR_3, ForkNumber VAR_4,
        BlockNumber VAR_5, ReadBufferMode VAR_6,
        BufferAccessStrategy VAR_7)
{
 bool VAR_8;

 SMgrRelation VAR_9 = FUNC_2(VAR_3, VAR_1);

 FUNC_0(VAR_0);

 return FUNC_1(VAR_9, VAR_2, VAR_4, VAR_5,
        VAR_6, VAR_7, &VAR_8);
}
