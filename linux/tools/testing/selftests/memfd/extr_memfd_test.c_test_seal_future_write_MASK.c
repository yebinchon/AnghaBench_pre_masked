
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 char* VAR_3 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_4 ;
 int FUNC_8 (int) ;
 int FUNC_9 (void*,int ) ;
 int FUNC_10 (char*,char*) ;

__attribute__((used)) static void FUNC_11(void)
{
 int VAR_5, VAR_6;
 void *VAR_7;

 FUNC_10("%s SEAL-FUTURE-WRITE\n", VAR_3);

 VAR_5 = FUNC_4("kern_memfd_seal_future_write",
       VAR_4,
       VAR_2 | VAR_1);

 VAR_7 = FUNC_3(VAR_5);

 FUNC_2(VAR_5, 0);

 FUNC_1(VAR_5, VAR_0);
 FUNC_2(VAR_5, VAR_0);


 FUNC_5(VAR_5);
 FUNC_6(VAR_5);
 FUNC_8(VAR_5);

 VAR_6 = FUNC_7(VAR_5);

 FUNC_5(VAR_6);
 FUNC_6(VAR_6);
 FUNC_8(VAR_6);

 FUNC_9(VAR_7, VAR_4);
 FUNC_0(VAR_6);
 FUNC_0(VAR_5);
}
