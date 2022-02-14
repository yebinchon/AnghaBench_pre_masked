
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vxidstr ;
typedef int LocalTransactionId ;
typedef int Datum ;
typedef int BackendId ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char*,int,int) ;

__attribute__((used)) static Datum
FUNC_2(BackendId VAR_0, LocalTransactionId VAR_1)
{




 char VAR_2[32];

 FUNC_1(VAR_2, sizeof(VAR_2), "%d/%u", VAR_0, VAR_1);

 return FUNC_0(VAR_2);
}
