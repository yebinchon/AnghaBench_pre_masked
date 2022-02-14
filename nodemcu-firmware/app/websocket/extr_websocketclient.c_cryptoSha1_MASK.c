
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int SHA1_CTX ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,unsigned int) ;
 scalar_t__ FUNC_3 (int,int) ;

__attribute__((used)) static char *FUNC_4(char *VAR_0, unsigned int VAR_1) {
  SHA1_CTX VAR_2;
  FUNC_1(&VAR_2);
  FUNC_2(&VAR_2, VAR_0, VAR_1);

  uint8_t *VAR_3 = (uint8_t *) FUNC_3(1,20);
  FUNC_0(VAR_3, &VAR_2);
  return (char *) VAR_3;
}
