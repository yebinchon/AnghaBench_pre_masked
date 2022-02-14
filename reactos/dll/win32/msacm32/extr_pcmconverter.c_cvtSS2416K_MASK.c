
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned char const*) ;
 int FUNC_2 (char*,unsigned char const*,int,unsigned char*) ;
 int FUNC_3 (unsigned char*,int ) ;

__attribute__((used)) static void FUNC_4(const unsigned char* VAR_0, int VAR_1, unsigned char* VAR_2)
{
    FUNC_2("(%p, %d, %p)\n", VAR_0, VAR_1, VAR_2);

    while (VAR_1--) {
 FUNC_3(VAR_2, FUNC_0(FUNC_1(VAR_0))); VAR_2 += 2; VAR_0 += 3;
 FUNC_3(VAR_2, FUNC_0(FUNC_1(VAR_0))); VAR_2 += 2; VAR_0 += 3;
    }
}
