
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 short FUNC_0 (unsigned char const*) ;
 int FUNC_1 (char*,unsigned char const*,int,unsigned char*) ;
 int FUNC_2 (unsigned char*,short) ;

__attribute__((used)) static void FUNC_3(const unsigned char* VAR_0, int VAR_1, unsigned char* VAR_2)
{
    short VAR_3;
    FUNC_1("(%p, %d, %p)\n", VAR_0, VAR_1, VAR_2);

    while (VAR_1--) {
 VAR_3 = FUNC_0(VAR_0); VAR_0 += 2;
 FUNC_2(VAR_2, VAR_3); VAR_2 += 2;
 FUNC_2(VAR_2, VAR_3); VAR_2 += 2;
    }
}
