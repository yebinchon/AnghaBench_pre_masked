
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (size_t) ;
 int FUNC_2 (char*) ;
 size_t FUNC_3 (char*) ;
 int FUNC_4 (int,int *,int *,size_t) ;
 size_t FUNC_5 (char*,char*,size_t) ;

__attribute__((used)) static void FUNC_6(int VAR_0, char *VAR_1)
{
 size_t VAR_2 = FUNC_3(VAR_1);
 uint8_t *VAR_3;
 uint8_t *VAR_4;

 VAR_3 = FUNC_1(VAR_2);
 if (!VAR_3)
  FUNC_2("can't allocate tx buffer");

 VAR_4 = FUNC_1(VAR_2);
 if (!VAR_4)
  FUNC_2("can't allocate rx buffer");

 VAR_2 = FUNC_5((char *)VAR_3, VAR_1, VAR_2);
 FUNC_4(VAR_0, VAR_3, VAR_4, VAR_2);
 FUNC_0(VAR_4);
 FUNC_0(VAR_3);
}
