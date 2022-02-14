
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t_PXENV_TFTP_CLOSE ;
typedef int closeData ;
typedef scalar_t__ ULONG ;
typedef int ARC_STATUS ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int) ;
 int VAR_5 ;
 int * VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static ARC_STATUS FUNC_3(ULONG VAR_8)
{
    t_PXENV_TFTP_CLOSE VAR_9;

    if (VAR_7 == VAR_3 || VAR_8 != VAR_7)
        return VAR_0;

    FUNC_2(&VAR_9, sizeof(VAR_9));
    if (!FUNC_0(VAR_4, &VAR_9))
        return VAR_1;

    VAR_7 = VAR_3;
    if (VAR_6)
    {
        FUNC_1(VAR_6, VAR_5);
        VAR_6 = ((void*)0);
    }
    return VAR_2;
}
