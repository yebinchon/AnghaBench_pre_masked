
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int REFIID ;
typedef int IUnknown ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int*,int ,int ,int *,int ) ;

__attribute__((used)) static unsigned FUNC_4(ULONG *VAR_0, REFIID VAR_1, IUnknown *VAR_2)
{
    ULONG VAR_3 = 0;

    if (VAR_2)
    {
        VAR_3 = FUNC_3(VAR_0, FUNC_1(*VAR_0), 0, VAR_2, VAR_1);
        if (!VAR_3)
        {
            FUNC_0("interface variant buffer size calculation failed\n");
            return 0;
        }
    }
    VAR_3 += sizeof(ULONG);
    FUNC_2("wire-size extra of interface variant is %d\n", VAR_3);
    return VAR_3;
}
