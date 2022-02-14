
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int IStream ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,void*,int ,int *) ;
 int VAR_1 ;
 int FUNC_2 (char*,int ,...) ;

__attribute__((used)) static HRESULT FUNC_3(IStream *VAR_2, void *VAR_3, ULONG VAR_4)
{
    ULONG VAR_5;
    HRESULT VAR_6;

    VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4, &VAR_5);
    if(FUNC_0(VAR_6)){
        FUNC_2("IStream_Read failed: %08x\n", VAR_6);
        return VAR_6;
    }
    if (VAR_5 < VAR_4) {
        FUNC_2("Didn't read full chunk: %u < %u\n", VAR_5, VAR_4);
        return VAR_0;
    }

    return VAR_1;
}
