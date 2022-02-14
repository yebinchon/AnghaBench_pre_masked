
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rm_eo; int rm_so; } ;
typedef TYPE_1__ regmatch_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int *,char*,int,TYPE_1__*,int ) ;
 int FUNC_2 (char*,int,char*,char,...) ;
 int FUNC_3 () ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_4 (int) ;

int FUNC_5(char *VAR_5, char **VAR_6)
{
 int VAR_7, VAR_8;
 regmatch_t VAR_9[5];
 char VAR_10;


 if (VAR_5[0] == 'i') {
  FUNC_0("Skipping unsupported SDT argument: %s\n", VAR_5);
  return VAR_1;
 }

 VAR_7 = FUNC_3();
 if (VAR_7 < 0)
  return VAR_7;

 if (!FUNC_1(&VAR_3, VAR_5, 3, VAR_9, 0)) {


  VAR_8 = 5;
  VAR_8 += (int)(VAR_9[2].rm_eo - VAR_9[2].rm_so);

  *VAR_6 = FUNC_4(VAR_8);
  if (!*VAR_6)
   return -VAR_0;

  FUNC_2(*VAR_6, VAR_8, "%%gpr%.*s",
   (int)(VAR_9[2].rm_eo - VAR_9[2].rm_so), VAR_5 + VAR_9[2].rm_so);
 } else if (!FUNC_1(&VAR_4, VAR_5, 5, VAR_9, 0)) {




  VAR_10 = (VAR_9[1].rm_so == -1) ? '+' : '-';

  VAR_8 = 8;
  VAR_8 += (int)(VAR_9[2].rm_eo - VAR_9[2].rm_so);
  VAR_8 += (int)(VAR_9[4].rm_eo - VAR_9[4].rm_so);

  *VAR_6 = FUNC_4(VAR_8);
  if (!*VAR_6)
   return -VAR_0;

  FUNC_2(*VAR_6, VAR_8, "%c%.*s(%%gpr%.*s)", VAR_10,
   (int)(VAR_9[2].rm_eo - VAR_9[2].rm_so), VAR_5 + VAR_9[2].rm_so,
   (int)(VAR_9[4].rm_eo - VAR_9[4].rm_so), VAR_5 + VAR_9[4].rm_so);
 } else {
  FUNC_0("Skipping unsupported SDT argument: %s\n", VAR_5);
  return VAR_1;
 }

 return VAR_2;
}
