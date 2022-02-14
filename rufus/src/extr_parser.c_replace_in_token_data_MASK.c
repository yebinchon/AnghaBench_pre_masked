
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;
typedef int bom ;
typedef int FILE ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 int * FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int,int) ;
 char* VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char*,int ,int *) ;
 int FUNC_8 (char*,int *) ;
 int FUNC_9 (char*,size_t,int,int *) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int *,char*,char*,char*,char*) ;
 int FUNC_12 (char*,size_t,int,int *) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (char const*,char const*) ;
 int FUNC_15 (char*,...) ;
 char* FUNC_16 (char const*) ;
 int FUNC_17 (char*,char*) ;
 int FUNC_18 (char*) ;
 size_t FUNC_19 (char*,int ) ;
 char* FUNC_20 (char*,char*) ;
 int VAR_2 ;

char* FUNC_21(const char* VAR_3, const char* VAR_4, const char* VAR_5, const char* VAR_6, BOOL VAR_7)
{
 const wchar_t* VAR_8[] = { L"w", L"w, ccs=UTF-8", L"w, ccs=UTF-16LE" };
 wchar_t *VAR_9 = ((void*)0), *VAR_10 = ((void*)0), *VAR_11 = ((void*)0), *VAR_12 = ((void*)0), *VAR_13 = ((void*)0), VAR_14 = 0;
 wchar_t VAR_15[1024], *VAR_16;
 FILE *VAR_17 = ((void*)0), *VAR_18 = ((void*)0);
 size_t VAR_19, VAR_20, VAR_21;
 int VAR_22 = 0;
 char *VAR_23 = ((void*)0), VAR_24[2];

 if ((VAR_3 == ((void*)0)) || (VAR_4 == ((void*)0)) || (VAR_5 == ((void*)0)) || (VAR_6 == ((void*)0)))
  return ((void*)0);
 if ((VAR_3[0] == 0) || (VAR_4[0] == 0) || (VAR_5[0] == 0) || (VAR_6[0] == 0))
  return ((void*)0);
 if (FUNC_14(VAR_5, VAR_6) == 0)
  return ((void*)0);

 VAR_10 = FUNC_16(VAR_3);
 if (VAR_10 == ((void*)0)) {
  FUNC_15(VAR_1, VAR_3);
  goto out;
 }
 VAR_9 = FUNC_16(VAR_4);
 if (VAR_10 == ((void*)0)) {
  FUNC_15(VAR_1, VAR_4);
  goto out;
 }
 VAR_12 = FUNC_16(VAR_5);
 if (VAR_12 == ((void*)0)) {
  FUNC_15(VAR_1, VAR_5);
  goto out;
 }
 VAR_13 = FUNC_16(VAR_6);
 if (VAR_12 == ((void*)0)) {
  FUNC_15(VAR_1, VAR_6);
  goto out;
 }

 VAR_17 = FUNC_2(VAR_10, L"r, ccs=UNICODE");
 if (VAR_17 == ((void*)0)) {
  FUNC_15("Could not open file '%s'\n", VAR_3);
  goto out;
 }

 if (FUNC_9(&VAR_14, sizeof(VAR_14), 1, VAR_17) != 1) {
  if (!FUNC_6(VAR_17))
   FUNC_15("Could not read file '%s'\n", VAR_3);
  goto out;
 }
 switch(VAR_14) {
 case 0xFEFF:
  VAR_22 = 2;
  break;
 case 0xBBEF:
  VAR_22 = 1;
  break;
 default:
  VAR_22 = 0;
  break;
 }
 FUNC_10(VAR_17, 0, VAR_0);




 VAR_11 = (wchar_t*)FUNC_4(FUNC_18(VAR_10)+2, sizeof(wchar_t));
 if (VAR_11 == ((void*)0)) {
  FUNC_15("Could not allocate space for temporary output name\n");
  goto out;
 }
 FUNC_17(VAR_11, VAR_10);
 VAR_11[FUNC_18(VAR_11)] = '~';

 VAR_18 = FUNC_2(VAR_11, VAR_8[VAR_22]);
 if (VAR_18 == ((void*)0)) {
  FUNC_15("Could not open temporary output file '%s~'\n", VAR_3);
  goto out;
 }


 while (FUNC_7(VAR_15, FUNC_0(VAR_15), VAR_17) != ((void*)0)) {

  VAR_19 = 0;


  VAR_19 += FUNC_19(&VAR_15[VAR_19], VAR_2);


  if (FUNC_1(&VAR_15[VAR_19], VAR_9, FUNC_18(VAR_9)) != 0) {
   FUNC_8(VAR_15, VAR_18);
   continue;
  }


  VAR_19 += FUNC_18(VAR_9);


  VAR_20 = FUNC_19(&VAR_15[VAR_19], VAR_2);
  if (VAR_20 == 0)
   continue;
  VAR_19 += VAR_20;

  VAR_16 = FUNC_20(&VAR_15[VAR_19], VAR_12);
  if (VAR_16 == ((void*)0)) {
   FUNC_8(VAR_15, VAR_18);
   continue;
  }

  VAR_19 = (VAR_16-VAR_15) + FUNC_18(VAR_12);
  *VAR_16 = 0;

  FUNC_11(VAR_18, L"%s%s%s", VAR_15, VAR_13, &VAR_15[VAR_19]);
  VAR_23 = (char*)VAR_6;
 }

out:
 if (VAR_17 != ((void*)0)) FUNC_5(VAR_17);
 if (VAR_18 != ((void*)0)) FUNC_5(VAR_18);


 if (VAR_23 != ((void*)0)) {

  VAR_17 = FUNC_2(VAR_11, L"rb");
  VAR_18 = FUNC_2(VAR_10, L"wb");

  if ((VAR_17 != ((void*)0)) && (VAR_18 != ((void*)0))) {
   VAR_21 = (VAR_22==2)?2:1;
   while(FUNC_9(VAR_24, VAR_21, 1, VAR_17) == 1) {
    if ((!VAR_7) || (VAR_24[0] != 0x0D))
     FUNC_12(VAR_24, VAR_21, 1, VAR_18);
   }
   FUNC_5(VAR_17);
   FUNC_5(VAR_18);
  } else {
   FUNC_15("Could not write '%s' - original file has been left unmodified.\n", VAR_3);
   VAR_23 = ((void*)0);
   if (VAR_17 != ((void*)0)) FUNC_5(VAR_17);
   if (VAR_18 != ((void*)0)) FUNC_5(VAR_18);
  }
 }
 if (VAR_11 != ((void*)0))
  FUNC_3(VAR_11);
 FUNC_13(VAR_10);
 FUNC_13(VAR_11);
 FUNC_13(VAR_9);
 FUNC_13(VAR_12);
 FUNC_13(VAR_13);

 return VAR_23;
}
