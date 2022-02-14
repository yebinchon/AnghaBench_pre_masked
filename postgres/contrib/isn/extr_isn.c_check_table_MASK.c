
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (unsigned char) ;

__attribute__((used)) static bool
FUNC_2(const char *(*VAR_1)[2], const unsigned VAR_2[10][2])
{
 const char *VAR_3,
      *VAR_4;
 int VAR_5,
    VAR_6,
    VAR_7 = 0,
    VAR_8 = -1,
    VAR_9 = 0,
    VAR_10,
    VAR_11 = 0;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
  return 1;

 while (VAR_1[VAR_9][0] && VAR_1[VAR_9][1])
 {
  VAR_3 = VAR_1[VAR_9][0];
  VAR_4 = VAR_1[VAR_9][1];


  if (!FUNC_1((unsigned char) *VAR_3) || !FUNC_1((unsigned char) *VAR_4))
   goto invalidtable;
  VAR_5 = *VAR_3 - '0';
  VAR_6 = *VAR_4 - '0';


  while (*VAR_3 && *VAR_4)
  {
   if (!(FUNC_1((unsigned char) *VAR_3) &&
      FUNC_1((unsigned char) *VAR_4)) &&
    (*VAR_3 != *VAR_4 || *VAR_3 != '-'))
    goto invalidtable;
   VAR_3++;
   VAR_4++;
  }
  if (*VAR_3 != *VAR_4)
   goto invalidtable;


  if (VAR_5 > VAR_8)
  {

   for (VAR_10 = VAR_7; VAR_10 <= VAR_8; VAR_10++)
   {
    if (VAR_2[VAR_10][0] != VAR_11)
     goto invalidindex;
    if (VAR_2[VAR_10][1] != VAR_9 - VAR_11)
     goto invalidindex;
   }
   VAR_11 = VAR_9;
   VAR_7 = VAR_5;
  }


  VAR_8 = VAR_6;
  if (VAR_8 < VAR_7)
   goto invalidtable;
  VAR_9++;
 }

 return 1;

invalidtable:
 FUNC_0(VAR_0, "invalid table near {\"%s\", \"%s\"} (pos: %d)",
   VAR_1[VAR_9][0], VAR_1[VAR_9][1], VAR_9);
 return 0;

invalidindex:
 FUNC_0(VAR_0, "index %d is invalid", VAR_10);
 return 0;
}
