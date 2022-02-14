
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,char*,int,int,int,int) ;
 int FUNC_2 (char*,char*) ;
 size_t FUNC_3 (char*) ;

__attribute__((used)) static char *FUNC_4 (const unsigned char *VAR_1, char *VAR_2, size_t VAR_3)
{
  size_t VAR_4;
  char VAR_5[sizeof "255.255.255.255"];

  VAR_5[0] = '\0';
  (void)FUNC_1(VAR_5, sizeof(VAR_5), "%d.%d.%d.%d",
          ((int)((unsigned char)VAR_1[3])) & 0xff,
          ((int)((unsigned char)VAR_1[2])) & 0xff,
          ((int)((unsigned char)VAR_1[1])) & 0xff,
          ((int)((unsigned char)VAR_1[0])) & 0xff);

  VAR_4 = FUNC_3(VAR_5);
  if(VAR_4 == 0 || VAR_4 >= VAR_3)
  {
    FUNC_0(VAR_0);
    return (((void*)0));
  }
  FUNC_2(VAR_2, VAR_5);
  return VAR_2;
}
