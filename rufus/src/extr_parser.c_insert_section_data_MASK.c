
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
 scalar_t__ FUNC_1 (char*,char*,size_t) ;
 int * FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int,int) ;
 char* VAR_1 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,int ,int *) ;
 int FUNC_7 (char*,int *) ;
 int FUNC_8 (char*,size_t,int,int *) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *,char*,char*) ;
 int FUNC_11 (char*,size_t,int,int *) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,...) ;
 char* FUNC_14 (char const*) ;
 int FUNC_15 (char*,char*) ;
 size_t FUNC_16 (char*) ;
 scalar_t__ FUNC_17 (char*,int ) ;
 int VAR_2 ;

char* FUNC_18(const char* VAR_3, const char* VAR_4, const char* VAR_5, BOOL VAR_6)
{
 const wchar_t* VAR_7[] = { L"w", L"w, ccs=UTF-8", L"w, ccs=UTF-16LE" };
 wchar_t *VAR_8 = ((void*)0), *VAR_9 = ((void*)0), *VAR_10 = ((void*)0), *VAR_11 = ((void*)0), VAR_12 = 0;
 wchar_t VAR_13[1024];
 FILE *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
 size_t VAR_16, VAR_17;
 int VAR_18 = 0;
 char *VAR_19 = ((void*)0), VAR_20[2];

 if ((VAR_3 == ((void*)0)) || (VAR_4 == ((void*)0)) || (VAR_5 == ((void*)0)))
  return ((void*)0);
 if ((VAR_3[0] == 0) || (VAR_4[0] == 0) || (VAR_5[0] == 0))
  return ((void*)0);

 VAR_9 = FUNC_14(VAR_3);
 if (VAR_9 == ((void*)0)) {
  FUNC_13(VAR_1, VAR_3);
  goto out;
 }
 VAR_8 = FUNC_14(VAR_4);
 if (VAR_9 == ((void*)0)) {
  FUNC_13(VAR_1, VAR_4);
  goto out;
 }
 VAR_11 = FUNC_14(VAR_5);
 if (VAR_11 == ((void*)0)) {
  FUNC_13(VAR_1, VAR_5);
  goto out;
 }

 VAR_14 = FUNC_2(VAR_9, L"r, ccs=UNICODE");
 if (VAR_14 == ((void*)0)) {
  FUNC_13("Could not open file '%s'\n", VAR_3);
  goto out;
 }

 if (FUNC_8(&VAR_12, sizeof(VAR_12), 1, VAR_14) != 1) {
  FUNC_13("Could not read file '%s'\n", VAR_3);
  goto out;
 }
 switch(VAR_12) {
 case 0xFEFF:
  VAR_18 = 2;
  break;
 case 0xBBEF:
  VAR_18 = 1;
  break;
 default:
  VAR_18 = 0;
  break;
 }
 FUNC_9(VAR_14, 0, VAR_0);



 VAR_10 = (wchar_t*)FUNC_4(FUNC_16(VAR_9)+2, sizeof(wchar_t));
 if (VAR_10 == ((void*)0)) {
  FUNC_13("Could not allocate space for temporary output name\n");
  goto out;
 }
 FUNC_15(VAR_10, VAR_9);
 VAR_10[FUNC_16(VAR_10)] = '~';

 VAR_15 = FUNC_2(VAR_10, VAR_7[VAR_18]);
 if (VAR_15 == ((void*)0)) {
  FUNC_13("Could not open temporary output file '%s~'\n", VAR_3);
  goto out;
 }


 while (FUNC_6(VAR_13, FUNC_0(VAR_13), VAR_14) != ((void*)0)) {

  VAR_16 = 0;


  VAR_16 += FUNC_17(&VAR_13[VAR_16], VAR_2);


  if (FUNC_1(&VAR_13[VAR_16], VAR_8, FUNC_16(VAR_8)) != 0) {
   FUNC_7(VAR_13, VAR_15);
   continue;
  }


  FUNC_7(VAR_13, VAR_15);


  FUNC_10(VAR_15, L"%s\n", VAR_11);
  VAR_19 = (char*)VAR_5;
 }

out:
 if (VAR_14 != ((void*)0)) FUNC_5(VAR_14);
 if (VAR_15 != ((void*)0)) FUNC_5(VAR_15);


 if (VAR_19 != ((void*)0)) {

  VAR_14 = FUNC_2(VAR_10, L"rb");
  VAR_15 = FUNC_2(VAR_9, L"wb");

  if ((VAR_14 != ((void*)0)) && (VAR_15 != ((void*)0))) {
   VAR_17 = (VAR_18==2)?2:1;
   while(FUNC_8(VAR_20, VAR_17, 1, VAR_14) == 1) {
    if ((!VAR_6) || (VAR_20[0] != 0x0D))
     FUNC_11(VAR_20, VAR_17, 1, VAR_15);
   }
   FUNC_5(VAR_14);
   FUNC_5(VAR_15);
  } else {
   FUNC_13("Could not write '%s' - original file has been left unmodified\n", VAR_3);
   VAR_19 = ((void*)0);
   if (VAR_14 != ((void*)0)) FUNC_5(VAR_14);
   if (VAR_15 != ((void*)0)) FUNC_5(VAR_15);
  }
 }
 if (VAR_10 != ((void*)0))
  FUNC_3(VAR_10);
 FUNC_12(VAR_9);
 FUNC_12(VAR_10);
 FUNC_12(VAR_8);
 FUNC_12(VAR_11);

 return VAR_19;
}
