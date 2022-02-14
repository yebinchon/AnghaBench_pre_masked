
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char const*,int,char*,int) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int,int *) ;
 int FUNC_9 (char const*,char const*,int,int,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 (char*) ;

char *
FUNC_13(const char *VAR_3, int VAR_4, int VAR_5,
      const char *VAR_6)
{
 uint8 VAR_7[VAR_2];
 uint8 VAR_8[VAR_2];
 uint8 VAR_9[VAR_2];
 char *VAR_10;
 char *VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;

 if (VAR_5 <= 0)
  VAR_5 = VAR_1;


 FUNC_9(VAR_6, VAR_3, VAR_4, VAR_5,
       VAR_7);
 FUNC_7(VAR_7, VAR_8);
 FUNC_8(VAR_8, VAR_2, VAR_8);

 FUNC_10(VAR_7, VAR_9);






 VAR_13 = FUNC_5(VAR_4);
 VAR_14 = FUNC_5(VAR_2);
 VAR_15 = FUNC_5(VAR_2);

 VAR_12 = FUNC_12("SCRAM-SHA-256") + 1
  + 10 + 1
  + VAR_13 + 1
  + VAR_14 + 1
  + VAR_15 + 1;






 VAR_10 = FUNC_4(VAR_12);


 VAR_11 = VAR_10 + FUNC_11(VAR_10, "SCRAM-SHA-256$%d:", VAR_5);


 VAR_16 = FUNC_6(VAR_3, VAR_4, VAR_11, VAR_13);
 if (VAR_16 < 0)
 {




  FUNC_1(VAR_0, "could not encode salt");

 }
 VAR_11 += VAR_16;
 *(VAR_11++) = '$';


 VAR_16 = FUNC_6((char *) VAR_8, VAR_2, VAR_11,
           VAR_14);
 if (VAR_16 < 0)
 {




  FUNC_1(VAR_0, "could not encode stored key");

 }

 VAR_11 += VAR_16;
 *(VAR_11++) = ':';


 VAR_16 = FUNC_6((char *) VAR_9, VAR_2, VAR_11,
           VAR_15);
 if (VAR_16 < 0)
 {




  FUNC_1(VAR_0, "could not encode server key");

 }

 VAR_11 += VAR_16;
 *(VAR_11++) = '\0';

 FUNC_0(VAR_11 - VAR_10 <= VAR_12);

 return VAR_10;
}
