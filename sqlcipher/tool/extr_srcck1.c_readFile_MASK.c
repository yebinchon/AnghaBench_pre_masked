
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ,char*,...) ;
 size_t FUNC_4 (char*,int,long,int *) ;
 int FUNC_5 (int *,int ,int ) ;
 long FUNC_6 (int *) ;
 char* FUNC_7 (long) ;
 int FUNC_8 (int *) ;
 int VAR_1 ;

__attribute__((used)) static char *FUNC_9(const char *VAR_2){
  FILE *VAR_3;
  char *VAR_4;
  long VAR_5;
  size_t VAR_6;

  VAR_3 = FUNC_2(VAR_2, "rb");
  if( VAR_3==0 ){
    FUNC_3(VAR_1, "unable to open '%s' for reading\n", VAR_2);
    FUNC_0(1);
  }
  FUNC_5(VAR_3, 0, VAR_0);
  VAR_5 = FUNC_6(VAR_3);
  FUNC_8(VAR_3);
  VAR_4 = FUNC_7( VAR_5+1 );
  if( VAR_4==0 ){
    FUNC_3(VAR_1, "cannot allocate %d bytes to store '%s'\n",
            (int)(VAR_5+1), VAR_2);
    FUNC_0(1);
  }
  VAR_6 = FUNC_4(VAR_4, 1, VAR_5, VAR_3);
  FUNC_1(VAR_3);
  if( VAR_6!=(size_t)VAR_5 ){
    FUNC_3(VAR_1, "only read %d of %d bytes from '%s'\n",
           (int)VAR_6, (int)VAR_5, VAR_2);
    FUNC_0(1);
  }
  VAR_4[VAR_5] = 0;
  return VAR_4;
}
