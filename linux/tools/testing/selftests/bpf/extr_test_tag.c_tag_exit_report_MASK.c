
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,char*) ;
 int FUNC_2 (char*,int *,int ) ;

__attribute__((used)) static void FUNC_3(int VAR_0, int VAR_1, uint8_t *VAR_2,
       uint8_t *VAR_3, uint32_t VAR_4)
{
 FUNC_1("Program tag mismatch for %d insns%s!\n", VAR_0,
        VAR_1 < 0 ? "" : " with map");

 FUNC_2("  fdinfo result: ", VAR_2, VAR_4);
 FUNC_2("  af_alg result: ", VAR_3, VAR_4);
 FUNC_0(1);
}
