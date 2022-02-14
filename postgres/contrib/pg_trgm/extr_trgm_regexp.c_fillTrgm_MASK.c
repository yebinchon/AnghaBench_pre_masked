
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * bytes; } ;
typedef TYPE_1__ trgm_mb_char ;
typedef int trgm ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static void
FUNC_1(trgm *VAR_1, trgm_mb_char VAR_2[3])
{
 char VAR_3[3 * VAR_0],
      *VAR_4;
 int VAR_5,
    VAR_6;


 VAR_4 = VAR_3;

 for (VAR_5 = 0; VAR_5 < 3; VAR_5++)
 {
  if (VAR_2[VAR_5].bytes[0] != 0)
  {
   for (VAR_6 = 0; VAR_6 < VAR_0 && VAR_2[VAR_5].bytes[VAR_6]; VAR_6++)
    *VAR_4++ = VAR_2[VAR_5].bytes[VAR_6];
  }
  else
  {

   *VAR_4++ = ' ';
  }
 }


 FUNC_0(VAR_1, VAR_3, VAR_4 - VAR_3);
}
