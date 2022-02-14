
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int unichar ;


 int FUNC_0 (int const*,size_t,int *,size_t*) ;

__attribute__((used)) static int FUNC_1(const ut8 *VAR_0, size_t VAR_1, unichar *VAR_2, size_t *VAR_3) {
 if (VAR_1 > 3 && VAR_0[0] == 0xef && VAR_0[1] == 0xbb && VAR_0[2] == 0xbf) {
  return FUNC_0 (VAR_0 + 3, VAR_1 - 3, VAR_2, VAR_3);
 }
 return -1;
}
