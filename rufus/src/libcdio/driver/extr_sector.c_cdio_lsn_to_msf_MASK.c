
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* f; void* s; void* m; } ;
typedef TYPE_1__ msf_t ;
typedef int lsn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;

void
FUNC_3 (lsn_t VAR_4, msf_t *VAR_5)
{
  int VAR_6, VAR_7, VAR_8;

  FUNC_0 (VAR_5 != 0);

  if ( VAR_4 >= -VAR_3 ){
    VAR_6 = (VAR_4 + VAR_3) / VAR_0;
    VAR_4 -= VAR_6 * VAR_0;
    VAR_7 = (VAR_4 + VAR_3) / VAR_1;
    VAR_4 -= VAR_7 * VAR_1;
    VAR_8 = VAR_4 + VAR_3;
  } else {
    VAR_6 = (VAR_4 + VAR_2) / VAR_0;
    VAR_4 -= VAR_6 * (VAR_0);
    VAR_7 = (VAR_4+VAR_2) / VAR_1;
    VAR_4 -= VAR_7 * VAR_1;
    VAR_8 = VAR_4 + VAR_2;
  }

  if (VAR_6 > 99) {
    FUNC_2 ("number of minutes (%d) truncated to 99.", VAR_6);
    VAR_6 = 99;
  }

  VAR_5->m = FUNC_1 (VAR_6);
  VAR_5->s = FUNC_1 (VAR_7);
  VAR_5->f = FUNC_1 (VAR_8);
}
