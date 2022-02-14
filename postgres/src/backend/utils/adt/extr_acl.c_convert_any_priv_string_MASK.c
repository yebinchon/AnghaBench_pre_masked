
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int text ;
struct TYPE_3__ {scalar_t__ name; int value; } ;
typedef TYPE_1__ priv_map ;
typedef int AclMode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (unsigned char) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (scalar_t__,char*) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (int *) ;

__attribute__((used)) static AclMode
FUNC_9(text *VAR_2,
      const priv_map *VAR_3)
{
 AclMode VAR_4 = 0;
 char *VAR_5 = FUNC_8(VAR_2);
 char *VAR_6;
 char *VAR_7;


 for (VAR_6 = VAR_5; VAR_6; VAR_6 = VAR_7)
 {
  int VAR_8;
  const priv_map *VAR_9;


  VAR_7 = FUNC_6(VAR_6, ',');
  if (VAR_7)
   *VAR_7++ = '\0';


  while (*VAR_6 && FUNC_3((unsigned char) *VAR_6))
   VAR_6++;
  VAR_8 = FUNC_7(VAR_6);
  while (VAR_8 > 0 && FUNC_3((unsigned char) VAR_6[VAR_8 - 1]))
   VAR_8--;
  VAR_6[VAR_8] = '\0';


  for (VAR_9 = VAR_3; VAR_9->name; VAR_9++)
  {
   if (FUNC_5(VAR_9->name, VAR_6) == 0)
   {
    VAR_4 |= VAR_9->value;
    break;
   }
  }
  if (!VAR_9->name)
   FUNC_0(VAR_1,
     (FUNC_1(VAR_0),
      FUNC_2("unrecognized privilege type: \"%s\"", VAR_6)));
 }

 FUNC_4(VAR_5);
 return VAR_4;
}
