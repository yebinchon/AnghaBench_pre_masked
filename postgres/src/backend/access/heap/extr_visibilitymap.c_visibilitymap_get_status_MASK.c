
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef size_t uint32 ;
typedef int Relation ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 size_t FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_1 ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 char VAR_2 ;
 int FUNC_9 (int ,char*,int ,scalar_t__) ;
 int FUNC_10 (int ,scalar_t__,int) ;

uint8
FUNC_11(Relation VAR_3, BlockNumber VAR_4, Buffer *VAR_5)
{
 BlockNumber VAR_6 = FUNC_3(VAR_4);
 uint32 VAR_7 = FUNC_4(VAR_4);
 uint8 VAR_8 = FUNC_5(VAR_4);
 char *VAR_9;
 uint8 VAR_10;






 if (FUNC_2(*VAR_5))
 {
  if (FUNC_0(*VAR_5) != VAR_6)
  {
   FUNC_8(*VAR_5);
   *VAR_5 = VAR_1;
  }
 }

 if (!FUNC_2(*VAR_5))
 {
  *VAR_5 = FUNC_10(VAR_3, VAR_6, 0);
  if (!FUNC_2(*VAR_5))
   return 0;
 }

 VAR_9 = FUNC_6(FUNC_1(*VAR_5));






 VAR_10 = ((VAR_9[VAR_7] >> VAR_8) & VAR_2);
 return VAR_10;
}
