
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (char*,int,long,int *) ;
 int FUNC_4 (int *,int ,int ) ;
 long FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (long) ;

__attribute__((used)) static char *FUNC_8(const char *VAR_1){
  FILE *VAR_2 = FUNC_2(VAR_1, "rb");
  long VAR_3;
  char *VAR_4;
  if( VAR_2==0 ){
    FUNC_0("cannot open \"%s\" for reading", VAR_1);
  }
  FUNC_4(VAR_2, 0, VAR_0);
  VAR_3 = FUNC_5(VAR_2);
  FUNC_6(VAR_2);
  VAR_4 = FUNC_7( VAR_3+1 );
  VAR_3 = (long)FUNC_3(VAR_4, 1, VAR_3, VAR_2);
  VAR_4[VAR_3] = 0;
  FUNC_1(VAR_2);
  return VAR_4;
}
