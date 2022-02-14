
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (char*) ;

int FUNC_3(const char *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_1);
 if (VAR_3 == -1) {
  FUNC_2("Cannot open ctl_fd\n");
  goto error;
 }

 return VAR_3;

error:
 FUNC_0(VAR_0);
}
