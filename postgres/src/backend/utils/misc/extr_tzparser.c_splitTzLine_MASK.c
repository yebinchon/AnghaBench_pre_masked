
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lineno; char const* filename; int is_dst; int offset; int * zone; void* abbrev; } ;
typedef TYPE_1__ tzEntry ;


 int FUNC_0 (char*,char const*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 void* FUNC_3 (char*) ;
 char* FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,char**,int) ;

__attribute__((used)) static bool
FUNC_6(const char *VAR_1, int VAR_2, char *VAR_3, tzEntry *VAR_4)
{
 char *VAR_5;
 char *VAR_6;
 char *VAR_7;
 char *VAR_8;
 char *VAR_9;

 VAR_4->lineno = VAR_2;
 VAR_4->filename = VAR_1;

 VAR_5 = FUNC_4(VAR_3, VAR_0);
 if (!VAR_5)
 {
  FUNC_0("missing time zone abbreviation in time zone file \"%s\", line %d",
       VAR_1, VAR_2);
  return 0;
 }
 VAR_4->abbrev = FUNC_3(VAR_5);

 VAR_6 = FUNC_4(((void*)0), VAR_0);
 if (!VAR_6)
 {
  FUNC_0("missing time zone offset in time zone file \"%s\", line %d",
       VAR_1, VAR_2);
  return 0;
 }


 if (FUNC_1((unsigned char) *VAR_6) || *VAR_6 == '+' || *VAR_6 == '-')
 {
  VAR_4->zone = ((void*)0);
  VAR_4->offset = FUNC_5(VAR_6, &VAR_7, 10);
  if (VAR_7 == VAR_6 || *VAR_7 != '\0')
  {
   FUNC_0("invalid number for time zone offset in time zone file \"%s\", line %d",
        VAR_1, VAR_2);
   return 0;
  }

  VAR_9 = FUNC_4(((void*)0), VAR_0);
  if (VAR_9 && FUNC_2(VAR_9, "D") == 0)
  {
   VAR_4->is_dst = 1;
   VAR_8 = FUNC_4(((void*)0), VAR_0);
  }
  else
  {

   VAR_4->is_dst = 0;
   VAR_8 = VAR_9;
  }
 }
 else
 {





  VAR_4->zone = FUNC_3(VAR_6);
  VAR_4->offset = 0;
  VAR_4->is_dst = 0;
  VAR_8 = FUNC_4(((void*)0), VAR_0);
 }

 if (!VAR_8)
  return 1;

 if (VAR_8[0] != '#')
 {
  FUNC_0("invalid syntax in time zone file \"%s\", line %d",
       VAR_1, VAR_2);
  return 0;
 }
 return 1;
}
