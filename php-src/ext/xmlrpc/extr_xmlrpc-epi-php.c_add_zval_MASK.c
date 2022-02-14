
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *,int *,int ) ;
 int FUNC_2 (char const*) ;
 long FUNC_3 (char const*,int *,int ) ;
 int FUNC_4 (int ,long,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,char*,int,int *) ;

__attribute__((used)) static void FUNC_7(zval* VAR_1, const char* VAR_2, zval* VAR_3)
{
 if (VAR_1 && VAR_3) {
  if (VAR_2) {
   int VAR_4 = FUNC_2(VAR_2);
   if (!(VAR_4 > 1 && VAR_2[0] == '0') && FUNC_1((char *)VAR_2, VAR_4, ((void*)0), ((void*)0), 0) == VAR_0) {
    long VAR_5 = FUNC_3(VAR_2, ((void*)0), 0);
    FUNC_4(FUNC_0(VAR_1), VAR_5, VAR_3);
   } else {
    FUNC_6(FUNC_0(VAR_1), (char*)VAR_2, FUNC_2(VAR_2), VAR_3);
   }
  } else {
   FUNC_5(FUNC_0(VAR_1), VAR_3);
  }
 }
}
