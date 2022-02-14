
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int const*,void const*,size_t) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static BOOL FUNC_2(const uint8_t* VAR_2, size_t VAR_3, const void* VAR_4,
   size_t VAR_5, uint8_t VAR_6, void** VAR_7, size_t* VAR_8, BOOL* VAR_9)
{
 size_t VAR_10 = 0, VAR_11, VAR_12, VAR_13;
 uint8_t VAR_14;
 BOOL VAR_15, VAR_16;

 while (VAR_10 < VAR_3) {
  VAR_15 = VAR_2[VAR_10] & 0x20;
  VAR_16 = ((VAR_2[VAR_10] & 0xC0) == 0x00);
  VAR_14 = VAR_2[VAR_10++] & 0x1F;
  if (VAR_14 == 0x1F) {
   FUNC_1("get_data_from_asn1: Long form tags are unsupported");
   return VAR_0;
  }


  VAR_11 = 0;
  VAR_12 = 1;
  if ((VAR_16) && (VAR_14 == 0x05)) {
   VAR_10++;
  } else {
   if (VAR_2[VAR_10] & 0x80) {
    VAR_12 = VAR_2[VAR_10++] & 0x7F;

    if (VAR_12 > 2) {
     FUNC_1("get_data_from_asn1: Length fields larger than 2 bytes are unsupported");
     return VAR_0;
    }
    for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
     VAR_11 <<= 8;
     VAR_11 += VAR_2[VAR_10++];
    }
   } else {
    VAR_11 = VAR_2[VAR_10++];
   }

   if (VAR_11 > VAR_3 - VAR_10) {
    FUNC_1("get_data_from_asn1: Overflow error (computed length %d is larger than remaining data)", VAR_11);
    return VAR_0;
   }
  }

  if (VAR_11 != 0) {
   if (VAR_15) {
    if (!FUNC_2(&VAR_2[VAR_10], VAR_11, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9))
     return VAR_0;
    if (*VAR_7 != ((void*)0))
     return VAR_1;
   } else if (VAR_16) {

    if ((!*VAR_9) && (VAR_14 == 0x06) && (VAR_11 == VAR_5) && (FUNC_0(&VAR_2[VAR_10], VAR_4, VAR_5) == 0)) {
     *VAR_9 = VAR_1;
    } else if ((*VAR_9) && (VAR_14 == VAR_6)) {
     *VAR_8 = VAR_11;
     *VAR_7 = (void*)&VAR_2[VAR_10];
     return VAR_1;
    }
   }
   VAR_10 += VAR_11;
  }
 };

 return VAR_1;
}
