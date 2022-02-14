
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hdsp {unsigned int dds_value; int system_sample_rate; } ;


 int VAR_0 ;
 int FUNC_0 (int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct hdsp *VAR_1)
{
 u64 VAR_2;
 unsigned int VAR_3 = VAR_1->dds_value;
 int VAR_4 = VAR_1->system_sample_rate;

 if (!VAR_3)
  return 0;

 VAR_2 = VAR_0;




 VAR_2 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4 >= 112000)
  VAR_2 *= 4;
 else if (VAR_4 >= 56000)
  VAR_2 *= 2;
 return ((int)VAR_2) - VAR_4;
}
