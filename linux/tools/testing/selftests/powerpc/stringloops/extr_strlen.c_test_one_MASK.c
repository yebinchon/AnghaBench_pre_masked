
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(char *VAR_1)
{
 unsigned long VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  int VAR_3, VAR_4;
  unsigned long VAR_5;

  VAR_4 = FUNC_1(VAR_1 + VAR_2);
  VAR_3 = FUNC_2(VAR_1 + VAR_2);

  if (VAR_3 != VAR_4) {
   FUNC_0("strlen() returned %d, should have returned %d (%p offset %ld)\n", VAR_3, VAR_4, VAR_1, VAR_2);

   for (VAR_5 = VAR_2; VAR_5 < VAR_0; VAR_5++)
    FUNC_0("%02x ", VAR_1[VAR_5]);
   FUNC_0("\n");
  }
 }
}
