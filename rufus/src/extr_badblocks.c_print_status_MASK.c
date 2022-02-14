
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,int ,int,int,float,int ,int ,int ) ;
 int FUNC_1 (int ,int) ;
 float FUNC_2 (unsigned long,unsigned long) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_4(void)
{
 float VAR_13;

 VAR_13 = FUNC_2((unsigned long) VAR_7,
     (unsigned long) VAR_9);
 FUNC_0(0, VAR_1, FUNC_3(VAR_0 + ((VAR_5==VAR_4)?0:1)),
    VAR_6, VAR_8,
    VAR_13,
    VAR_11,
    VAR_12,
    VAR_10);
 VAR_13 = (VAR_13/2.0f) + ((VAR_5==VAR_3)? 50.0f : 0.0f);
 FUNC_1(VAR_2, (((VAR_6-1)*100.0f) + VAR_13) / VAR_8);
}
