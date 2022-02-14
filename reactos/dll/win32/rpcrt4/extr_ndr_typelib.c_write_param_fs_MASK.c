
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int USHORT ;
struct TYPE_4__ {int wParamFlags; } ;
struct TYPE_5__ {int tdesc; TYPE_1__ paramdesc; } ;
typedef int TYPEDESC ;
typedef int ITypeInfo ;
typedef int HRESULT ;
typedef TYPE_2__ ELEMDESC ;
typedef scalar_t__ BOOL ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (unsigned char*,size_t,unsigned char) ;
 int FUNC_2 (int *,int *,int,int,unsigned short*,unsigned short*,unsigned char*,int **) ;
 unsigned short FUNC_3 (int *,int *) ;
 size_t FUNC_4 (int *,unsigned char*,size_t*,int *,int ,int) ;

__attribute__((used)) static HRESULT FUNC_5(ITypeInfo *VAR_6, unsigned char *VAR_7,
        size_t *VAR_8, unsigned char *VAR_9, size_t *VAR_10, ELEMDESC *VAR_11,
        BOOL VAR_12, unsigned short *VAR_13)
{
    USHORT VAR_14 = VAR_11->paramdesc.wParamFlags;
    int VAR_15 = VAR_14 & VAR_3;
    int VAR_16 = VAR_14 & VAR_4;
    TYPEDESC *VAR_17 = &VAR_11->tdesc, *VAR_18;
    unsigned short VAR_19;
    unsigned short VAR_20 = FUNC_3(VAR_6, VAR_17);
    unsigned char VAR_21;
    unsigned short VAR_22;
    size_t VAR_23 = 0;
    HRESULT VAR_24;

    VAR_24 = FUNC_2(VAR_6, VAR_17, VAR_15, VAR_16, &VAR_19, &VAR_22,
            &VAR_21, &VAR_18);

    if (VAR_15) VAR_22 |= VAR_0;
    if (VAR_16) VAR_22 |= VAR_1;
    if (VAR_12) VAR_22 |= VAR_1 | VAR_2;

    VAR_19 = (VAR_19 + 7) / 8;
    if (VAR_19 >= 8) VAR_19 = 0;
    VAR_22 |= VAR_19 << 13;

    if (!VAR_21)
        VAR_23 = FUNC_4(VAR_6, VAR_7, VAR_8, VAR_18, VAR_5, VAR_19 != 0);

    if (FUNC_0(VAR_24))
    {
        FUNC_1(VAR_9, *VAR_10, VAR_22);
        FUNC_1(VAR_9, *VAR_10, *VAR_13);
        FUNC_1(VAR_9, *VAR_10, VAR_21 ? VAR_21 : VAR_23);

        *VAR_13 += VAR_20;
    }

    return VAR_24;
}
