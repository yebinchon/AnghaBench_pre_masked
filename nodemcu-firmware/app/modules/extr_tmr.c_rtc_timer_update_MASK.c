
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) inline static uint64_t FUNC_3(bool VAR_3){
 if (VAR_3 || VAR_2==0)
  VAR_2=FUNC_2();

 uint32_t VAR_4 = FUNC_1();
 uint32_t VAR_5=VAR_4-VAR_0;
 uint32_t VAR_6=FUNC_0(VAR_5);
 uint64_t VAR_7=VAR_1+VAR_6;



 if (VAR_6>=100000)
 {
  VAR_0=VAR_4;
  VAR_1=VAR_7;
 }
 return VAR_7;
}
