
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* coap_key_t ;



void FUNC_0(const unsigned char *VAR_0, unsigned int VAR_1, coap_key_t VAR_2) {
  size_t VAR_3;

  while (VAR_1--) {
    VAR_3 = sizeof(coap_key_t)-1;

    while (VAR_3) {
      VAR_2[VAR_3] = ((VAR_2[VAR_3] << 7) | (VAR_2[VAR_3-1] >> 1)) + VAR_2[VAR_3];
      --VAR_3;
    }

    VAR_2[0] = (VAR_2[0] << 7) + VAR_2[0] + *VAR_0++;
  }
}
