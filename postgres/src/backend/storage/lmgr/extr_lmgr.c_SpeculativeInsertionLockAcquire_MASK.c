
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int TransactionId ;
typedef int LOCKTAG ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,int) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_1 ;

uint32
FUNC_2(TransactionId VAR_2)
{
 LOCKTAG VAR_3;

 VAR_1++;




 if (VAR_1 == 0)
  VAR_1 = 1;

 FUNC_1(VAR_3, VAR_2, VAR_1);

 (void) FUNC_0(&VAR_3, VAR_0, 0, 0);

 return VAR_1;
}
