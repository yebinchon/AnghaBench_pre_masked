
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int len ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 size_t VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const unsigned char *VAR_5, size_t VAR_6,
           size_t *VAR_7, size_t *VAR_8,
           const char **VAR_9)
{
 unsigned char VAR_10, VAR_11;
 size_t VAR_12 = *VAR_7, VAR_13, VAR_14;
 int VAR_15 = 1;

next_tag:
 if (FUNC_0(VAR_6 - VAR_12 < 2)) {
  if (VAR_6 == VAR_12)
   goto missing_eoc;
  goto data_overrun_error;
 }


 VAR_10 = VAR_5[VAR_12++];
 if (VAR_10 == VAR_1) {

  if (VAR_5[VAR_12++] != 0)
   goto invalid_eoc;
  if (--VAR_15 <= 0) {
   *VAR_8 = VAR_12 - *VAR_7;
   *VAR_7 = VAR_12;
   return 0;
  }
  goto next_tag;
 }

 if (FUNC_0((VAR_10 & 0x1f) == VAR_3)) {
  do {
   if (FUNC_0(VAR_6 - VAR_12 < 2))
    goto data_overrun_error;
   VAR_11 = VAR_5[VAR_12++];
  } while (VAR_11 & 0x80);
 }


 VAR_13 = VAR_5[VAR_12++];
 if (VAR_13 <= 0x7f)
  goto check_length;

 if (FUNC_0(VAR_13 == VAR_2)) {

  if (FUNC_0((VAR_10 & VAR_0) == VAR_4 << 5))
   goto indefinite_len_primitive;
  VAR_15++;
  goto next_tag;
 }

 VAR_14 = VAR_13 - 0x80;
 if (FUNC_0(VAR_14 > sizeof(VAR_13) - 1))
  goto length_too_long;
 if (FUNC_0(VAR_14 > VAR_6 - VAR_12))
  goto data_overrun_error;
 VAR_13 = 0;
 for (; VAR_14 > 0; VAR_14--) {
  VAR_13 <<= 8;
  VAR_13 |= VAR_5[VAR_12++];
 }
check_length:
 if (VAR_13 > VAR_6 - VAR_12)
  goto data_overrun_error;
 VAR_12 += VAR_13;
 goto next_tag;

length_too_long:
 *VAR_9 = "Unsupported length";
 goto error;
indefinite_len_primitive:
 *VAR_9 = "Indefinite len primitive not permitted";
 goto error;
invalid_eoc:
 *VAR_9 = "Invalid length EOC";
 goto error;
data_overrun_error:
 *VAR_9 = "Data overrun error";
 goto error;
missing_eoc:
 *VAR_9 = "Missing EOC in indefinite len cons";
error:
 *VAR_7 = VAR_12;
 return -1;
}
