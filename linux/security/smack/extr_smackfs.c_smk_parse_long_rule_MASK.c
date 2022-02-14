
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smack_parsed_rule {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,char*,char*,char*,struct smack_parsed_rule*,int,int ) ;

__attribute__((used)) static ssize_t FUNC_2(char *VAR_1, struct smack_parsed_rule *VAR_2,
    int VAR_3, int VAR_4)
{
 ssize_t VAR_5 = 0;
 char *VAR_6[4];
 int VAR_7;
 int VAR_8;




 for (VAR_8 = 0; VAR_8 < VAR_4; ++VAR_8) {
  while (FUNC_0(VAR_1[VAR_5]))
   VAR_1[VAR_5++] = '\0';

  if (VAR_1[VAR_5] == '\0')

   return -VAR_0;

  VAR_6[VAR_8] = VAR_1 + VAR_5;

  while (VAR_1[VAR_5] && !FUNC_0(VAR_1[VAR_5]))
   ++VAR_5;
 }
 while (FUNC_0(VAR_1[VAR_5]))
  VAR_1[VAR_5++] = '\0';

 while (VAR_8 < 4)
  VAR_6[VAR_8++] = ((void*)0);

 VAR_7 = FUNC_1(VAR_6[0], VAR_6[1], VAR_6[2], VAR_6[3], VAR_2, VAR_3, 0);
 return VAR_7 == 0 ? VAR_5 : VAR_7;
}
