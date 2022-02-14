
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct WSErrorEntry {scalar_t__ error; scalar_t__ description; } ;
typedef scalar_t__ DWORD ;


 struct WSErrorEntry* VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(DWORD VAR_1, char *VAR_2)
{
 struct WSErrorEntry *VAR_3;

 for (VAR_3 = VAR_0; VAR_3->description; VAR_3++)
 {
  if (VAR_3->error == VAR_1)
  {
   FUNC_0(VAR_2, VAR_3->description);
   return 1;
  }
 }
 return 0;
}
