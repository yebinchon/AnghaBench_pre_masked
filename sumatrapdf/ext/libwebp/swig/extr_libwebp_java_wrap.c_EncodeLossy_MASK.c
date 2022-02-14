
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t (* WebPEncodeFunction ) (int const*,int,int,int,float,int **) ;



__attribute__((used)) static uint8_t* FUNC_0(const uint8_t* VAR_0,
                            int VAR_1, int VAR_2, int VAR_3,
                            float VAR_4,
                            WebPEncodeFunction VAR_5,
                            int* VAR_6, int* VAR_7) {
  uint8_t* VAR_8 = ((void*)0);
  const size_t VAR_9 =
      VAR_5(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, &VAR_8);


  *VAR_6 = VAR_9;
  *VAR_7 = 1;
  return VAR_9 ? VAR_8 : ((void*)0);
}
