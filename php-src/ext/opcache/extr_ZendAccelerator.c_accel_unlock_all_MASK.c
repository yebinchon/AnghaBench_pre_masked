
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flock {scalar_t__ l_len; scalar_t__ l_start; int l_whence; int l_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,struct flock*) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,int ) ;

__attribute__((used)) static inline void FUNC_4(void)
{



 struct flock VAR_6;

 VAR_6.l_type = VAR_2;
 VAR_6.l_whence = VAR_3;
 VAR_6.l_start = 0;
 VAR_6.l_len = 0;

 if (FUNC_1(VAR_5, VAR_1, &VAR_6) == -1) {
  FUNC_3(VAR_0, "UnlockAll:  %s (%d)", FUNC_2(VAR_4), VAR_4);
 }

}
