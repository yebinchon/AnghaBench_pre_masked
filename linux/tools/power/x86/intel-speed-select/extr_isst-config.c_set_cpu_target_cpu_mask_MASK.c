
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,size_t,int ) ;
 size_t FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int * VAR_5 ;

__attribute__((used)) static void FUNC_3(void)
{
 size_t VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(&VAR_3);
 VAR_4 = VAR_6;
 for (VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7) {
  if (!FUNC_0(VAR_5[VAR_7], VAR_2,
     VAR_1))
   continue;

  FUNC_1(VAR_5[VAR_7], VAR_6, VAR_3);
 }
}
