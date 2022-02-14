
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ITfSource ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,void**) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int,char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    ITfSource *VAR_4 = ((void*)0);
    HRESULT VAR_5;

    VAR_5 = FUNC_0(VAR_3, &VAR_0, (void**)&VAR_4);
    FUNC_3(VAR_5 == VAR_1,"Failed to get IID_ITfSource for DocumentMgr\n");

    VAR_5 = FUNC_2(VAR_4, VAR_2);
    FUNC_3(VAR_5 == VAR_1,"Failed to unadvise Sink\n");
    FUNC_1(VAR_4);
}
