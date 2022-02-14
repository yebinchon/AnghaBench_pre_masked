
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int errorMessage; } ;
typedef TYPE_1__ PGconn ;


 int FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char const*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static size_t
FUNC_5(PGconn *VAR_0,
        char *VAR_1, const char *VAR_2, size_t VAR_3,
        int *VAR_4,
        int VAR_5, bool VAR_6)
{
 const char *VAR_7 = VAR_2;
 char *VAR_8 = VAR_1;
 size_t VAR_9 = VAR_3;

 if (VAR_4)
  *VAR_4 = 0;

 while (VAR_9 > 0 && *VAR_7 != '\0')
 {
  char VAR_10 = *VAR_7;
  int VAR_11;
  int VAR_12;


  if (!FUNC_0(VAR_10))
  {

   if (FUNC_1(VAR_10, !VAR_6))
    *VAR_8++ = VAR_10;

   *VAR_8++ = VAR_10;
   VAR_7++;
   VAR_9--;
   continue;
  }


  VAR_11 = FUNC_3(VAR_5, VAR_7);


  for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
  {
   if (VAR_9 == 0 || *VAR_7 == '\0')
    break;
   *VAR_8++ = *VAR_7++;
   VAR_9--;
  }
  if (VAR_12 < VAR_11)
  {
   if (VAR_4)
    *VAR_4 = 1;
   if (VAR_0)
    FUNC_4(&VAR_0->errorMessage,
          FUNC_2("incomplete multibyte character\n"));
   for (; VAR_12 < VAR_11; VAR_12++)
   {
    if (((size_t) (VAR_8 - VAR_1)) / 2 >= VAR_3)
     break;
    *VAR_8++ = ' ';
   }
   break;
  }
 }


 *VAR_8 = '\0';

 return VAR_8 - VAR_1;
}
