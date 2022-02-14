
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int16 ;
typedef int Oid ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int *,int *,scalar_t__*) ;

Oid
FUNC_2(Oid VAR_3, bool *VAR_4)
{
 Oid VAR_5 = VAR_2;
 Oid VAR_6;
 Oid VAR_7;
 int16 VAR_8;


 if (FUNC_1(VAR_3,
           &VAR_6, &VAR_7, &VAR_8))
 {

  VAR_5 = FUNC_0(VAR_6,
          VAR_7,
          VAR_7,
          VAR_0);
  if (VAR_4)
   *VAR_4 = (VAR_8 == VAR_1);
 }

 return VAR_5;
}
