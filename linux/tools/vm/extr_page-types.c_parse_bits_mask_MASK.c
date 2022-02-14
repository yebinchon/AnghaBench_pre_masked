
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char const*,int) ;
 char* FUNC_2 (char const*,char) ;

__attribute__((used)) static void FUNC_3(const char *VAR_1)
{
 uint64_t VAR_2;
 uint64_t VAR_3;
 const char *VAR_4;

 VAR_4 = FUNC_2(VAR_1, '=');
 if (VAR_4 == VAR_1) {
  VAR_2 = VAR_0;
  VAR_3 = FUNC_1(VAR_4 + 1, 0);
 } else if (VAR_4) {
  VAR_2 = FUNC_1(VAR_1, 0);
  VAR_3 = FUNC_1(VAR_4 + 1, 0);
 } else if (FUNC_2(VAR_1, '~')) {
  VAR_2 = FUNC_1(VAR_1, 1);
  VAR_3 = FUNC_1(VAR_1, 0);
 } else {
  VAR_2 = FUNC_1(VAR_1, 0);
  VAR_3 = VAR_0;
 }

 FUNC_0(VAR_2, VAR_3);
}
