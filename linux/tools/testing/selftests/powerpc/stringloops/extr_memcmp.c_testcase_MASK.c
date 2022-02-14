
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int,unsigned long) ;
 int FUNC_2 (char*,char*,unsigned long) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char*,unsigned long,int ,unsigned long) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(bool VAR_7)
{
 char *VAR_8;
 char *VAR_9;
 unsigned long VAR_10;

 unsigned long VAR_11 = (VAR_7 ? VAR_3 : VAR_6);
 unsigned long VAR_12 = VAR_11 + VAR_5;
 int VAR_13 = VAR_7 ? VAR_1 : VAR_0;

 VAR_8 = FUNC_1(128, VAR_12);
 if (!VAR_8) {
  FUNC_3("memalign");
  FUNC_0(1);
 }

 VAR_9 = FUNC_1(128, VAR_12);
 if (!VAR_9) {
  FUNC_3("memalign");
  FUNC_0(1);
 }

 FUNC_5(FUNC_7(0));

 for (VAR_10 = 0; VAR_10 < VAR_13; VAR_10++) {
  unsigned long VAR_14;
  unsigned long VAR_15;
  char *VAR_16 = VAR_8;
  char *VAR_17 = VAR_9;

  for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++)
   VAR_8[VAR_14] = FUNC_4();

  VAR_16 += FUNC_4() % VAR_5;
  VAR_17 += FUNC_4() % VAR_5;
  FUNC_2(VAR_17, VAR_16, VAR_11);


  VAR_15 = FUNC_4() % VAR_11;
  VAR_17[VAR_15] = FUNC_4() & 0xff;

  if (VAR_7)
   FUNC_6(VAR_16, VAR_17, VAR_2,
     VAR_4, VAR_11);
  else
   FUNC_6(VAR_16, VAR_17, VAR_6, 0, VAR_11);
 }

 FUNC_5(FUNC_7(0));

 for (VAR_10 = 0; VAR_10 < VAR_13; VAR_10++) {
  unsigned long VAR_18;
  unsigned long VAR_19;
  char *VAR_20 = VAR_8;
  char *VAR_21 = VAR_9;

  for (VAR_18 = 0; VAR_18 < VAR_12; VAR_18++)
   VAR_8[VAR_18] = FUNC_4();

  VAR_20 += FUNC_4() % VAR_5;
  VAR_21 += FUNC_4() % VAR_5;
  FUNC_2(VAR_21, VAR_20, VAR_11);


  for (VAR_18 = 0; VAR_18 < VAR_11 / 8; VAR_18++) {
   VAR_19 = FUNC_4() % VAR_11;
   VAR_9[VAR_19] = FUNC_4() & 0xff;
  }

  if (VAR_7)
   FUNC_6(VAR_20, VAR_21, VAR_2,
     VAR_4, VAR_11);
  else
   FUNC_6(VAR_20, VAR_21, VAR_6, 0, VAR_11);
 }

 return 0;
}
