
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(const char **VAR_0, int *VAR_1){
  static const signed char VAR_2[] = {
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
     0, 1, 2, 3, 4, 5, 6, 7, 8, 9, -1, -1, -1, -1, -1, -1,
    -1, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24,
    25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, -1, -1, -1, -1, 36,
    -1, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51,
    52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, -1, -1, -1, 63, -1,
  };
  unsigned int VAR_3 = 0;
  int VAR_4;
  unsigned char *VAR_5 = (unsigned char*)*VAR_0;
  unsigned char *VAR_6 = VAR_5;
  while( (VAR_4 = VAR_2[0x7f&*(VAR_5++)])>=0 ){
     VAR_3 = (VAR_3<<6) + VAR_4;
  }
  VAR_5--;
  *VAR_1 -= VAR_5 - VAR_6;
  *VAR_0 = (char*)VAR_5;
  return VAR_3;
}
