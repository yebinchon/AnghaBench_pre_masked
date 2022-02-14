
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint32 ;
struct tms {int dummy; } ;
struct timeval {int dummy; } ;
struct stat {int st_atime; int st_mtime; int st_ctime; } ;
typedef int MD5_CTX ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct timeval*,int *) ;
 int FUNC_9 () ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (int,int *,int) ;
 int FUNC_12 (char*,struct stat*) ;
 int FUNC_13 (struct tms*) ;

void
FUNC_14(uint8 * VAR_1)
{
 struct stat VAR_2;
 struct tms VAR_3;
 MD5_CTX VAR_4;
 uint32 *VAR_5;
 int VAR_6, VAR_7;


 if (((VAR_6 = FUNC_10("/dev/urandom", VAR_0)) != -1)
     || ((VAR_6 = FUNC_10("/dev/random", VAR_0)) != -1))
 {
  VAR_7 = FUNC_11(VAR_6, VAR_1, 32);
  FUNC_3(VAR_6);
  if (VAR_7 == 32)
   return;
 }
 VAR_5 = (uint32 *) VAR_1;
 VAR_5[0] = (FUNC_6()) | (FUNC_7() << 16);
 VAR_5[1] = (FUNC_9()) | (FUNC_5() << 16);
 VAR_5[2] = FUNC_13(&VAR_3);
 FUNC_8((struct timeval *) &VAR_5[3], ((void*)0));
 FUNC_12("/tmp", &VAR_2);
 VAR_5[5] = VAR_2.st_atime;
 VAR_5[6] = VAR_2.st_mtime;
 VAR_5[7] = VAR_2.st_ctime;


 FUNC_1(&VAR_4);
 FUNC_2(&VAR_4, VAR_1, 16);
 FUNC_0(VAR_1, &VAR_4);
 FUNC_2(&VAR_4, VAR_1 + 16, 16);
 FUNC_0(VAR_1 + 16, &VAR_4);
}
