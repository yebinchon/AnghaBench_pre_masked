
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 int VAR_9 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,char*,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static bool FUNC_6(void)
{
 FUNC_4(VAR_6, VAR_0, "nnn-pipe.%d", FUNC_0());

 VAR_8[VAR_9 - 1] = '\0';
 FUNC_2(VAR_8, VAR_6, VAR_7);
 FUNC_5(VAR_7);
 if (FUNC_1(VAR_7, 0600) != 0)
  return VAR_3;

 FUNC_3(VAR_5[VAR_1], VAR_7, VAR_2);

 return VAR_4;
}
