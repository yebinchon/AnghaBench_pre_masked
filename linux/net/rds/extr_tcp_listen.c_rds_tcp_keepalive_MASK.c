
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
typedef int keepidle ;
typedef int keepcnt ;
typedef int keepalive ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct socket*,int ,int ,char*,int) ;

int FUNC_1(struct socket *VAR_6)
{

 int VAR_7 = 5;
 int VAR_8 = 5;
 int VAR_9 = 1;
 int VAR_10 = 0;

 VAR_10 = FUNC_0(VAR_6, VAR_1, VAR_2,
    (char *)&VAR_9, sizeof(VAR_9));
 if (VAR_10 < 0)
  goto bail;

 VAR_10 = FUNC_0(VAR_6, VAR_0, VAR_3,
    (char *)&VAR_8, sizeof(VAR_8));
 if (VAR_10 < 0)
  goto bail;

 VAR_10 = FUNC_0(VAR_6, VAR_0, VAR_4,
    (char *)&VAR_7, sizeof(VAR_7));
 if (VAR_10 < 0)
  goto bail;




 VAR_10 = FUNC_0(VAR_6, VAR_0, VAR_5,
    (char *)&VAR_7, sizeof(VAR_7));
bail:
 return VAR_10;
}
