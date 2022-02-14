
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpio_data {char* member_2; unsigned int size; void* data; int name; int member_1; int * member_0; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 char* FUNC_0 (char const*,int) ;
 int FUNC_1 (char const*,char const*,size_t) ;
 int FUNC_2 (char*,char const*,unsigned int) ;
 int FUNC_3 (int ,char const*,unsigned int) ;
 size_t FUNC_4 (char const*) ;

struct cpio_data FUNC_5(const char *VAR_6, void *VAR_7,
    size_t VAR_8, long *VAR_9)
{
 const size_t VAR_10 = 8*VAR_4 - 2;
 struct cpio_data VAR_11 = { ((void*)0), 0, "" };
 const char *VAR_12, *VAR_13, *VAR_14;
 unsigned int VAR_15[VAR_4], *VAR_16, VAR_17;
 unsigned char VAR_18, VAR_19;
 size_t VAR_20 = FUNC_4(VAR_6);
 int VAR_21, VAR_22;

 VAR_12 = VAR_7;

 while (VAR_8 > VAR_10) {
  if (!*VAR_12) {

   VAR_12 += 4;
   VAR_8 -= 4;
   continue;
  }

  VAR_22 = 6;
  VAR_16 = VAR_15;
  for (VAR_21 = VAR_4; VAR_21; VAR_21--) {
   VAR_17 = 0;
   while (VAR_22--) {
    VAR_17 <<= 4;
    VAR_18 = *VAR_12++;

    VAR_19 = VAR_18 - '0';
    if (VAR_19 < 10) {
     VAR_17 += VAR_19;
     continue;
    }

    VAR_19 = (VAR_18 | 0x20) - 'a';
    if (VAR_19 < 6) {
     VAR_17 += VAR_19 + 10;
     continue;
    }

    goto quit;
   }
   *VAR_16++ = VAR_17;
   VAR_22 = 8;
  }

  if ((VAR_15[VAR_1] - 0x070701) > 1)
   goto quit;

  VAR_8 -= VAR_10;

  VAR_13 = FUNC_0(VAR_12 + VAR_15[VAR_3], 4);
  VAR_14 = FUNC_0(VAR_13 + VAR_15[VAR_0], 4);

  if (VAR_14 > VAR_12 + VAR_8 || VAR_13 < VAR_12 || VAR_14 < VAR_13)
   goto quit;

  if ((VAR_15[VAR_2] & 0170000) == 0100000 &&
      VAR_15[VAR_3] >= VAR_20 &&
      !FUNC_1(VAR_12, VAR_6, VAR_20)) {

   if (VAR_9)
    *VAR_9 = (long)VAR_14 - (long)VAR_7;

   if (VAR_15[VAR_3] - VAR_20 >= VAR_5) {
    FUNC_2(
    "File %s exceeding MAX_CPIO_FILE_NAME [%d]\n",
    VAR_12, VAR_5);
   }
   FUNC_3(VAR_11.name, VAR_12 + VAR_20, VAR_5);

   VAR_11.data = (void *)VAR_13;
   VAR_11.size = VAR_15[VAR_0];
   return VAR_11;
  }
  VAR_8 -= (VAR_14 - VAR_12);
  VAR_12 = VAR_14;
 }

quit:
 return VAR_11;
}
