
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 char* VAR_4 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (char*,int ,int) ;
 int VAR_5 ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (void*,int ) ;
 int FUNC_8 (char*,char*,char*,char*) ;

__attribute__((used)) static void FUNC_9(char *VAR_6, char *VAR_7)
{
 int VAR_8;
 void *VAR_9;

 FUNC_8("%s %s %s\n", VAR_4, VAR_6, VAR_7);

 VAR_8 = FUNC_5("kern_memfd_share_mmap",
       VAR_5,
       VAR_3 | VAR_2);
 FUNC_2(VAR_8, 0);


 VAR_9 = FUNC_4(VAR_8);
 FUNC_6(VAR_8, VAR_1);
 FUNC_2(VAR_8, 0);
 FUNC_1(VAR_8, VAR_0);
 FUNC_2(VAR_8, VAR_0);
 FUNC_7(VAR_9, VAR_5);


 VAR_9 = FUNC_3(VAR_8);
 FUNC_1(VAR_8, VAR_1);
 FUNC_2(VAR_8, VAR_1 | VAR_0);
 FUNC_7(VAR_9, VAR_5);

 FUNC_0(VAR_8);
}
