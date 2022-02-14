
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8 ;
typedef int Size ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char const*,char const*,char const**,int) ;
 char* FUNC_2 (char const*,char,int) ;
 int FUNC_3 (char*,char const*,int) ;
 char* FUNC_4 (int) ;
 char* FUNC_5 (char*,char) ;
 char* FUNC_6 (char*,char*) ;

int
FUNC_7(const uint8 *VAR_2, unsigned VAR_3,
        int *VAR_4, char ***VAR_5, char ***VAR_6)
{
 const uint8 *VAR_7 = VAR_2 + VAR_3;
 const uint8 *VAR_8;
 const uint8 *VAR_9;
 const uint8 *VAR_10;
 const uint8 *VAR_11;
 Size VAR_12;
 char *VAR_13;
 char *VAR_14;
 char *VAR_15,
      *VAR_16;
 int VAR_17;
 char *VAR_18;
 int VAR_19;
 int VAR_20;


 VAR_17 = FUNC_1(VAR_2, VAR_7, &VAR_10, 0);
 if (VAR_17 <= 0)
  return VAR_1;
 VAR_10 += VAR_17;


 VAR_17 = FUNC_1(VAR_10, VAR_7, &VAR_11, 1);
 if (VAR_17 <= 0)
  return VAR_1;


 VAR_19 = 0;
 VAR_8 = VAR_10;
 while (VAR_8 < VAR_11 && *VAR_8 != '\n' && *VAR_8 != '\r')
 {
  VAR_8 = FUNC_2(VAR_8, '\n', VAR_11 - VAR_8);
  if (!VAR_8)
   return VAR_1;


  VAR_8++;
  VAR_19++;
 }
 VAR_9 = VAR_8;





 VAR_12 = VAR_9 - VAR_10;
 VAR_18 = FUNC_4(VAR_12 + 1);
 FUNC_3(VAR_18, VAR_10, VAR_12);
 VAR_18[VAR_12] = '\0';


 *VAR_5 = (char **) FUNC_4(VAR_19 * sizeof(char *));
 *VAR_6 = (char **) FUNC_4(VAR_19 * sizeof(char *));





 VAR_20 = 0;
 VAR_13 = VAR_18;
 for (;;)
 {

  VAR_15 = FUNC_5(VAR_13, '\n');
  if (!VAR_15)
   break;
  VAR_14 = VAR_15 + 1;

  if (VAR_15 > VAR_13 && *(VAR_15 - 1) == '\r')
   VAR_15--;
  *VAR_15 = '\0';


  VAR_16 = FUNC_6(VAR_13, ": ");
  if (!VAR_16)
   return VAR_1;
  *VAR_16 = '\0';


  if (VAR_20 >= VAR_19)
   FUNC_0(VAR_0, "unexpected number of armor header lines");

  (*VAR_5)[VAR_20] = VAR_13;
  (*VAR_6)[VAR_20] = VAR_16 + 2;
  VAR_20++;


  VAR_13 = VAR_14;
 }

 if (VAR_20 != VAR_19)
  FUNC_0(VAR_0, "unexpected number of armor header lines");

 *VAR_4 = VAR_20;
 return 0;
}
