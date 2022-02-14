
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zip_uint8_t ;
typedef size_t zip_uint64_t ;
typedef int zip_uint32_t ;
typedef int zip_uint16_t ;
struct trad_pkware {int* key; } ;
typedef int Bytef ;


 scalar_t__ FUNC_0 (int,int*,int) ;

__attribute__((used)) static void
FUNC_1(struct trad_pkware *VAR_0, zip_uint8_t *VAR_1, const zip_uint8_t *VAR_2,
 zip_uint64_t VAR_3, int VAR_4)
{
    zip_uint16_t VAR_5;
    zip_uint64_t VAR_6;
    Bytef VAR_7;

    for (VAR_6=0; VAR_6<VAR_3; VAR_6++) {
 VAR_7 = VAR_2[VAR_6];

 if (!VAR_4) {

     VAR_5 = (zip_uint16_t)(VAR_0->key[2] | 2);
     VAR_5 = (VAR_5 * (VAR_5 ^ 1)) >> 8;
     VAR_7 ^= VAR_5;
 }


 if (VAR_1)
     VAR_1[VAR_6] = VAR_7;


 VAR_0->key[0] = (zip_uint32_t)FUNC_0(VAR_0->key[0] ^ 0xffffffffUL, &VAR_7, 1) ^ 0xffffffffUL;
 VAR_0->key[1] = (VAR_0->key[1] + (VAR_0->key[0] & 0xff)) * 134775813 + 1;
 VAR_7 = VAR_0->key[1] >> 24;
 VAR_0->key[2] = (zip_uint32_t)FUNC_0(VAR_0->key[2] ^ 0xffffffffUL, &VAR_7, 1) ^ 0xffffffffUL;
    }
}
