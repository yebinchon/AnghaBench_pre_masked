
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int key ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int,int,int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char*) ;
 char* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(unsigned int VAR_2, void *VAR_3)
{
 int VAR_4;
 __u32 VAR_5, VAR_6;

 VAR_4 = FUNC_0(VAR_0, sizeof(VAR_5), sizeof(VAR_6),
       2, 0);
 if (VAR_4 < 0) {
  FUNC_3("Failed to create devmap_hash '%s'!\n", FUNC_4(VAR_1));
  FUNC_2(1);
 }

 FUNC_1(VAR_4);
}
