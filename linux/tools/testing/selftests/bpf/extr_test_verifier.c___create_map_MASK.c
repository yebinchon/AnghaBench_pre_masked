
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(uint32_t VAR_3, uint32_t VAR_4,
   uint32_t VAR_5, uint32_t VAR_6,
   uint32_t VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6,
       (VAR_3 == VAR_1 ?
        VAR_0 : 0) | VAR_7);
 if (VAR_8 < 0) {
  if (FUNC_2(VAR_3))
   return -1;
  FUNC_1("Failed to create hash map '%s'!\n", FUNC_3(VAR_2));
 }

 return VAR_8;
}
