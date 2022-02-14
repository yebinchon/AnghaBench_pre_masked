
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_string ;


 int FUNC_0 (char*) ;
 size_t FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__,char*,size_t) ;
 int * FUNC_5 (int *,size_t,int ) ;

__attribute__((used)) inline static void
FUNC_6(zend_string **VAR_0, size_t *VAR_1, char *VAR_2, size_t VAR_3)
{
 if ((*VAR_1 + VAR_3) >= FUNC_1(*VAR_0)) {
  size_t VAR_4 = FUNC_1(*VAR_0);

  FUNC_0(("%s(): ereallocing buffer to %d bytes\n", FUNC_3(), FUNC_1(*VAR_0)));
  do {
   VAR_4 = VAR_4 << 1;
  } while ((*VAR_1 + VAR_3) >= VAR_4);
  *VAR_0 = FUNC_5(*VAR_0, VAR_4, 0);
 }
 FUNC_0(("sprintf: appending \"%s\", pos=\n", VAR_2, *VAR_1));
 FUNC_4(FUNC_2(*VAR_0) + (*VAR_1), VAR_2, VAR_3);
 *VAR_1 += VAR_3;
}
