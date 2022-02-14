
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int StringInfo ;
typedef int Oid ;
typedef int FmgrInfo ;
typedef int Datum ;


 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int ,int *) ;

Datum
FUNC_2(Oid VAR_0, StringInfo VAR_1,
        Oid VAR_2, int32 VAR_3)
{
 FmgrInfo VAR_4;

 FUNC_1(VAR_0, &VAR_4);
 return FUNC_0(&VAR_4, VAR_1, VAR_2, VAR_3);
}
