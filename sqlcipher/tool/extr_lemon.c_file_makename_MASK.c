
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lemon {char* filename; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*,char const*) ;
 scalar_t__ FUNC_5 (int) ;
 char const* VAR_0 ;
 int VAR_1 ;
 char* FUNC_6 (char*,char) ;

char *FUNC_7(struct lemon *VAR_2, const char *VAR_3)
{
  char *VAR_4;
  char *VAR_5;
  char *VAR_6 = VAR_2->filename;
  int VAR_7;

  if( VAR_0 ){
    VAR_5 = FUNC_6(VAR_6, '/');
    if( VAR_5 ) VAR_6 = VAR_5 + 1;
  }
  VAR_7 = FUNC_2(VAR_6);
  VAR_7 += FUNC_2(VAR_3);
  if( VAR_0 ) VAR_7 += FUNC_2(VAR_0) + 1;
  VAR_7 += 5;
  VAR_4 = (char*)FUNC_5( VAR_7 );
  if( VAR_4==0 ){
    FUNC_1(VAR_1,"Can't allocate space for a filename.\n");
    FUNC_0(1);
  }
  VAR_4[0] = 0;
  if( VAR_0 ){
    FUNC_4(VAR_4, VAR_0);
    FUNC_3(VAR_4, "/");
  }
  FUNC_3(VAR_4,VAR_6);
  VAR_5 = FUNC_6(VAR_4,'.');
  if( VAR_5 ) *VAR_5 = 0;
  FUNC_3(VAR_4,VAR_3);
  return VAR_4;
}
