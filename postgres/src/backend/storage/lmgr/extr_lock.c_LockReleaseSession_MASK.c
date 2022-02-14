
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LOCKMETHODID ;
typedef int LOCALLOCK ;
typedef int HASH_SEQ_STATUS ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;

void
FUNC_6(LOCKMETHODID VAR_3)
{
 HASH_SEQ_STATUS VAR_4;
 LOCALLOCK *VAR_5;

 if (VAR_3 <= 0 || VAR_3 >= FUNC_5(VAR_2))
  FUNC_2(VAR_0, "unrecognized lock method: %d", VAR_3);

 FUNC_3(&VAR_4, VAR_1);

 while ((VAR_5 = (LOCALLOCK *) FUNC_4(&VAR_4)) != ((void*)0))
 {

  if (FUNC_0(*VAR_5) != VAR_3)
   continue;

  FUNC_1(VAR_5, 1);
 }
}
