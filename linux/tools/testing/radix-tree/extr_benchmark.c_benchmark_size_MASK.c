
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,unsigned long,unsigned long) ;
 int FUNC_2 (int *,unsigned long,unsigned long) ;
 long long FUNC_3 (int *,int) ;
 int FUNC_4 (int *,unsigned long,unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,char*,unsigned long,unsigned long,long long) ;
 int FUNC_7 () ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_8(unsigned long VAR_2, unsigned long VAR_3)
{
 FUNC_0(VAR_1, VAR_0);
 long long VAR_4, VAR_5;

 FUNC_2(&VAR_1, VAR_2, VAR_3);
 FUNC_4(&VAR_1, VAR_2, VAR_3);

 VAR_5 = FUNC_3(&VAR_1, 1);
 VAR_4 = FUNC_3(&VAR_1, 0);

 FUNC_6(2, "Size: %8ld, step: %8ld, tagged iteration: %8lld ns\n",
  VAR_2, VAR_3, VAR_5);
 FUNC_6(2, "Size: %8ld, step: %8ld, normal iteration: %8lld ns\n",
  VAR_2, VAR_3, VAR_4);

 FUNC_1(&VAR_1, VAR_2, VAR_3);

 FUNC_5(&VAR_1);
 FUNC_7();
}
