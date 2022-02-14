
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char const*,int,int ) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;

void FUNC_7(const char *VAR_6)
{
 ssize_t VAR_7 = FUNC_3(VAR_6);
 ssize_t VAR_8;

 FUNC_4(VAR_3);

 do {
  VAR_8 = FUNC_2(VAR_4, VAR_6, VAR_7, VAR_2);
  FUNC_5("send");
 } while (VAR_8 < 0 && VAR_5 == VAR_0);

 if (VAR_8 != VAR_7) {
  FUNC_1("send");
  FUNC_0(VAR_1);
 }

 do {
  VAR_8 = FUNC_2(VAR_4, "\n", 1, 0);
  FUNC_5("send");
 } while (VAR_8 < 0 && VAR_5 == VAR_0);

 if (VAR_8 != 1) {
  FUNC_1("send");
  FUNC_0(VAR_1);
 }

 FUNC_6();
}
