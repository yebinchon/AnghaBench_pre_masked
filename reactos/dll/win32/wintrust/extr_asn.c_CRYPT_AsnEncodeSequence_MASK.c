
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct AsnEncodeSequenceItem {size_t size; int pvStructInfo; int (* encodeFunc ) (size_t,int *,int ,int *,size_t*) ;} ;
typedef size_t DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (size_t,int *,size_t*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,struct AsnEncodeSequenceItem*,...) ;
 int VAR_3 ;
 int FUNC_3 (size_t,int *,int ,int *,size_t*) ;
 int FUNC_4 (size_t,int *,int ,int *,size_t*) ;

__attribute__((used)) static BOOL FUNC_5(DWORD VAR_4,
 struct AsnEncodeSequenceItem VAR_5[], DWORD VAR_6, BYTE *VAR_7,
 DWORD *VAR_8)
{
    BOOL VAR_9;
    DWORD VAR_10, VAR_11 = 0;

    FUNC_2("%p, %d, %p, %d\n", VAR_5, VAR_6, VAR_7, *VAR_8);
    for (VAR_10 = 0, VAR_9 = VAR_3; VAR_9 && VAR_10 < VAR_6; VAR_10++)
    {
        VAR_9 = VAR_5[VAR_10].encodeFunc(VAR_4, ((void*)0),
         VAR_5[VAR_10].pvStructInfo, ((void*)0), &VAR_5[VAR_10].size);

        if (!VAR_9)
            *VAR_8 = VAR_5[VAR_10].size;
        VAR_11 += VAR_5[VAR_10].size;
    }
    if (VAR_9)
    {
        DWORD VAR_12, VAR_13;

        FUNC_0(VAR_11, ((void*)0), &VAR_12);
        VAR_13 = 1 + VAR_12 + VAR_11;
        if (!VAR_7)
            *VAR_8 = VAR_13;
        else if (*VAR_8 < VAR_13)
        {
            *VAR_8 = VAR_13;
            FUNC_1(VAR_1);
            VAR_9 = VAR_2;
        }
        else
        {
            *VAR_8 = VAR_13;
            *VAR_7++ = VAR_0;
            FUNC_0(VAR_11, VAR_7, &VAR_12);
            VAR_7 += VAR_12;
            for (VAR_10 = 0; VAR_9 && VAR_10 < VAR_6; VAR_10++)
            {
                VAR_9 = VAR_5[VAR_10].encodeFunc(VAR_4, ((void*)0),
                 VAR_5[VAR_10].pvStructInfo, VAR_7, &VAR_5[VAR_10].size);

                if (!VAR_9)
                    *VAR_8 = VAR_5[VAR_10].size;
                VAR_7 += VAR_5[VAR_10].size;
            }
        }
    }
    FUNC_2("returning %d\n", VAR_9);
    return VAR_9;
}
