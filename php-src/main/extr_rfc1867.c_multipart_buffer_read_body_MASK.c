
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int multipart_buffer ;
typedef int buf ;


 int VAR_0 ;
 char* FUNC_0 (char*,int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int *,char*,int,int *) ;

__attribute__((used)) static char *FUNC_3(multipart_buffer *VAR_1, size_t *VAR_2)
{
 char VAR_3[VAR_0], *VAR_4=((void*)0);
 int VAR_5=0, VAR_6=0;

 while((VAR_6 = FUNC_2(VAR_1, VAR_3, sizeof(VAR_3), ((void*)0)))) {
  VAR_4 = FUNC_0(VAR_4, VAR_5 + VAR_6 + 1);
  FUNC_1(VAR_4 + VAR_5, VAR_3, VAR_6);
  VAR_5 += VAR_6;
 }

 if (VAR_4) {
  VAR_4[VAR_5] = '\0';
 }
 *VAR_2 = VAR_5;

 return VAR_4;
}
