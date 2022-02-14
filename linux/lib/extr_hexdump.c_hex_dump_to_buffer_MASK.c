
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;


 int FUNC_0 (int const*) ;
 char FUNC_1 (char) ;
 char FUNC_2 (char) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char) ;
 scalar_t__ FUNC_5 (char) ;
 int FUNC_6 (char*,size_t,char*,char*,int ) ;

int FUNC_7(const void *VAR_0, size_t VAR_1, int VAR_2, int VAR_3,
         char *VAR_4, size_t VAR_5, bool VAR_6)
{
 const u8 *VAR_7 = VAR_0;
 int VAR_8;
 u8 VAR_9;
 int VAR_10, VAR_11 = 0;
 int VAR_12;
 int VAR_13;

 if (VAR_2 != 16 && VAR_2 != 32)
  VAR_2 = 16;

 if (VAR_1 > VAR_2)
  VAR_1 = VAR_2;
 if (!FUNC_3(VAR_3) || VAR_3 > 8)
  VAR_3 = 1;
 if ((VAR_1 % VAR_3) != 0)
  VAR_3 = 1;

 VAR_8 = VAR_1 / VAR_3;
 VAR_12 = VAR_2 * 2 + VAR_2 / VAR_3 + 1;

 if (!VAR_5)
  goto overflow1;

 if (!VAR_1)
  goto nil;

 if (VAR_3 == 8) {
  const u64 *VAR_14 = VAR_0;

  for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
   VAR_13 = FUNC_6(VAR_4 + VAR_11, VAR_5 - VAR_11,
           "%s%16.16llx", VAR_10 ? " " : "",
           FUNC_0(VAR_14 + VAR_10));
   if (VAR_13 >= VAR_5 - VAR_11)
    goto overflow1;
   VAR_11 += VAR_13;
  }
 } else if (VAR_3 == 4) {
  const u32 *VAR_15 = VAR_0;

  for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
   VAR_13 = FUNC_6(VAR_4 + VAR_11, VAR_5 - VAR_11,
           "%s%8.8x", VAR_10 ? " " : "",
           FUNC_0(VAR_15 + VAR_10));
   if (VAR_13 >= VAR_5 - VAR_11)
    goto overflow1;
   VAR_11 += VAR_13;
  }
 } else if (VAR_3 == 2) {
  const u16 *VAR_16 = VAR_0;

  for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
   VAR_13 = FUNC_6(VAR_4 + VAR_11, VAR_5 - VAR_11,
           "%s%4.4x", VAR_10 ? " " : "",
           FUNC_0(VAR_16 + VAR_10));
   if (VAR_13 >= VAR_5 - VAR_11)
    goto overflow1;
   VAR_11 += VAR_13;
  }
 } else {
  for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
   if (VAR_5 < VAR_11 + 2)
    goto overflow2;
   VAR_9 = VAR_7[VAR_10];
   VAR_4[VAR_11++] = FUNC_1(VAR_9);
   if (VAR_5 < VAR_11 + 2)
    goto overflow2;
   VAR_4[VAR_11++] = FUNC_2(VAR_9);
   if (VAR_5 < VAR_11 + 2)
    goto overflow2;
   VAR_4[VAR_11++] = ' ';
  }
  if (VAR_10)
   VAR_11--;
 }
 if (!VAR_6)
  goto nil;

 while (VAR_11 < VAR_12) {
  if (VAR_5 < VAR_11 + 2)
   goto overflow2;
  VAR_4[VAR_11++] = ' ';
 }
 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  if (VAR_5 < VAR_11 + 2)
   goto overflow2;
  VAR_9 = VAR_7[VAR_10];
  VAR_4[VAR_11++] = (FUNC_4(VAR_9) && FUNC_5(VAR_9)) ? VAR_9 : '.';
 }
nil:
 VAR_4[VAR_11] = '\0';
 return VAR_11;
overflow2:
 VAR_4[VAR_11++] = '\0';
overflow1:
 return VAR_6 ? VAR_12 + VAR_1 : (VAR_3 * 2 + 1) * VAR_8 - 1;
}
