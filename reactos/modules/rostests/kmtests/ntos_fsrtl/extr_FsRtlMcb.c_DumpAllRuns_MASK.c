
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef scalar_t__ ULONG ;
typedef int PLARGE_MCB ;
typedef int LONGLONG ;


 scalar_t__ FUNC_0 (int ,scalar_t__,int *,int *,int *) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static VOID FUNC_2(PLARGE_MCB VAR_0)
{
    ULONG VAR_1;
    LONGLONG VAR_2, VAR_3, VAR_4;

    FUNC_1("MCB %p:\n", VAR_0);

    for (VAR_1 = 0; FUNC_0(VAR_0, VAR_1, &VAR_2, &VAR_3, &VAR_4); VAR_1++)
    {

        FUNC_1("\t[%I64d,%I64d,%I64d]\n", VAR_2, VAR_3, VAR_4);
    }
    FUNC_1("\n");
}
