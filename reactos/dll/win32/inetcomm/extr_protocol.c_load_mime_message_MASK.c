
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IStream ;
typedef int IMimeMessage ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,void**) ;
 int VAR_0 ;

__attribute__((used)) static HRESULT FUNC_5(IStream *VAR_1, IMimeMessage **VAR_2)
{
    IMimeMessage *VAR_3;
    HRESULT VAR_4;

    VAR_4 = FUNC_4(((void*)0), (void**)&VAR_3);
    if(FUNC_0(VAR_4))
        return VAR_4;

    FUNC_1(VAR_3);

    VAR_4 = FUNC_2(VAR_3, VAR_1);
    if(FUNC_0(VAR_4)) {
        FUNC_3(VAR_3);
        return VAR_4;
    }

    *VAR_2 = VAR_3;
    return VAR_0;
}
