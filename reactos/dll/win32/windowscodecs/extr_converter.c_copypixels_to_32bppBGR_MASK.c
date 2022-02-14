
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct FormatConverter {int source; } ;
typedef enum pixelformat { ____Placeholder_pixelformat } pixelformat ;
typedef int WICRect ;
typedef int UINT ;
typedef int HRESULT ;
typedef int BYTE ;


 int FUNC_0 (int ,int const*,int ,int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct FormatConverter*,int const*,int ,int ,int *,int) ;




__attribute__((used)) static HRESULT FUNC_2(struct FormatConverter *VAR_1, const WICRect *VAR_2,
    UINT VAR_3, UINT VAR_4, BYTE *VAR_5, enum pixelformat VAR_6)
{
    switch (VAR_6)
    {
    case 130:
    case 129:
    case 128:
        if (VAR_2)
            return FUNC_0(VAR_1->source, VAR_2, VAR_3, VAR_4, VAR_5);
        return VAR_0;
    default:
        return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
    }
}
