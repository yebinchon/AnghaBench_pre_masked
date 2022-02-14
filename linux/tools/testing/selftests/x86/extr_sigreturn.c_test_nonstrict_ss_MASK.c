
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_4(void)
{
 FUNC_0(VAR_3);
 FUNC_0(VAR_2);
 FUNC_0(VAR_1);
 FUNC_0(VAR_0);
 FUNC_3(VAR_4, VAR_6, 0);

 VAR_5 = 0;

 FUNC_1("[RUN]\tClear UC_STRICT_RESTORE_SS and corrupt SS\n");
 FUNC_2(VAR_4);
 if (!VAR_5)
  FUNC_1("[OK]\tIt worked\n");

 return VAR_5;
}
