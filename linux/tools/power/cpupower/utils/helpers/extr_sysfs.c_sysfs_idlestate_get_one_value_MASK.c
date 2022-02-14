
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int linebuf ;
typedef enum idlestate_value { ____Placeholder_idlestate_value } idlestate_value ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 unsigned long long FUNC_0 (char*,char**,int ) ;
 unsigned int FUNC_1 (unsigned int,unsigned int,int ,char*,int) ;

__attribute__((used)) static unsigned long long FUNC_2(unsigned int VAR_5,
           unsigned int VAR_6,
           enum idlestate_value VAR_7)
{
 unsigned long long VAR_8;
 unsigned int VAR_9;
 char VAR_10[VAR_2];
 char *VAR_11;

 if (VAR_7 >= VAR_1)
  return 0;

 VAR_9 = FUNC_1(VAR_5, VAR_6,
     VAR_4[VAR_7],
     VAR_10, sizeof(VAR_10));
 if (VAR_9 == 0)
  return 0;

 VAR_8 = FUNC_0(VAR_10, &VAR_11, 0);

 if (VAR_11 == VAR_10 || VAR_3 == VAR_0)
  return 0;

 return VAR_8;
}
