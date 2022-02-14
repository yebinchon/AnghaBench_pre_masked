
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t USHORT ;
typedef int ULONG ;
struct TYPE_9__ {int vt; } ;
struct TYPE_8__ {size_t cDims; TYPE_1__* rgbounds; TYPE_3__ tdescElem; } ;
struct TYPE_7__ {int cElements; } ;
typedef int ITypeInfo ;
typedef TYPE_2__ ARRAYDESC ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (unsigned char*,size_t,unsigned char) ;
 int FUNC_2 (unsigned char*,size_t,int ) ;
 int FUNC_3 (unsigned char*,size_t,size_t) ;
 unsigned char FUNC_4 (int *,TYPE_3__*) ;
 unsigned char FUNC_5 (int ) ;
 int FUNC_6 (int *,TYPE_3__*) ;
 size_t FUNC_7 (int *,unsigned char*,size_t*,TYPE_3__*,int ,int ) ;

__attribute__((used)) static size_t FUNC_8(ITypeInfo *VAR_5, unsigned char *VAR_6,
    size_t *VAR_7, ARRAYDESC *VAR_8)
{
    unsigned char VAR_9 = FUNC_4(VAR_5, &VAR_8->tdescElem);
    ULONG VAR_10 = FUNC_6(VAR_5, &VAR_8->tdescElem);
    unsigned char VAR_11;
    size_t VAR_12 = 0, VAR_13;
    USHORT VAR_14;

    if (VAR_9 != VAR_3)
        FUNC_0("complex arrays not implemented\n");

    if (!(VAR_11 = FUNC_5(VAR_8->tdescElem.vt)))
        VAR_12 = FUNC_7(VAR_5, VAR_6, VAR_7, &VAR_8->tdescElem, VAR_0, VAR_0);



    for (VAR_14 = 0; VAR_14 < VAR_8->cDims; VAR_14++) VAR_10 *= VAR_8->rgbounds[VAR_14].cElements;

    VAR_13 = *VAR_7;

    FUNC_1(VAR_6, *VAR_7, VAR_3);
    FUNC_1(VAR_6, *VAR_7, 0);
    FUNC_2 (VAR_6, *VAR_7, VAR_10);
    if (VAR_11)
        FUNC_1(VAR_6, *VAR_7, VAR_11);
    else
    {
        FUNC_1 (VAR_6, *VAR_7, VAR_1);
        FUNC_1 (VAR_6, *VAR_7, 0);
        FUNC_3(VAR_6, *VAR_7, VAR_12 - *VAR_7);
        FUNC_1 (VAR_6, *VAR_7, VAR_4);
    }
    FUNC_1(VAR_6, *VAR_7, VAR_2);

    return VAR_13;
}
