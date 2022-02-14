
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const*,char) ;

__attribute__((used)) static int FUNC_1 (const char *VAR_4, int VAR_5) {
  int VAR_6 = 0;
  if (FUNC_0(VAR_4, 'c')) VAR_6 |= VAR_0;
  if (FUNC_0(VAR_4, 'r')) VAR_6 |= VAR_3;
  if (FUNC_0(VAR_4, 'l')) VAR_6 |= VAR_2;
  if (VAR_5 > 0) VAR_6 |= VAR_1;
  return VAR_6;
}
