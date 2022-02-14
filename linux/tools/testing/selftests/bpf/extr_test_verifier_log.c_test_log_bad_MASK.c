
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,size_t,int) ;

__attribute__((used)) static void FUNC_3(char *VAR_2, size_t VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);
 FUNC_1(VAR_5, VAR_0);
 if (VAR_2)
  FUNC_0(VAR_2, VAR_1,
      "verifier touched log with bad parameters\n");
}
