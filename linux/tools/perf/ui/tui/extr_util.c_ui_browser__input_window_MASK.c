
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (unsigned char*,int,int,int,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 char* FUNC_10 (char const*,char) ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 (int) ;
 int VAR_6 ;
 int FUNC_13 (char*) ;

int FUNC_14(const char *VAR_7, const char *VAR_8, char *VAR_9,
        const char *VAR_10, int VAR_11)
{
 int VAR_12, VAR_13, VAR_14, VAR_15;
 int VAR_16 = 60, VAR_17 = 0;
 static char VAR_18[50];
 const char *VAR_19;

 VAR_19 = VAR_8;
 while (1) {
  const char *VAR_20 = FUNC_10(VAR_19, '\n');

  if (VAR_20 == ((void*)0))
   VAR_20 = FUNC_10(VAR_19, '\0');
  VAR_14 = VAR_20 - VAR_19;
  if (VAR_16 < VAR_14)
   VAR_16 = VAR_14;
  ++VAR_17;
  if (*VAR_20 == '\0')
   break;
  VAR_19 = VAR_20 + 1;
 }

 FUNC_8(&VAR_6);

 VAR_16 += 2;
 VAR_17 += 8;
 VAR_13 = VAR_5 / 2 - VAR_17 / 2;
 VAR_12 = VAR_4 / 2 - VAR_16 / 2;

 FUNC_3(0);
 FUNC_0(VAR_13, VAR_12++, VAR_17, VAR_16);
 if (VAR_7) {
  FUNC_1(VAR_13, VAR_12 + 1);
  FUNC_6((char *)VAR_7);
 }
 FUNC_1(++VAR_13, VAR_12);
 VAR_17 -= 7;
 VAR_16 -= 2;
 FUNC_7((unsigned char *)VAR_8, VAR_13, VAR_12,
       VAR_17, VAR_16, 1);
 VAR_13 += VAR_17;
 VAR_14 = 5;
 while (VAR_14--) {
  FUNC_1(VAR_13 + VAR_14 - 1, VAR_12);
  FUNC_5((char *)" ", VAR_16);
 }
 FUNC_0(VAR_13++, VAR_12 + 1, 3, VAR_16 - 2);

 FUNC_1(VAR_13 + 3, VAR_12);
 FUNC_5((char *)VAR_10, VAR_16);
 FUNC_2();

 FUNC_9(&VAR_6);

 VAR_12 += 2;
 VAR_14 = 0;
 VAR_15 = FUNC_12(VAR_11);
 while (VAR_15 != VAR_3 && VAR_15 != VAR_1 && VAR_15 != VAR_2) {
  FUNC_8(&VAR_6);

  if (VAR_15 == VAR_0) {
   if (VAR_14 == 0) {
    FUNC_9(&VAR_6);
    goto next_key;
   }
   FUNC_1(VAR_13, VAR_12 + --VAR_14);
   FUNC_4(' ');
  } else {
   VAR_18[VAR_14] = VAR_15;
   FUNC_1(VAR_13, VAR_12 + VAR_14++);
   FUNC_4(VAR_15);
  }
  FUNC_2();

  FUNC_9(&VAR_6);


  if (VAR_14 == sizeof(VAR_18) - 1) {
   FUNC_13("maximum size of symbol name reached!");
   VAR_15 = VAR_1;
   break;
  }
next_key:
  VAR_15 = FUNC_12(VAR_11);
 }

 VAR_18[VAR_14] = '\0';
 FUNC_11(VAR_9, VAR_18, VAR_14+1);
 return VAR_15;
}
