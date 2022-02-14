
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ima_template_field {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ima_template_field** FUNC_0 (int,int,int ) ;
 struct ima_template_field* FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char*,...) ;
 char const* FUNC_4 (char const*,char) ;
 int FUNC_5 (char const*) ;

int FUNC_6(const char *VAR_6,
         const struct ima_template_field ***VAR_7,
         int *VAR_8)
{
 const char *VAR_9;
 const struct ima_template_field *VAR_10[VAR_5];
 int VAR_11;
 int VAR_12, VAR_13;

 if (VAR_8 && *VAR_8 > 0)
  return 0;

 VAR_11 = FUNC_5(VAR_6);

 if (VAR_11 > VAR_5) {
  FUNC_3("format string '%s' contains too many fields\n",
         VAR_6);
  return -VAR_0;
 }

 for (VAR_12 = 0, VAR_9 = VAR_6; VAR_12 < VAR_11;
      VAR_12++, VAR_9 += VAR_13 + 1) {
  char VAR_14[VAR_4 + 1];

  VAR_13 = FUNC_4(VAR_9, '|') - VAR_9;
  if (VAR_13 == 0 || VAR_13 > VAR_4) {
   FUNC_3("Invalid field with length %d\n", VAR_13);
   return -VAR_0;
  }

  FUNC_2(VAR_14, VAR_9, VAR_13);
  VAR_14[VAR_13] = '\0';
  VAR_10[VAR_12] = FUNC_1(VAR_14);
  if (!VAR_10[VAR_12]) {
   FUNC_3("field '%s' not found\n", VAR_14);
   return -VAR_1;
  }
 }

 if (VAR_7 && VAR_8) {
  *VAR_7 = FUNC_0(VAR_12, sizeof(*VAR_7), VAR_3);
  if (*VAR_7 == ((void*)0))
   return -VAR_2;

  FUNC_2(*VAR_7, VAR_10, VAR_12 * sizeof(*VAR_7));
  *VAR_8 = VAR_12;
 }

 return 0;
}
