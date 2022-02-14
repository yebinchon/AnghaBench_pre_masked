
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t FUNC_2 (int,int *) ;
 int FUNC_3 (int ,int ,int *,int *,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static bool FUNC_5(void)
{
 int VAR_6;
 size_t VAR_7;

 if (!VAR_5)
  return VAR_0;

 VAR_6 = FUNC_1();
 if (VAR_6 == -1)
  return VAR_0;

 VAR_7 = FUNC_2(VAR_6, ((void*)0));

 FUNC_0(VAR_6);
 if (VAR_7 && VAR_7 == VAR_5)
  FUNC_3(VAR_4, VAR_3, ((void*)0), ((void*)0), VAR_1);
 FUNC_4(VAR_3);

 return VAR_2;
}
