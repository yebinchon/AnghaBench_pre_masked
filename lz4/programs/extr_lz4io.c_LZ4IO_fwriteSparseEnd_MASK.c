
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned int,int ) ;
 size_t FUNC_2 (char const*,int,int,int *) ;

__attribute__((used)) static void FUNC_3(FILE* VAR_1, unsigned VAR_2)
{
    if (VAR_2>0) {
        int const VAR_3 = FUNC_1(VAR_1, VAR_2-1, VAR_0);
        if (VAR_3 != 0) FUNC_0(69, "Final skip error (sparse file)\n");
        { const char VAR_4[1] = { 0 };
            size_t const VAR_5 = FUNC_2(VAR_4, 1, 1, VAR_1);
            if (VAR_5 != 1) FUNC_0(69, "Write error : cannot write last zero\n");
    } }
}
