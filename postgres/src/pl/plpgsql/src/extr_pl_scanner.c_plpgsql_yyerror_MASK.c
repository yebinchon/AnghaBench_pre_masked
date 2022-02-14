
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* scanbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,...) ;
 int FUNC_4 (int) ;
 size_t VAR_3 ;
 int VAR_4 ;

void
FUNC_5(const char *VAR_5)
{
 char *VAR_6 = VAR_2.scanbuf + VAR_4;

 if (*VAR_6 == '\0')
 {
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),

     FUNC_3("%s at end of input", FUNC_0(VAR_5)),
     FUNC_4(VAR_4)));
 }
 else
 {






  VAR_6[VAR_3] = '\0';

  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),

     FUNC_3("%s at or near \"%s\"", FUNC_0(VAR_5), VAR_6),
     FUNC_4(VAR_4)));
 }
}
