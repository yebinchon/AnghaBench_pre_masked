
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* sec; int is_attachable; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static char *FUNC_5(bool VAR_2)
{
 int VAR_3, VAR_4 = FUNC_0(VAR_1) * VAR_0;
 char *VAR_5;

 VAR_5 = FUNC_2(VAR_4);
 if (!VAR_5)
  return ((void*)0);

 VAR_5[0] = '\0';

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  if (VAR_2 && !VAR_1[VAR_3].is_attachable)
   continue;

  if (FUNC_4(VAR_5) + FUNC_4(VAR_1[VAR_3].sec) + 2 > VAR_4) {
   FUNC_1(VAR_5);
   return ((void*)0);
  }
  FUNC_3(VAR_5, " ");
  FUNC_3(VAR_5, VAR_1[VAR_3].sec);
 }

 return VAR_5;
}
