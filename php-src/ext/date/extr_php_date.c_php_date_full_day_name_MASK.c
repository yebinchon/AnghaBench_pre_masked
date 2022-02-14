
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t timelib_sll ;


 char const** VAR_0 ;
 size_t FUNC_0 (size_t,size_t,size_t) ;

__attribute__((used)) static const char *FUNC_1(timelib_sll VAR_1, timelib_sll VAR_2, timelib_sll VAR_3)
{
 timelib_sll VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_4 < 0) {
  return "Unknown";
 }
 return VAR_0[VAR_4];
}
