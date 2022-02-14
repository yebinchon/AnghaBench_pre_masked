
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Oid ;
typedef int ArchiveHandle ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(ArchiveHandle *VAR_0, bool VAR_1)
{
 Oid VAR_2;

 FUNC_4(VAR_0);

 VAR_2 = FUNC_2(VAR_0);
 while (VAR_2 != 0)
 {
  FUNC_3(VAR_0, VAR_2, VAR_1);
  FUNC_5(VAR_0);
  FUNC_0(VAR_0, VAR_2);
  VAR_2 = FUNC_2(VAR_0);
 }

 FUNC_1(VAR_0);
}
