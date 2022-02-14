
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ count; scalar_t__ buffer; int sector; int offset; int * file; } ;
typedef int FILE ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,int,int,int *) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static BOOL FUNC_3(FILE *VAR_6, DWORD VAR_7)
{
    if (VAR_5.file != ((void*)0))
    {
        int VAR_8;

        FUNC_2(VAR_6, 0, VAR_3);
        while (VAR_7 > 0)
        {
            VAR_8 = VAR_0 - VAR_5.count;
            if ((DWORD)VAR_8 > VAR_7)
                VAR_8 = VAR_7;

            if (FUNC_1(VAR_5.buffer + VAR_5.count, VAR_8, 1, VAR_6) < 1)
                return VAR_1;

            VAR_5.count += VAR_8;
            if (VAR_5.count == VAR_0)
                FUNC_0();
            VAR_5.sector += VAR_8 / VAR_2;
            VAR_5.offset += VAR_8 % VAR_2;
            VAR_7 -= VAR_8;
        }
    }
    else
    {
        VAR_5.sector += VAR_7 / VAR_2;
        VAR_5.offset += VAR_7 % VAR_2;
    }

    return VAR_4;
}
