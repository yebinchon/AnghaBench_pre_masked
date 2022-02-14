
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t (* WebPEncodeLosslessFunction ) (int const*,int,int,int,int **) ;



__attribute__((used)) static uint8_t* FUNC_0(const uint8_t* VAR_0,
                               int VAR_1, int VAR_2, int VAR_3,
                               WebPEncodeLosslessFunction VAR_4,
                               int* VAR_5, int* VAR_6) {
  uint8_t* VAR_7 = ((void*)0);
  const size_t VAR_8 = VAR_4(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_7);


  *VAR_5 = VAR_8;
  *VAR_6 = 1;
  return VAR_8 ? VAR_7 : ((void*)0);
}
