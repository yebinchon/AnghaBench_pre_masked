
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char*,char*,int,int ) ;
 int FUNC_1 (int ,int *,int*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,unsigned short,int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(int VAR_4, unsigned short VAR_5, bool VAR_6)
{
 int VAR_7 = -1, VAR_8;

 FUNC_2(VAR_4, VAR_5, VAR_6);
 VAR_8 = FUNC_1(VAR_3, &VAR_2, &VAR_7,
      VAR_0);
 FUNC_0(VAR_8 == -1, "update_elem(tmp_index_ovr_map, 0, -1)",
       "err:%d errno:%d\n", VAR_8, VAR_1);
}
