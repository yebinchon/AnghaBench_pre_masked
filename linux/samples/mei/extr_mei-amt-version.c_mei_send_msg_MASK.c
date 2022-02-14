
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {unsigned long tv_sec; unsigned long tv_usec; } ;
struct mei {scalar_t__ fd; } ;
typedef int ssize_t ;
typedef int fd_set ;


 scalar_t__ FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (struct mei*) ;
 int FUNC_4 (struct mei*,char*,...) ;
 int FUNC_5 (struct mei*,char*,...) ;
 int FUNC_6 (scalar_t__,int *,int *,int *,struct timeval*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__,unsigned char const*,int ) ;

__attribute__((used)) static ssize_t FUNC_9(struct mei *VAR_1, const unsigned char *VAR_2,
   ssize_t VAR_3, unsigned long VAR_4)
{
 struct timeval VAR_5;
 ssize_t VAR_6;
 ssize_t VAR_7;
 fd_set VAR_8;

 VAR_5.tv_sec = VAR_4 / 1000;
 VAR_5.tv_usec = (VAR_4 % 1000) * 1000000;

 FUNC_5(VAR_1, "call write length = %zd\n", VAR_3);

 VAR_6 = FUNC_8(VAR_1->fd, VAR_2, VAR_3);
 if (VAR_6 < 0) {
  VAR_7 = -VAR_0;
  FUNC_4(VAR_1, "write failed with status %zd %s\n",
   VAR_6, FUNC_7(VAR_0));
  goto out;
 }

 FUNC_2(&VAR_8);
 FUNC_1(VAR_1->fd, &VAR_8);
 VAR_7 = FUNC_6(VAR_1->fd + 1 , &VAR_8, ((void*)0), ((void*)0), &VAR_5);
 if (VAR_7 > 0 && FUNC_0(VAR_1->fd, &VAR_8)) {
  FUNC_5(VAR_1, "write success\n");
 } else if (VAR_7 == 0) {
  FUNC_4(VAR_1, "write failed on timeout with status\n");
  goto out;
 } else {
  FUNC_4(VAR_1, "write failed on select with status %zd\n", VAR_7);
  goto out;
 }

 VAR_7 = VAR_6;
out:
 if (VAR_7 < 0)
  FUNC_3(VAR_1);

 return VAR_7;
}
