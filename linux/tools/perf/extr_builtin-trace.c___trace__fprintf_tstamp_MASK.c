
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct trace {scalar_t__ base_time; } ;
typedef int FILE ;


 double VAR_0 ;
 size_t FUNC_0 (int *,char*,double) ;

__attribute__((used)) static size_t FUNC_1(struct trace *VAR_1, u64 VAR_2, FILE *VAR_3)
{
 double VAR_4 = (double)(VAR_2 - VAR_1->base_time) / VAR_0;

 return FUNC_0(VAR_3, "%10.3f ", VAR_4);
}
