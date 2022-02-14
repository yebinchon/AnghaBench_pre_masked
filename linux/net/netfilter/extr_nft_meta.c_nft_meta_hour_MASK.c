
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tm {int tm_hour; int tm_min; scalar_t__ tm_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,int ,struct tm*) ;

__attribute__((used)) static u32 FUNC_1(unsigned long VAR_2)
{
 struct tm VAR_3;

 FUNC_0(VAR_2, 0, &VAR_3);

 return VAR_3.tm_hour * VAR_0
  + VAR_3.tm_min * VAR_1
  + VAR_3.tm_sec;
}
