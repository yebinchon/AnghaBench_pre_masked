
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,int ,...) ;
 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 char** VAR_3 ;
 int FUNC_1 (char*,char*,...) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_4,
   void *VAR_5, char *VAR_6)
{
 FUNC_0(VAR_5, VAR_0, VAR_3);
 FUNC_0(VAR_5, VAR_0, VAR_1);
 FUNC_0(VAR_5, VAR_0, VAR_2);

 if (VAR_3 && FUNC_2((const char *)*VAR_3))
  FUNC_1(VAR_6, "acpi*:%s:*", *VAR_3);
 else if (VAR_1) {
  int VAR_7, VAR_8, VAR_9 = 0;
  unsigned int VAR_10;

  FUNC_1(&VAR_6[VAR_9], "acpi*:");
  VAR_9 = 6;
  for (VAR_7 = 1; VAR_7 <= 3; VAR_7++) {
   VAR_8 = 8 * (3-VAR_7);
   VAR_10 = (*VAR_2 >> VAR_8) & 0xFF;
   if (VAR_10)
    FUNC_1(&VAR_6[VAR_9], "%02x",
     (*VAR_1 >> VAR_8) & 0xFF);
   else
    FUNC_1(&VAR_6[VAR_9], "??");
   VAR_9 += 2;
  }
  FUNC_1(&VAR_6[VAR_9], ":*");
 }
 return 1;
}
