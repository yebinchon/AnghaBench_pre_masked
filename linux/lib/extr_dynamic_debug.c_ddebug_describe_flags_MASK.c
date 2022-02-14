
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct _ddebug {int flags; } ;
struct TYPE_3__ {int flag; int opt_char; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static char *FUNC_2(struct _ddebug *VAR_1, char *VAR_2,
        size_t VAR_3)
{
 char *VAR_4 = VAR_2;
 int VAR_5;

 FUNC_1(VAR_3 < 6);
 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); ++VAR_5)
  if (VAR_1->flags & VAR_0[VAR_5].flag)
   *VAR_4++ = VAR_0[VAR_5].opt_char;
 if (VAR_4 == VAR_2)
  *VAR_4++ = '_';
 *VAR_4 = '\0';

 return VAR_2;
}
