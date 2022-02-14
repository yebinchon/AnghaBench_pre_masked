
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;
typedef int bom ;
typedef int FILE ;


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
 int FUNC_10 (int *,char*,char*,...) ;
 int FUNC_11 (char*,size_t,int,int *) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,...) ;
 char* FUNC_14 (char const*) ;
 int FUNC_15 (char*,char*) ;
 size_t FUNC_16 (char*) ;
 scalar_t__ FUNC_17 (char*,int ) ;
 int VAR_2 ;

char* FUNC_18(const char* VAR_3, const char* VAR_4, const char* VAR_5)
{
 const wchar_t* VAR_6[] = { L"w", L"w, ccs=UTF-8", L"w, ccs=UTF-16LE" };
 wchar_t *VAR_7 = ((void*)0), *VAR_8 = ((void*)0), *VAR_9 = ((void*)0), *VAR_10 = ((void*)0), VAR_11 = 0;
 wchar_t VAR_12[1024];
 FILE *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
 size_t VAR_15, VAR_16;
 int VAR_17 = 0;
 char *VAR_18 = ((void*)0), VAR_19[2];

 if ((VAR_5 == ((void*)0)) || (VAR_3 == ((void*)0)) || (VAR_4 == ((void*)0)))
  return ((void*)0);
 if ((VAR_5[0] == 0) || (VAR_3[0] == 0) || (VAR_4[0] == 0))
  return ((void*)0);

 VAR_8 = FUNC_14(VAR_5);
 if (VAR_8 == ((void*)0)) {
  FUNC_13(VAR_1, VAR_5);
  goto out;
 }
 VAR_7 = FUNC_14(VAR_3);
 if (VAR_8 == ((void*)0)) {
  FUNC_13(VAR_1, VAR_3);
  goto out;
 }
 VAR_10 = FUNC_14(VAR_4);
 if (VAR_10 == ((void*)0)) {
  FUNC_13(VAR_1, VAR_4);
  goto out;
 }

 VAR_13 = FUNC_2(VAR_8, L"r, ccs=UNICODE");
 if (VAR_13 == ((void*)0)) {
  FUNC_13("Could not open file '%s'\n", VAR_5);
  goto out;
 }

 if (FUNC_8(&VAR_11, sizeof(VAR_11), 1, VAR_13) == 1) {
  switch(VAR_11) {
  case 0xFEFF:
   VAR_17 = 2;
   break;
  case 0xBBEF:
   VAR_17 = 1;
   break;
  default:
   VAR_17 = 0;
   break;
  }
  FUNC_9(VAR_13, 0, VAR_0);
 }

 VAR_9 = (wchar_t*)FUNC_4(FUNC_16(VAR_8)+2, sizeof(wchar_t));
 if (VAR_9 == ((void*)0)) {
  FUNC_13("Could not allocate space for temporary output name\n");
  goto out;
 }
 FUNC_15(VAR_9, VAR_8);
 VAR_9[FUNC_16(VAR_9)] = '~';

 VAR_14 = FUNC_2(VAR_9, VAR_6[VAR_17]);
 if (VAR_14 == ((void*)0)) {
  FUNC_13("Could not open temporary output file '%s~'\n", VAR_5);
  goto out;
 }


 while (FUNC_6(VAR_12, FUNC_0(VAR_12), VAR_13) != ((void*)0)) {

  VAR_15 = 0;


  VAR_15 += FUNC_17(&VAR_12[VAR_15], VAR_2);


  if ((VAR_12[VAR_15] == ';') || (VAR_12[VAR_15] == '[')) {
   FUNC_7(VAR_12, VAR_14);
   continue;
  }


  if (FUNC_1(&VAR_12[VAR_15], VAR_7, FUNC_16(VAR_7)) != 0) {
   FUNC_7(VAR_12, VAR_14);
   continue;
  }


  VAR_15 += FUNC_16(VAR_7);


  VAR_15 += FUNC_17(&VAR_12[VAR_15], VAR_2);


  if (VAR_12[VAR_15] != L'=') {
   FUNC_7(VAR_12, VAR_14);
   continue;
  }
  VAR_15++;


  VAR_15 += FUNC_17(&VAR_12[VAR_15], VAR_2);


  VAR_12[VAR_15] = 0;
  FUNC_7(VAR_12, VAR_14);



  FUNC_10(VAR_14, L"%s\n", VAR_10);
  VAR_18 = (char*)VAR_4;
 }

 if (VAR_18 == ((void*)0)) {


  FUNC_10(VAR_14, L"%s = %s\n", VAR_7, VAR_10);
  VAR_18 = (char*)VAR_4;
 }

out:
 if (VAR_13 != ((void*)0)) FUNC_5(VAR_13);
 if (VAR_14 != ((void*)0)) FUNC_5(VAR_14);


 if (VAR_18 != ((void*)0)) {

  VAR_13 = FUNC_2(VAR_9, L"rb");
  VAR_14 = FUNC_2(VAR_8, L"wb");

  if ((VAR_13 != ((void*)0)) && (VAR_14 != ((void*)0))) {
   VAR_16 = (VAR_17==2)?2:1;
   while(FUNC_8(VAR_19, VAR_16, 1, VAR_13) == 1)
    FUNC_11(VAR_19, VAR_16, 1, VAR_14);
   FUNC_5(VAR_13);
   FUNC_5(VAR_14);
  } else {
   FUNC_13("Could not write '%s' - original file has been left unmodified\n", VAR_5);
   VAR_18 = ((void*)0);
   if (VAR_13 != ((void*)0)) FUNC_5(VAR_13);
   if (VAR_14 != ((void*)0)) FUNC_5(VAR_14);
  }
 }
 if (VAR_9 != ((void*)0))
  FUNC_3(VAR_9);
 FUNC_12(VAR_8);
 FUNC_12(VAR_9);
 FUNC_12(VAR_7);
 FUNC_12(VAR_10);

 return VAR_18;
}
