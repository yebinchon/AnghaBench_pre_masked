
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;
typedef scalar_t__ off_t ;
typedef int buffer ;
typedef int MD5_CTX ;


 int VAR_0 ;
 char* FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char const*,int) ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int,struct stat*) ;
 scalar_t__ FUNC_6 (int,scalar_t__,int ) ;
 int FUNC_7 (char const*,int) ;
 int FUNC_8 (int,unsigned char*,scalar_t__) ;

char *FUNC_9(const char *VAR_5, char *VAR_6, off_t VAR_7, off_t VAR_8)
{
  unsigned char VAR_9[VAR_0];
  MD5_CTX VAR_10;
  struct stat VAR_11;
  int VAR_12, VAR_13, VAR_14;
  off_t VAR_15;

  FUNC_1(&VAR_10);



  VAR_12 = FUNC_7(VAR_5, VAR_2);

  if (VAR_12 < 0)
    return 0;
  if (FUNC_5(VAR_12, &VAR_11) < 0)
    return 0;
  if (VAR_7 > VAR_11.st_size)
    VAR_7 = VAR_11.st_size;
  if ((VAR_8 == 0) || (VAR_8 > VAR_11.st_size - VAR_7))
    VAR_8 = VAR_11.st_size - VAR_7;
  if (FUNC_6(VAR_12, VAR_7, VAR_3) < 0)
    return 0;
  VAR_15 = VAR_8;
  VAR_13 = 0;
  while (VAR_15 > 0) {
    if (VAR_15 > sizeof(VAR_9))
      VAR_13 = FUNC_8(VAR_12, VAR_9, sizeof(VAR_9));
    else
      VAR_13 = FUNC_8(VAR_12, VAR_9, VAR_15);
    if (VAR_13 < 0)
      break;
    FUNC_2(&VAR_10, VAR_9, VAR_13);
    VAR_15 -= VAR_13;
  }
  VAR_14 = VAR_4;
  FUNC_4(VAR_12);
  VAR_4 = VAR_14;
  if (VAR_13 < 0)
    return 0;
  return (FUNC_0(&VAR_10, VAR_6));
}
