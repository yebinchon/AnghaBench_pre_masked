
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IXMLDOMDocument ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (char*,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

IXMLDOMDocument * FUNC_6()
{
 IXMLDOMDocument *VAR_5 = ((void*)0);
 HRESULT VAR_6 = FUNC_0(&VAR_1, ((void*)0), VAR_0, &VAR_2, (void **) &VAR_5);
 if(VAR_6 == VAR_3)
 {
  FUNC_1(VAR_5, VAR_4);
  FUNC_4(VAR_5, VAR_4);
  FUNC_3(VAR_5, VAR_4);
  FUNC_2(VAR_5, VAR_4);
 }
 else FUNC_5(L"CoCreateInstance: 0x%08x\n", VAR_6);
 return VAR_5;
}
