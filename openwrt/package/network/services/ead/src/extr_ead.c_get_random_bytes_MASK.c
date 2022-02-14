
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,void*,int) ;

__attribute__((used)) static void
FUNC_5(void *VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2("/dev/urandom", VAR_0);
 if (VAR_3 < 0) {
  FUNC_3("open");
  FUNC_1(1);
 }
 FUNC_4(VAR_3, VAR_1, VAR_2);
 FUNC_0(VAR_3);
}
