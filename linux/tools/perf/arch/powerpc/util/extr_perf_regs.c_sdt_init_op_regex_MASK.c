
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(void)
{
 static int VAR_5;
 int VAR_6 = 0;

 if (VAR_5)
  return 0;

 VAR_6 = FUNC_1(&VAR_3, VAR_1, VAR_0);
 if (VAR_6)
  goto error;

 VAR_6 = FUNC_1(&VAR_4, VAR_2, VAR_0);
 if (VAR_6)
  goto free_regex1;

 VAR_5 = 1;
 return 0;

free_regex1:
 FUNC_2(&VAR_3);
error:
 FUNC_0("Regex compilation error.\n");
 return VAR_6;
}
