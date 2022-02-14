
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int ITfSource ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,void**) ;
 scalar_t__ FUNC_1 (int *,int *,int *,scalar_t__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int,char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    ITfSource *VAR_6;
    HRESULT VAR_7;

    VAR_7 = FUNC_0(VAR_5, &VAR_0, (void**)&VAR_6);
    FUNC_3(VAR_7 == VAR_2,"Failed to get IID_ITfSource for DocumentMgr\n");

    VAR_4 = 0;
    VAR_7 = FUNC_1(VAR_6, &VAR_1, (IUnknown*)&VAR_3, &VAR_4);
    FUNC_3(VAR_7 == VAR_2,"Failed to Advise Sink\n");

    FUNC_2(VAR_6);
}
