
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_3__ {char* utf8; int pos; int edited; } ;
typedef TYPE_1__ editable_str ;


 int FUNC_0 (int*,char*) ;
 int FUNC_1 (char*,char*,size_t) ;
 size_t FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_0, int VAR_1, int VAR_2, editable_str *VAR_3)
{
 int VAR_4;

 if (VAR_3->utf8 == ((void*)0) || VAR_3->pos == -1)
  return;

 do
 {
  char *VAR_5 = &VAR_3->utf8[VAR_3->pos];
  size_t VAR_6;
  int VAR_7 = FUNC_0(&VAR_4, VAR_5);
  if (VAR_4 == VAR_1)
  {

   VAR_3->pos += VAR_7;
  }
  else if (VAR_1 == 32) {



   break;
  }
  else if (VAR_4 == 32) {




  }
  else
  {

   VAR_3->pos = -1;
   break;
  }
  if (VAR_2)
  {
   VAR_6 = FUNC_2(VAR_5+VAR_7);
   FUNC_1(VAR_5, VAR_5+VAR_7, VAR_6+1);
   VAR_3->edited = 1;
  }
 }
 while (VAR_4 != VAR_1);
}
