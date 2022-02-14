
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LONG_PTR ;
typedef int IXmlReader ;
typedef scalar_t__ HRESULT ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int *,int ,scalar_t__*) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,char*,...) ;

__attribute__((used)) static void FUNC_3(IXmlReader *VAR_3, BOOL VAR_4)
{
    LONG_PTR VAR_5;
    HRESULT VAR_6;

    FUNC_2(FUNC_1(VAR_3) == VAR_4, "Unexpected IsEOF() result\n");
    VAR_6 = FUNC_0(VAR_3, VAR_2, &VAR_5);
    FUNC_2(VAR_6 == VAR_0, "GetProperty() failed, %#x\n", VAR_6);
    FUNC_2((VAR_5 == VAR_1) == VAR_4, "Unexpected EndOfFile state %ld\n", VAR_5);
}
