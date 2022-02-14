
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int time_t ;
struct xtm {unsigned int second; unsigned int minute; unsigned int hour; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static inline unsigned int FUNC_0(struct xtm *VAR_1, time_t VAR_2)
{
 unsigned int VAR_3, VAR_4;


 VAR_3 = VAR_2 % VAR_0;
 VAR_1->second = VAR_3 % 60;
 VAR_4 = VAR_3 / 60;
 VAR_1->minute = VAR_4 % 60;
 VAR_1->hour = VAR_4 / 60;
 return VAR_3;
}
