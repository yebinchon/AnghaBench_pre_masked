
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TableScanDesc ;
typedef int Relation ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static bool
FUNC_5(void)
{
 Relation VAR_3;
 TableScanDesc VAR_4;
 bool VAR_5;

 VAR_3 = FUNC_4(VAR_1, VAR_0);

 VAR_4 = FUNC_1(VAR_3, 0, ((void*)0));
 VAR_5 = (FUNC_0(VAR_4, VAR_2) != ((void*)0));

 FUNC_3(VAR_4);
 FUNC_2(VAR_3, VAR_0);

 return VAR_5;
}
