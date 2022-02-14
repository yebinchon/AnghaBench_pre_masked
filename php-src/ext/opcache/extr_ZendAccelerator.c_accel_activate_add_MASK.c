
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flock {int l_start; int l_len; int l_whence; int l_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,struct flock*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ,int ) ;

__attribute__((used)) static inline int FUNC_6(void)
{





 struct flock VAR_9;

 VAR_9.l_type = VAR_2;
 VAR_9.l_whence = VAR_4;
 VAR_9.l_start = 1;
 VAR_9.l_len = 1;

 if (FUNC_3(VAR_7, VAR_3, &VAR_9) == -1) {
  FUNC_5(VAR_0, "UpdateC(+1):  %s (%d)", FUNC_4(VAR_6), VAR_6);
  return VAR_1;
 }

 return VAR_5;
}
