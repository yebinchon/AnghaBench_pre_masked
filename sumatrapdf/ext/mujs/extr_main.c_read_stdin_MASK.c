
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (char*,int,int,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static char *FUNC_5(void)
{
 int VAR_2 = 0;
 int VAR_3 = 512;
 char *VAR_4 = ((void*)0);

 for (;;) {
  char *VAR_5 = FUNC_4(VAR_4, VAR_3);
  if (!VAR_5) {
   FUNC_3(VAR_4);
   FUNC_1(VAR_0, "cannot allocate storage for stdin contents\n");
   return ((void*)0);
  }
  VAR_4 = VAR_5;
  VAR_2 += FUNC_2(VAR_4 + VAR_2, 1, VAR_3 - VAR_2 - 1, VAR_1);
  if (VAR_2 < VAR_3 - 1)
   break;
  VAR_3 *= 2;
 }

 if (FUNC_0(VAR_1)) {
  FUNC_3(VAR_4);
  FUNC_1(VAR_0, "error reading stdin\n");
  return ((void*)0);
 }

 VAR_4[VAR_2] = 0;
 return VAR_4;
}
