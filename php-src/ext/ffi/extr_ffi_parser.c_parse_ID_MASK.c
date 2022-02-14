
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 size_t VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static int FUNC_2(int VAR_3, const char **VAR_4, size_t *VAR_5) {
 if (VAR_3 != VAR_0) {
  FUNC_1("<ID> expected, got", VAR_3);
 }
 *VAR_4 = (const char*)VAR_2; *VAR_5 = VAR_1 - VAR_2;
 VAR_3 = FUNC_0();
 return VAR_3;
}
