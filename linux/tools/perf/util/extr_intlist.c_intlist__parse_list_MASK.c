
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intlist {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct intlist*,long) ;
 long FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_2(struct intlist *VAR_1, const char *VAR_2)
{
 char *VAR_3;
 int VAR_4;

 do {
  long VAR_5 = FUNC_1(VAR_2, &VAR_3, 10);
  VAR_4 = -VAR_0;
  if (*VAR_3 != ',' && *VAR_3 != '\0')
   break;
  VAR_4 = FUNC_0(VAR_1, VAR_5);
  if (VAR_4)
   break;
  VAR_2 = VAR_3 + 1;
 } while (*VAR_3 != '\0');

 return VAR_4;
}
