
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bt_ctf_field {int dummy; } ;
typedef int string ;
typedef int numstr ;


 int FUNC_0 (struct bt_ctf_field*,char const*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char*,int,char*,unsigned int) ;
 size_t FUNC_6 (char const*) ;
 int FUNC_7 (char*,char const*,size_t) ;
 char* FUNC_8 (size_t) ;

__attribute__((used)) static int FUNC_9(struct bt_ctf_field *VAR_0, const char *VAR_1)
{
 char *VAR_2 = ((void*)0);
 size_t VAR_3 = FUNC_6(VAR_1), VAR_4, VAR_5;
 int VAR_6;

 for (VAR_4 = VAR_5 = 0; VAR_4 < VAR_3; VAR_4++, VAR_5++) {
  if (FUNC_2(VAR_1[VAR_4])) {
   if (!VAR_2)
    continue;
   VAR_2[VAR_5] = VAR_1[VAR_4];
  } else {
   char VAR_7[5];

   FUNC_5(VAR_7, sizeof(VAR_7), "\\x%02x",
     (unsigned int)(VAR_1[VAR_4]) & 0xff);

   if (!VAR_2) {
    VAR_2 = FUNC_8(VAR_4 + (VAR_3 - VAR_4) * 4 + 2);
    if (!VAR_2) {
     FUNC_4("failed to set unprintable string '%s'\n", VAR_1);
     return FUNC_0(VAR_0, "UNPRINTABLE-STRING");
    }
    if (VAR_4 > 0)
     FUNC_7(VAR_2, VAR_1, VAR_4);
   }
   FUNC_3(VAR_2 + VAR_5, VAR_7, 4);
   VAR_5 += 3;
  }
 }

 if (!VAR_2)
  return FUNC_0(VAR_0, VAR_1);
 VAR_6 = FUNC_0(VAR_0, VAR_2);
 FUNC_1(VAR_2);
 return VAR_6;
}
