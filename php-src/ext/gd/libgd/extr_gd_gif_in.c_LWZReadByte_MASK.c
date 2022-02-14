
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gdIOCtx ;
typedef int LZW_STATIC_DATA ;


 int FUNC_0 (int *,int *,char,int,int*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,char,int,int) ;

__attribute__((used)) static int
FUNC_2(gdIOCtx *VAR_1, LZW_STATIC_DATA *VAR_2, char VAR_3, int VAR_4, int *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_0) FUNC_1("[LWZReadByte(,%d,%d) returning %d]\n",VAR_3,VAR_4,VAR_6);
 return(VAR_6);
}
