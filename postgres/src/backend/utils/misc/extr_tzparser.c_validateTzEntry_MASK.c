
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int offset; scalar_t__ abbrev; int lineno; int filename; } ;
typedef TYPE_1__ tzEntry ;


 int FUNC_0 (char*,int,scalar_t__,int ,...) ;
 scalar_t__ VAR_0 ;
 unsigned char FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_3(tzEntry *VAR_1)
{
 unsigned char *VAR_2;




 if (FUNC_2(VAR_1->abbrev) > VAR_0)
 {
  FUNC_0("time zone abbreviation \"%s\" is too long (maximum %d characters) in time zone file \"%s\", line %d",
       VAR_1->abbrev, VAR_0,
       VAR_1->filename, VAR_1->lineno);
  return 0;
 }




 if (VAR_1->offset > 14 * 60 * 60 ||
  VAR_1->offset < -14 * 60 * 60)
 {
  FUNC_0("time zone offset %d is out of range in time zone file \"%s\", line %d",
       VAR_1->offset,
       VAR_1->filename, VAR_1->lineno);
  return 0;
 }




 for (VAR_2 = (unsigned char *) VAR_1->abbrev; *VAR_2; VAR_2++)
  *VAR_2 = FUNC_1(*VAR_2);

 return 1;
}
