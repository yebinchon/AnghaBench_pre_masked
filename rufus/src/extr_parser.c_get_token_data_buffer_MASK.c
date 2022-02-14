
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int* FUNC_0 (int*,int*) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (char const*) ;
 char* FUNC_3 (int*) ;

char* FUNC_4(const char* VAR_2, unsigned int VAR_3, const char* VAR_4, size_t VAR_5)
{
 unsigned int VAR_6, VAR_7;
 wchar_t *VAR_8 = ((void*)0), *VAR_9 = ((void*)0), *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
 size_t VAR_12;
 BOOL VAR_13 = VAR_0;
 char* VAR_14 = ((void*)0);


 if ((VAR_2 == ((void*)0)) || (VAR_4 == ((void*)0)) || (VAR_5 <= 4) || (VAR_5 > 65536))
  goto out;


 if (VAR_4[VAR_5-1] != 0)
  goto out;

 VAR_10 = FUNC_2(VAR_4);
 VAR_8 = FUNC_2(VAR_2);
 if ((VAR_10 == ((void*)0)) || (VAR_8 == ((void*)0)))
  goto out;


 for (VAR_12=0,VAR_6=0,VAR_13=VAR_0; (VAR_6!=VAR_3)&&(!VAR_13); ) {
  VAR_11 = &VAR_10[VAR_12];

  for(VAR_7=0;((VAR_7>0)||((VAR_10[VAR_12]!=L'\n')&&(VAR_10[VAR_12]!=L'\r')))&&(VAR_10[VAR_12]!=0);VAR_12++) {
   if (VAR_10[VAR_12] == L'{') VAR_7++;
   if (VAR_10[VAR_12] == L'}') VAR_7--;
  }
  if (VAR_10[VAR_12]==0) {
   VAR_13 = VAR_1;
  } else {
   VAR_10[VAR_12++] = 0;
  }
  VAR_9 = FUNC_0(VAR_8, VAR_11);
  if (VAR_9 != ((void*)0)) {
   VAR_6++;
  }
 }
out:
 if (VAR_9 != ((void*)0))
  VAR_14 = FUNC_3(VAR_9);
 FUNC_1(VAR_10);
 FUNC_1(VAR_8);
 return VAR_14;
}
