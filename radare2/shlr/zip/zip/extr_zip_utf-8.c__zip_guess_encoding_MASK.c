
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zip_uint8_t ;
typedef size_t zip_uint32_t ;
struct zip_string {int* raw; scalar_t__ encoding; size_t length; } ;
typedef enum zip_encoding_type { ____Placeholder_zip_encoding_type } zip_encoding_type ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

enum zip_encoding_type
FUNC_0(struct zip_string *VAR_14, enum zip_encoding_type VAR_15)
{
    enum zip_encoding_type VAR_16;
    const zip_uint8_t *VAR_17;
    zip_uint32_t VAR_18, VAR_19, VAR_20;

    if (VAR_14 == ((void*)0))
 return VAR_8;

    VAR_17 = VAR_14->raw;

    if (VAR_14->encoding != VAR_11)
 VAR_16 = VAR_14->encoding;
    else {
 VAR_16 = VAR_8;
 for (VAR_18=0; VAR_18<VAR_14->length; VAR_18++) {
     if ((VAR_17[VAR_18] > 31 && VAR_17[VAR_18] < 128) || VAR_17[VAR_18] == '\r' || VAR_17[VAR_18] == '\n' || VAR_17[VAR_18] == '\t')
  continue;

     VAR_16 = VAR_12;
     if ((VAR_17[VAR_18] & VAR_2) == VAR_3)
  VAR_20 = 1;
     else if ((VAR_17[VAR_18] & VAR_4) == VAR_5)
  VAR_20 = 2;
     else if ((VAR_17[VAR_18] & VAR_6) == VAR_7)
  VAR_20 = 3;
     else {
  VAR_16 = VAR_9;
  break;
     }

     if (VAR_18 + VAR_20 >= VAR_14->length) {
  VAR_16 = VAR_9;
  break;
     }

     for (VAR_19=1; VAR_19<=VAR_20; VAR_19++) {
  if ((VAR_17[VAR_18+VAR_19] & VAR_0) != VAR_1) {
      VAR_16 = VAR_9;
      goto done;
  }
     }
     VAR_18 += VAR_20;
 }
    }

done:
    VAR_14->encoding = VAR_16;

    if (VAR_15 != VAR_11) {
 if (VAR_15 == VAR_13 && VAR_16 == VAR_12)
     VAR_14->encoding = VAR_16 = VAR_13;

 if (VAR_15 != VAR_16 && VAR_16 != VAR_8)
     return VAR_10;
    }

    return VAR_16;
}
