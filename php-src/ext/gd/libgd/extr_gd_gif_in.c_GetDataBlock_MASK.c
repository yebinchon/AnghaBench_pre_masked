
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gdIOCtx ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned char*,int*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,int,char*) ;
 char* FUNC_4 (int,int,int) ;
 int FUNC_5 (char*,char*,unsigned char) ;

__attribute__((used)) static int
FUNC_6(gdIOCtx *VAR_2, unsigned char *VAR_3, int *VAR_4)
{
 int VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_2,VAR_3, VAR_4);
 if (VAR_1) {
  char *VAR_7 = ((void*)0);
  if (VAR_5 > 0) {
   VAR_7 = FUNC_4(3 * VAR_5, sizeof(char), 1);
   for (VAR_6=0;VAR_6<VAR_5;VAR_6++) {
    FUNC_5(&VAR_7[3*sizeof(char)*VAR_6], " %02x", VAR_3[VAR_6]);
   }
  } else {
   VAR_7 = FUNC_2("");
  }
  FUNC_3(VAR_0, "[GetDataBlock returning %d: %s]", VAR_5, VAR_7);
  FUNC_1(VAR_7);
 }
 return(VAR_5);
}
