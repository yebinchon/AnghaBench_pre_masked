
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int ,int ,int ,int ,int,int ) ;
 int FUNC_4 (void*,int ) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,void*) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (void*) ;

int FUNC_11(void)
{
 void *VAR_8;
 int VAR_9, VAR_10;

 VAR_9 = FUNC_5(VAR_1, VAR_5 | VAR_6, 0755);
 if (VAR_9 < 0) {
  FUNC_6("Open failed");
  FUNC_2(1);
 }

 VAR_8 = FUNC_3(VAR_0, VAR_3, VAR_7, VAR_2, VAR_9, 0);
 if (VAR_8 == VAR_4) {
  FUNC_6("mmap");
  FUNC_9(VAR_1);
  FUNC_2(1);
 }

 FUNC_7("Returned address is %p\n", VAR_8);
 FUNC_0(VAR_8);
 FUNC_10(VAR_8);
 VAR_10 = FUNC_8(VAR_8);

 FUNC_4(VAR_8, VAR_3);
 FUNC_1(VAR_9);
 FUNC_9(VAR_1);

 return VAR_10;
}
