
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;





 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char**,char*) ;

__attribute__((used)) static int
FUNC_2(char *VAR_1, char *VAR_2, char *VAR_3, char *VAR_4,
     char *VAR_5, char *VAR_6)
{
 int VAR_7 = 128;
 int VAR_8 = 0;
 bool VAR_9 = 0;

 *VAR_2 = *VAR_3 = *VAR_4 = *VAR_5 = *VAR_6 = '\0';

 while (*VAR_1)
 {
  switch (VAR_7)
  {
   case 128:
    VAR_9 = FUNC_1(&VAR_1, VAR_2);
    VAR_7 = 131;
    break;
   case 131:
    VAR_9 = FUNC_1(&VAR_1, VAR_3);
    VAR_7 = 132;
    break;
   case 132:
    VAR_9 = FUNC_1(&VAR_1, VAR_4);
    VAR_7 = 129;
    break;
   case 129:
    VAR_9 = FUNC_1(&VAR_1, VAR_5);
    VAR_7 = 130;
    break;
   case 130:
    VAR_9 = FUNC_1(&VAR_1, VAR_6);
    VAR_7 = -1;
    break;
   default:
    FUNC_0(VAR_0, "unrecognized state in parse_ooaffentry: %d",
      VAR_7);
    break;
  }
  if (VAR_9)
   VAR_8++;
  else
   break;
  if (VAR_7 < 0)
   break;
 }

 return VAR_8;
}
