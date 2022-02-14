
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int unichar ;


 scalar_t__ VAR_0 ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static int FUNC_0(const ut8 *VAR_2, size_t VAR_3, unichar *VAR_4, size_t *VAR_5) {
 int VAR_6;
 size_t VAR_7;

 if (VAR_3 < 2) {
  return 0;
 }

 if (VAR_2[0] == 0xff && VAR_2[1] == 0xfe) {
  VAR_6 = 0;
 } else if (VAR_2[0] == 0xfe && VAR_2[1] == 0xff) {
  VAR_6 = 1;
 } else {
  return 0;
 }

 *VAR_5 = 0;

 for (VAR_7 = 2; VAR_7 + 1 < VAR_3; VAR_7 += 2) {


  if (VAR_6) {
   VAR_4[(*VAR_5)++] = VAR_2[VAR_7 + 1] + 256 * VAR_2[VAR_7];
  } else {
   VAR_4[(*VAR_5)++] = VAR_2[VAR_7] + 256 * VAR_2[VAR_7 + 1];
  }

  if (VAR_4[*VAR_5 - 1] == 0xfffe) {
   return 0;
  }
  if (VAR_4[*VAR_5 - 1] < 128 && VAR_1[(size_t)VAR_4[*VAR_5 - 1]] != VAR_0) {
   return 0;
  }
 }
 return 1 + VAR_6;
}
