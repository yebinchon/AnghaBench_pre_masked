
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int y; int x; } ;
typedef TYPE_1__ Point ;


 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*,char const*) ;
 scalar_t__ FUNC_3 (unsigned char) ;
 int FUNC_4 (char*,int *,int *,char**,char const*,char const*) ;
 char* FUNC_5 (char*,char) ;

__attribute__((used)) static void
FUNC_6(char *VAR_7, bool VAR_8, int VAR_9, Point *VAR_10,
   bool *VAR_11, char **VAR_12,
   const char *VAR_13, const char *VAR_14)
{
 int VAR_15 = 0;
 char *VAR_16;
 int VAR_17;

 while (FUNC_3((unsigned char) *VAR_7))
  VAR_7++;
 if ((*VAR_11 = (*VAR_7 == VAR_4)))
 {

  if (!VAR_8)
   FUNC_0(VAR_2,
     (FUNC_1(VAR_1),
      FUNC_2("invalid input syntax for type %s: \"%s\"",
       VAR_13, VAR_14)));
  VAR_15++;
  VAR_7++;
 }
 else if (*VAR_7 == VAR_3)
 {
  VAR_16 = (VAR_7 + 1);
  while (FUNC_3((unsigned char) *VAR_16))
   VAR_16++;
  if (*VAR_16 == VAR_3)
  {
   VAR_15++;
   VAR_7 = VAR_16;
  }
  else if (FUNC_5(VAR_7, VAR_3) == VAR_7)
  {
   VAR_15++;
   VAR_7 = VAR_16;
  }
 }

 for (VAR_17 = 0; VAR_17 < VAR_9; VAR_17++)
 {
  FUNC_4(VAR_7, &(VAR_10->x), &(VAR_10->y), &VAR_7, VAR_13, VAR_14);
  if (*VAR_7 == VAR_0)
   VAR_7++;
  VAR_10++;
 }

 while (VAR_15 > 0)
 {
  if (*VAR_7 == VAR_5 || (*VAR_7 == VAR_6 && *VAR_11 && VAR_15 == 1))
  {
   VAR_15--;
   VAR_7++;
   while (FUNC_3((unsigned char) *VAR_7))
    VAR_7++;
  }
  else
   FUNC_0(VAR_2,
     (FUNC_1(VAR_1),
      FUNC_2("invalid input syntax for type %s: \"%s\"",
       VAR_13, VAR_14)));
 }


 if (VAR_12)
  *VAR_12 = VAR_7;
 else if (*VAR_7 != '\0')
  FUNC_0(VAR_2,
    (FUNC_1(VAR_1),
     FUNC_2("invalid input syntax for type %s: \"%s\"",
      VAR_13, VAR_14)));
}
