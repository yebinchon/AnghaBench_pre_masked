
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int key ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,char*,int ,...) ;
 int FUNC_1 (int ,int,int,int,int ) ;
 int FUNC_2 (int,long long*,long long*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(int VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 long long VAR_8, VAR_9;

 VAR_6 = FUNC_1(VAR_0, sizeof(VAR_8), sizeof(VAR_9),
       VAR_4, VAR_3);
 FUNC_0(VAR_6 < 0,
       "failed to create hashmap",
       "err: %s, flags: 0x%x\n", FUNC_3(VAR_2), VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_8 = VAR_5; VAR_9 = VAR_8;
  VAR_7 = FUNC_2(VAR_6, &VAR_8, &VAR_9, VAR_1);
  FUNC_0(VAR_7 != 0,
        "can't update hashmap",
        "err: %s\n", FUNC_3(VAR_7));
 }

 return VAR_6;
}
