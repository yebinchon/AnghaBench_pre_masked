
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ u_char ;
struct php_crypt_extended_data {int dummy; } ;


 int FUNC_0 (int,int,int*,int*,int,struct php_crypt_extended_data*) ;
 int FUNC_1 (int,struct php_crypt_extended_data*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0, char *VAR_1, uint32_t VAR_2, int VAR_3,
 struct php_crypt_extended_data *VAR_4)
{
 uint32_t VAR_5 = 0, VAR_6 = 0, VAR_7, VAR_8;
 int VAR_9;

 FUNC_1(VAR_2, VAR_4);

 VAR_7 =
  (uint32_t)(u_char)VAR_0[3] |
  ((uint32_t)(u_char)VAR_0[2] << 8) |
  ((uint32_t)(u_char)VAR_0[1] << 16) |
  ((uint32_t)(u_char)VAR_0[0] << 24);
 VAR_8 =
  (uint32_t)(u_char)VAR_0[7] |
  ((uint32_t)(u_char)VAR_0[6] << 8) |
  ((uint32_t)(u_char)VAR_0[5] << 16) |
  ((uint32_t)(u_char)VAR_0[4] << 24);

 VAR_9 = FUNC_0(VAR_7, VAR_8, &VAR_5, &VAR_6, VAR_3, VAR_4);

 VAR_1[0] = VAR_5 >> 24;
 VAR_1[1] = VAR_5 >> 16;
 VAR_1[2] = VAR_5 >> 8;
 VAR_1[3] = VAR_5;
 VAR_1[4] = VAR_6 >> 24;
 VAR_1[5] = VAR_6 >> 16;
 VAR_1[6] = VAR_6 >> 8;
 VAR_1[7] = VAR_6;

 return(VAR_9);
}
