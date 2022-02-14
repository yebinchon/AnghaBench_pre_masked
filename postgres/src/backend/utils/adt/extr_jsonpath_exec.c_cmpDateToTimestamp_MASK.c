
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TimestampTz ;
typedef int Timestamp ;
typedef int DateADT ;


 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ,int*) ;

__attribute__((used)) static int
FUNC_2(DateADT VAR_0, Timestamp VAR_1, bool VAR_2)
{
 TimestampTz VAR_3;
 int VAR_4 = 0;

 VAR_3 = FUNC_1(VAR_0, &VAR_4);

 return FUNC_0(VAR_3, VAR_4, VAR_1);
}
