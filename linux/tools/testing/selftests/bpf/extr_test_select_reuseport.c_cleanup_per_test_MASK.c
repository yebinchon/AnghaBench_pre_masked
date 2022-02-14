
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,char*,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  FUNC_2(VAR_5[VAR_6]);
 FUNC_2(VAR_1);

 VAR_7 = FUNC_1(VAR_4, &VAR_3);
 FUNC_0(VAR_7 == -1, "delete_elem(outer_map)",
       "err:%d errno:%d\n", VAR_7, VAR_2);
}
