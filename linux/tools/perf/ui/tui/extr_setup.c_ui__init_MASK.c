
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int VAR_6 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 () ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_12 () ;
 int FUNC_13 () ;

int FUNC_14(void)
{
 int VAR_9;

 FUNC_6(-1);
 FUNC_5();
 FUNC_4();

 VAR_9 = FUNC_3();
 if (VAR_9 < 0)
  goto out;
 VAR_9 = FUNC_0(-1, 0, 0);
 if (VAR_9 < 0)
  goto out;

 VAR_9 = FUNC_2();
 if (VAR_9 < 0) {
  FUNC_9("TUI initialization failed.\n");
  goto out;
 }

 FUNC_1((char *)"^(kB)", VAR_5);

 FUNC_10(VAR_3, VAR_8);
 FUNC_10(VAR_0, VAR_8);
 FUNC_10(VAR_1, VAR_7);
 FUNC_10(VAR_2, VAR_7);
 FUNC_10(VAR_4, VAR_7);

 FUNC_8(&VAR_6);

 FUNC_13();
 FUNC_12();
 FUNC_11();

 FUNC_7();
out:
 return VAR_9;
}
