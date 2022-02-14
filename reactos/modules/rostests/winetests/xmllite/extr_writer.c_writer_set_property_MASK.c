
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XmlWriterProperty ;
typedef int IXmlWriter ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(IXmlWriter *VAR_2, XmlWriterProperty VAR_3)
{
    HRESULT VAR_4;

    VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_1);
    FUNC_1(VAR_4 == VAR_0, "Failed to set writer property, hr %#x.\n", VAR_4);
}
