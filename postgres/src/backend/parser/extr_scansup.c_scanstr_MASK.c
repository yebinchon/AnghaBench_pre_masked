
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 char* FUNC_1 (int) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char const*) ;

char *
FUNC_4(const char *VAR_0)
{
 char *VAR_1;
 int VAR_2,
    VAR_3,
    VAR_4;

 if (VAR_0 == ((void*)0) || VAR_0[0] == '\0')
  return FUNC_2("");

 VAR_2 = FUNC_3(VAR_0);

 VAR_1 = FUNC_1(VAR_2 + 1);

 for (VAR_3 = 0, VAR_4 = 0; VAR_3 < VAR_2; VAR_3++)
 {
  if (VAR_0[VAR_3] == '\'')
  {




   VAR_3++;

   FUNC_0(VAR_0[VAR_3] == '\'');
   VAR_1[VAR_4] = VAR_0[VAR_3];
  }
  else if (VAR_0[VAR_3] == '\\')
  {
   VAR_3++;
   switch (VAR_0[VAR_3])
   {
    case 'b':
     VAR_1[VAR_4] = '\b';
     break;
    case 'f':
     VAR_1[VAR_4] = '\f';
     break;
    case 'n':
     VAR_1[VAR_4] = '\n';
     break;
    case 'r':
     VAR_1[VAR_4] = '\r';
     break;
    case 't':
     VAR_1[VAR_4] = '\t';
     break;
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
     {
      int VAR_5;
      long VAR_6 = 0;

      for (VAR_5 = 0;
        VAR_0[VAR_3 + VAR_5] >= '0' && VAR_0[VAR_3 + VAR_5] <= '7' && VAR_5 < 3;
        VAR_5++)
       VAR_6 = (VAR_6 << 3) + (VAR_0[VAR_3 + VAR_5] - '0');
      VAR_3 += VAR_5 - 1;
      VAR_1[VAR_4] = ((char) VAR_6);
     }
     break;
    default:
     VAR_1[VAR_4] = VAR_0[VAR_3];
     break;
   }
  }
  else
   VAR_1[VAR_4] = VAR_0[VAR_3];
  VAR_4++;
 }
 VAR_1[VAR_4] = '\0';
 return VAR_1;
}
