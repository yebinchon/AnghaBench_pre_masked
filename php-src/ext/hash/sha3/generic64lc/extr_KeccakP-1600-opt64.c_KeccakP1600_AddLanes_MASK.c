
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char const UINT8 ;
typedef int UINT64 ;



void FUNC_0(void *VAR_0, const unsigned char *VAR_1, unsigned int VAR_2)
{

    unsigned int VAR_3 = 0;
    {

      for( ; (VAR_3+8)<=VAR_2; VAR_3+=8) {
          ((UINT64*)VAR_0)[VAR_3+0] ^= ((UINT64*)VAR_1)[VAR_3+0];
          ((UINT64*)VAR_0)[VAR_3+1] ^= ((UINT64*)VAR_1)[VAR_3+1];
          ((UINT64*)VAR_0)[VAR_3+2] ^= ((UINT64*)VAR_1)[VAR_3+2];
          ((UINT64*)VAR_0)[VAR_3+3] ^= ((UINT64*)VAR_1)[VAR_3+3];
          ((UINT64*)VAR_0)[VAR_3+4] ^= ((UINT64*)VAR_1)[VAR_3+4];
          ((UINT64*)VAR_0)[VAR_3+5] ^= ((UINT64*)VAR_1)[VAR_3+5];
          ((UINT64*)VAR_0)[VAR_3+6] ^= ((UINT64*)VAR_1)[VAR_3+6];
          ((UINT64*)VAR_0)[VAR_3+7] ^= ((UINT64*)VAR_1)[VAR_3+7];
      }
      for( ; (VAR_3+4)<=VAR_2; VAR_3+=4) {
          ((UINT64*)VAR_0)[VAR_3+0] ^= ((UINT64*)VAR_1)[VAR_3+0];
          ((UINT64*)VAR_0)[VAR_3+1] ^= ((UINT64*)VAR_1)[VAR_3+1];
          ((UINT64*)VAR_0)[VAR_3+2] ^= ((UINT64*)VAR_1)[VAR_3+2];
          ((UINT64*)VAR_0)[VAR_3+3] ^= ((UINT64*)VAR_1)[VAR_3+3];
      }
      for( ; (VAR_3+2)<=VAR_2; VAR_3+=2) {
          ((UINT64*)VAR_0)[VAR_3+0] ^= ((UINT64*)VAR_1)[VAR_3+0];
          ((UINT64*)VAR_0)[VAR_3+1] ^= ((UINT64*)VAR_1)[VAR_3+1];
      }
      if (VAR_3<VAR_2) {
          ((UINT64*)VAR_0)[VAR_3+0] ^= ((UINT64*)VAR_1)[VAR_3+0];
      }
    }
}
