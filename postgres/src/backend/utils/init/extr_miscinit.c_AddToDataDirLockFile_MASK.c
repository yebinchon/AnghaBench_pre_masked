
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int srcbuffer ;
typedef int off_t ;
typedef int destbuffer ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_4 (int,int ,int ) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (int ,int,int ) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int,char*,int) ;
 int FUNC_11 (char*,int,char*,char const*) ;
 char* FUNC_12 (char*,char) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (int,char*,int) ;

void
FUNC_15(int VAR_11, const char *VAR_12)
{
 int VAR_13;
 int VAR_14;
 int VAR_15;
 char *VAR_16;
 char *VAR_17;
 char VAR_18[VAR_0];
 char VAR_19[VAR_0];

 VAR_13 = FUNC_6(VAR_1, VAR_4 | VAR_5, 0);
 if (VAR_13 < 0)
 {
  FUNC_1(VAR_3,
    (FUNC_2(),
     FUNC_3("could not open file \"%s\": %m",
      VAR_1)));
  return;
 }
 FUNC_9(VAR_7);
 VAR_14 = FUNC_10(VAR_13, VAR_18, sizeof(VAR_18) - 1);
 FUNC_8();
 if (VAR_14 < 0)
 {
  FUNC_1(VAR_3,
    (FUNC_2(),
     FUNC_3("could not read from file \"%s\": %m",
      VAR_1)));
  FUNC_0(VAR_13);
  return;
 }
 VAR_18[VAR_14] = '\0';





 VAR_16 = VAR_18;
 for (VAR_15 = 1; VAR_15 < VAR_11; VAR_15++)
 {
  char *VAR_20 = FUNC_12(VAR_16, '\n');

  if (VAR_20 == ((void*)0))
   break;
  VAR_16 = VAR_20 + 1;
 }
 FUNC_5(VAR_19, VAR_18, VAR_16 - VAR_18);
 VAR_17 = VAR_19 + (VAR_16 - VAR_18);





 for (; VAR_15 < VAR_11; VAR_15++)
 {
  if (VAR_17 < VAR_19 + sizeof(VAR_19))
   *VAR_17++ = '\n';
 }




 FUNC_11(VAR_17, VAR_19 + sizeof(VAR_19) - VAR_17, "%s\n", VAR_12);
 VAR_17 += FUNC_13(VAR_17);




 if ((VAR_16 = FUNC_12(VAR_16, '\n')) != ((void*)0))
 {
  VAR_16++;
  FUNC_11(VAR_17, VAR_19 + sizeof(VAR_19) - VAR_17, "%s",
     VAR_16);
 }





 VAR_14 = FUNC_13(VAR_19);
 VAR_10 = 0;
 FUNC_9(VAR_9);
 if (FUNC_4(VAR_13, (off_t) 0, VAR_6) != 0 ||
  (int) FUNC_14(VAR_13, VAR_19, VAR_14) != VAR_14)
 {
  FUNC_8();

  if (VAR_10 == 0)
   VAR_10 = VAR_2;
  FUNC_1(VAR_3,
    (FUNC_2(),
     FUNC_3("could not write to file \"%s\": %m",
      VAR_1)));
  FUNC_0(VAR_13);
  return;
 }
 FUNC_8();
 FUNC_9(VAR_8);
 if (FUNC_7(VAR_13) != 0)
 {
  FUNC_1(VAR_3,
    (FUNC_2(),
     FUNC_3("could not write to file \"%s\": %m",
      VAR_1)));
 }
 FUNC_8();
 if (FUNC_0(VAR_13) != 0)
 {
  FUNC_1(VAR_3,
    (FUNC_2(),
     FUNC_3("could not write to file \"%s\": %m",
      VAR_1)));
 }
}
