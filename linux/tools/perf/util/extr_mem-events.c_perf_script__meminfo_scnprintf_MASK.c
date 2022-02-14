
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_info {int dummy; } ;


 scalar_t__ FUNC_0 (char*,size_t,struct mem_info*) ;
 scalar_t__ FUNC_1 (char*,size_t,struct mem_info*) ;
 scalar_t__ FUNC_2 (char*,size_t,struct mem_info*) ;
 scalar_t__ FUNC_3 (char*,size_t,struct mem_info*) ;
 scalar_t__ FUNC_4 (char*,size_t,char*) ;

int FUNC_5(char *VAR_0, size_t VAR_1, struct mem_info *VAR_2)
{
 int VAR_3 = 0;

 VAR_3 += FUNC_1(VAR_0, VAR_1, VAR_2);
 VAR_3 += FUNC_4(VAR_0 + VAR_3, VAR_1 - VAR_3, "|SNP ");
 VAR_3 += FUNC_2(VAR_0 + VAR_3, VAR_1 - VAR_3, VAR_2);
 VAR_3 += FUNC_4(VAR_0 + VAR_3, VAR_1 - VAR_3, "|TLB ");
 VAR_3 += FUNC_3(VAR_0 + VAR_3, VAR_1 - VAR_3, VAR_2);
 VAR_3 += FUNC_4(VAR_0 + VAR_3, VAR_1 - VAR_3, "|LCK ");
 VAR_3 += FUNC_0(VAR_0 + VAR_3, VAR_1 - VAR_3, VAR_2);

 return VAR_3;
}
