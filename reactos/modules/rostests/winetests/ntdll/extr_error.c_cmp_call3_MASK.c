
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int NTSTATUS ;


 int FUNC_0 (int,char*,char const*,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(NTSTATUS VAR_1, ULONG VAR_2, ULONG VAR_3, const char* VAR_4)
{
    ULONG VAR_5;

    VAR_5 = FUNC_1(VAR_1);
    FUNC_0(VAR_5 == VAR_2 || (!VAR_0 && VAR_5 == VAR_3),
       "%s (%x): got %u, expected %u or %u\n",
            VAR_4, VAR_1, VAR_5, VAR_2, VAR_3);
}
