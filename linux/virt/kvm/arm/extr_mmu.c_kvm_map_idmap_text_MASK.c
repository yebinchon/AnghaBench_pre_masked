
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pgd_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_4(pgd_t *VAR_3)
{
 int VAR_4;


 VAR_4 = FUNC_0(VAR_3, FUNC_1(),
          VAR_2, VAR_1,
          FUNC_2(VAR_2),
          VAR_0);
 if (VAR_4)
  FUNC_3("Failed to idmap %lx-%lx\n",
   VAR_2, VAR_1);

 return VAR_4;
}
