
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32 ;
typedef int Relation ;
typedef scalar_t__ Bucket ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

Bucket
FUNC_1(Relation VAR_0, Bucket VAR_1,
           uint32 VAR_2, uint32 VAR_3)
{
 Bucket VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (VAR_4 > VAR_3)
 {
  VAR_2 = VAR_2 >> 1;
  VAR_4 = FUNC_0(VAR_1, VAR_2);
 }

 return VAR_4;
}
