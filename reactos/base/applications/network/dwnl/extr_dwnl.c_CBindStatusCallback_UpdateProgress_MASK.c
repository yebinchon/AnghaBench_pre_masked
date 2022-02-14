
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_3__ {int Size; int Progress; } ;
typedef TYPE_1__ CBindStatusCallback ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,int,...) ;

__attribute__((used)) static void
FUNC_3(CBindStatusCallback *VAR_3)
{
    WCHAR VAR_4[VAR_2];


    if (VAR_3->Size != 0)
    {
        UINT VAR_5;

        VAR_5 = (UINT)((VAR_3->Progress * 100) / VAR_3->Size);
        if (VAR_5 > 99)
            VAR_5 = 99;

        FUNC_1(((void*)0), VAR_1, VAR_4, FUNC_0(VAR_4));

        FUNC_2(VAR_4, VAR_5, VAR_3->Progress);
    }
    else
    {
        FUNC_1(((void*)0), VAR_0, VAR_4, FUNC_0(VAR_4));


        FUNC_2(VAR_4, VAR_3->Progress);
    }
}
