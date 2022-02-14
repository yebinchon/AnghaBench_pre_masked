
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int sockopt ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int ,int ,int*,int*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(int VAR_2, uint16_t *VAR_3, uint16_t *VAR_4)
{
 int VAR_5;
 socklen_t VAR_6 = sizeof(VAR_5);

 if (FUNC_1(VAR_2, VAR_1, VAR_0,
         &VAR_5, &VAR_6)) {
  FUNC_2("failed to getsockopt");
  FUNC_0(1);
 }
 *VAR_3 = VAR_5 >> 16;
 *VAR_4 = VAR_5 & 0xfffff;
}
