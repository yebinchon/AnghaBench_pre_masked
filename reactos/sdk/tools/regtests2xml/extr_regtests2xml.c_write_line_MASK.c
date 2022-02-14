
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (char*,int,size_t,int ) ;
 int FUNC_1 (char*,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (char*,char*) ;
 size_t FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(char *VAR_1)
{
  char VAR_2[200];

  FUNC_1(VAR_2, 0, sizeof(VAR_2));
  FUNC_2(VAR_2, VAR_1);

  VAR_2[FUNC_3(VAR_2)] = '\r';
  VAR_2[FUNC_3(VAR_2)] = '\n';

  (void)FUNC_0(&VAR_2[0], 1, FUNC_3(VAR_2), VAR_0);
}
