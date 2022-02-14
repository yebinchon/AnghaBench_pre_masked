
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Oid ;
typedef int FmgrInfo ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (scalar_t__,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;

void
FUNC_6(int VAR_1,
       const Oid *VAR_2,
       Oid **VAR_3,
       FmgrInfo **VAR_4)
{
 int VAR_5;

 *VAR_3 = (Oid *) FUNC_5(VAR_1 * sizeof(Oid));
 *VAR_4 = (FmgrInfo *) FUNC_5(VAR_1 * sizeof(FmgrInfo));

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
 {
  Oid VAR_6 = VAR_2[VAR_5];
  Oid VAR_7;
  Oid VAR_8;
  Oid VAR_9;

  VAR_7 = FUNC_4(VAR_6);
  if (!FUNC_3(VAR_6,
           &VAR_8, &VAR_9))
   FUNC_1(VAR_0, "could not find hash function for hash operator %u",
     VAR_6);

  FUNC_0(VAR_8 == VAR_9);
  (*VAR_3)[VAR_5] = VAR_7;
  FUNC_2(VAR_9, &(*VAR_4)[VAR_5]);
 }
}
