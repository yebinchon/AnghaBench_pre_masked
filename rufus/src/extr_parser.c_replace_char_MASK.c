
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (size_t) ;
 size_t FUNC_1 (char const*) ;

char* FUNC_2(const char* VAR_0, const char VAR_1, const char* VAR_2)
{
 size_t VAR_3, VAR_4, VAR_5, VAR_6=0, VAR_7 = FUNC_1(VAR_0), VAR_8 = FUNC_1(VAR_2);
 char* VAR_9;

 if ((VAR_0 == ((void*)0)) || (VAR_2 == ((void*)0)))
  return ((void*)0);
 for (VAR_3=0; VAR_3<VAR_7; VAR_3++) {
  if (VAR_0[VAR_3] == VAR_1)
   VAR_6++;
 }
 VAR_9 = (char*)FUNC_0(VAR_7 + VAR_6*VAR_8 + 1);
 if (VAR_9 == ((void*)0))
  return ((void*)0);
 for (VAR_3=0,VAR_4=0; VAR_3<VAR_7; VAR_3++) {
  if (VAR_0[VAR_3] == VAR_1) {
   for(VAR_5=0; VAR_5<VAR_8; VAR_5++)
    VAR_9[VAR_4++] = VAR_2[VAR_5];
  } else {




   VAR_9[VAR_4++] = VAR_0[VAR_3];
  }
 }
 VAR_9[VAR_4] = 0;
 return VAR_9;
}
