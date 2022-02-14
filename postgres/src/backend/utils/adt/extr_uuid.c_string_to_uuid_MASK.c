
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* data; } ;
typedef TYPE_1__ pg_uuid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,char const*) ;
 int FUNC_3 (unsigned char) ;
 int FUNC_4 (char*,char const*,int) ;
 scalar_t__ FUNC_5 (char*,int *,int) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_3, pg_uuid_t *VAR_4)
{
 const char *VAR_5 = VAR_3;
 bool VAR_6 = 0;
 int VAR_7;

 if (VAR_5[0] == '{')
 {
  VAR_5++;
  VAR_6 = 1;
 }

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
 {
  char VAR_8[3];

  if (VAR_5[0] == '\0' || VAR_5[1] == '\0')
   goto syntax_error;
  FUNC_4(VAR_8, VAR_5, 2);
  if (!FUNC_3((unsigned char) VAR_8[0]) ||
   !FUNC_3((unsigned char) VAR_8[1]))
   goto syntax_error;

  VAR_8[2] = '\0';
  VAR_4->data[VAR_7] = (unsigned char) FUNC_5(VAR_8, ((void*)0), 16);
  VAR_5 += 2;
  if (VAR_5[0] == '-' && (VAR_7 % 2) == 1 && VAR_7 < VAR_2 - 1)
   VAR_5++;
 }

 if (VAR_6)
 {
  if (*VAR_5 != '}')
   goto syntax_error;
  VAR_5++;
 }

 if (*VAR_5 != '\0')
  goto syntax_error;

 return;

syntax_error:
 FUNC_0(VAR_1,
   (FUNC_1(VAR_0),
    FUNC_2("invalid input syntax for type %s: \"%s\"",
     "uuid", VAR_3)));
}
