
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int defname; } ;
typedef TYPE_1__ DefElem ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static char
FUNC_5(DefElem *VAR_5)
{
 char *VAR_6 = FUNC_0(VAR_5);

 if (FUNC_4(VAR_6, "read_only") == 0)
  return VAR_0;
 if (FUNC_4(VAR_6, "shareable") == 0)
  return VAR_2;
 if (FUNC_4(VAR_6, "read_write") == 0)
  return VAR_1;
 FUNC_1(VAR_4,
   (FUNC_2(VAR_3),
    FUNC_3("parameter \"%s\" must be READ_ONLY, SHAREABLE, or READ_WRITE",
     VAR_5->defname)));
 return 0;
}
