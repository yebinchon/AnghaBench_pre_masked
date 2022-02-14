
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;
typedef scalar_t__ uint32 ;
typedef scalar_t__ pg_crc32c ;


 scalar_t__ FUNC_0 (scalar_t__,unsigned int const) ;
 scalar_t__ FUNC_1 (scalar_t__,int const) ;
 scalar_t__ FUNC_2 (scalar_t__,unsigned char const) ;

pg_crc32c
FUNC_3(pg_crc32c VAR_0, const void *VAR_1, size_t VAR_2)
{
 const unsigned char *VAR_3 = VAR_1;
 const unsigned char *VAR_4 = VAR_3 + VAR_2;
 while (VAR_3 + 8 <= VAR_4)
 {
  VAR_0 = (uint32) FUNC_1(VAR_0, *((const uint64 *) VAR_3));
  VAR_3 += 8;
 }


 if (VAR_3 + 4 <= VAR_4)
 {
  VAR_0 = FUNC_0(VAR_0, *((const unsigned int *) VAR_3));
  VAR_3 += 4;
 }
 while (VAR_3 < VAR_4)
 {
  VAR_0 = FUNC_2(VAR_0, *VAR_3);
  VAR_3++;
 }

 return VAR_0;
}
