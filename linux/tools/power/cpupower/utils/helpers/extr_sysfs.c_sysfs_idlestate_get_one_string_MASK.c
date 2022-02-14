
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int linebuf ;
typedef enum idlestate_string { ____Placeholder_idlestate_string } idlestate_string ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 unsigned int FUNC_2 (unsigned int,unsigned int,int ,char*,int) ;

__attribute__((used)) static char *FUNC_3(unsigned int VAR_3,
     unsigned int VAR_4,
     enum idlestate_string VAR_5)
{
 char VAR_6[VAR_1];
 char *VAR_7;
 unsigned int VAR_8;

 if (VAR_5 >= VAR_0)
  return ((void*)0);

 VAR_8 = FUNC_2(VAR_3, VAR_4,
     VAR_2[VAR_5],
     VAR_6, sizeof(VAR_6));
 if (VAR_8 == 0)
  return ((void*)0);

 VAR_7 = FUNC_0(VAR_6);
 if (VAR_7 == ((void*)0))
  return ((void*)0);

 if (VAR_7[FUNC_1(VAR_7) - 1] == '\n')
  VAR_7[FUNC_1(VAR_7) - 1] = '\0';

 return VAR_7;
}
