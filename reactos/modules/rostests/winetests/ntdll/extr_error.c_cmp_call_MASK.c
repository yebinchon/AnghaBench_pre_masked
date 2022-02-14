
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int NTSTATUS ;


 int FUNC_0 (int,char*,char const*,int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(NTSTATUS VAR_0, ULONG VAR_1, const char* VAR_2)
{
    ULONG VAR_3;

    VAR_3 = FUNC_1(VAR_0);
    FUNC_0(VAR_3 == VAR_1,
       "%s (%x): got %u, expected %u\n",
            VAR_2, VAR_0, VAR_3, VAR_1);
}
