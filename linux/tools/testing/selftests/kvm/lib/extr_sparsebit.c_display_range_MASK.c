
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sparsebit_idx_t ;
typedef int FILE ;


 size_t FUNC_0 (int *,char*,int ,int ) ;
 size_t FUNC_1 (int *,int ,char*,int ,int ) ;

__attribute__((used)) static size_t FUNC_2(FILE *VAR_0, sparsebit_idx_t VAR_1,
 sparsebit_idx_t VAR_2, bool VAR_3)
{
 char *VAR_4;
 size_t VAR_5;


 if (VAR_1 == VAR_2)
  VAR_4 = VAR_3 ? ", 0x%lx" : "0x%lx";
 else
  VAR_4 = VAR_3 ? ", 0x%lx:0x%lx" : "0x%lx:0x%lx";





 if (!VAR_0)
  VAR_5 = FUNC_1(((void*)0), 0, VAR_4, VAR_1, VAR_2);
 else
  VAR_5 = FUNC_0(VAR_0, VAR_4, VAR_1, VAR_2);

 return VAR_5;
}
