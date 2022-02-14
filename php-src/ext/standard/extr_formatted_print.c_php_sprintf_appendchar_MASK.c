
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_string ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 () ;
 int * FUNC_4 (int *,int,int ) ;

__attribute__((used)) inline static void
FUNC_5(zend_string **VAR_0, size_t *VAR_1, char VAR_2)
{
 if ((*VAR_1 + 1) >= FUNC_1(*VAR_0)) {
  FUNC_0(("%s(): ereallocing buffer to %d bytes\n", FUNC_3(), FUNC_1(*VAR_0)));
  *VAR_0 = FUNC_4(*VAR_0, FUNC_1(*VAR_0) << 1, 0);
 }
 FUNC_0(("sprintf: appending '%c', pos=\n", VAR_2, *VAR_1));
 FUNC_2(*VAR_0)[(*VAR_1)++] = VAR_2;
}
