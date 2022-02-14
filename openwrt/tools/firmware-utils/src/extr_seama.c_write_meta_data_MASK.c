
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 size_t FUNC_0 (char*,int,int,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static size_t FUNC_3(FILE * VAR_0, char * VAR_1[], size_t VAR_2)
{
 size_t VAR_3,VAR_4;
 size_t VAR_5 = 0;

 for (VAR_3=0; VAR_3<VAR_2; VAR_3++)
 {
  FUNC_2("SEAMA META data : %s\n", VAR_1[VAR_3]);
  VAR_4 = FUNC_0(VAR_1[VAR_3], sizeof(char), FUNC_1(VAR_1[VAR_3])+1, VAR_0);
  if (VAR_4 != FUNC_1(VAR_1[VAR_3])+1) return 0;
  VAR_5 += VAR_4;
 }

 VAR_4 = ((VAR_5+3)/4)*4;
 for ( ; VAR_5 < VAR_4; VAR_5++)
  FUNC_0("", sizeof(char), 1, VAR_0);

 return VAR_5;
}
