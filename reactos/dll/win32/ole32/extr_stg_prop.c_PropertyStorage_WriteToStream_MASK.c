
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int sectionHdr ;
typedef int dwTemp ;
typedef int ULONG ;
struct TYPE_16__ {void* QuadPart; } ;
struct TYPE_13__ {scalar_t__ lVal; int iVal; } ;
struct TYPE_15__ {TYPE_1__ u; void* vt; } ;
struct TYPE_14__ {scalar_t__ locale; int grfFlags; int stm; int codePage; int name_to_propid; int propid_to_prop; } ;
typedef TYPE_2__ PropertyStorage_impl ;
typedef TYPE_3__ PROPVARIANT ;
typedef int PROPERTYSECTIONHEADER ;
typedef int PROPERTYIDOFFSET ;
typedef int LPBYTE ;
typedef TYPE_4__ LARGE_INTEGER ;
typedef int HRESULT ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_4__,int ,int *) ;
 int FUNC_2 (int ,int*,int,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,int,int*) ;
 int FUNC_5 (TYPE_2__*,int*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int,int*) ;
 int FUNC_8 (TYPE_2__*,int ,int ,TYPE_3__*,int*) ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (int ,int ,int) ;
 void* VAR_7 ;
 void* VAR_8 ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static HRESULT FUNC_11(PropertyStorage_impl *VAR_9)
{
    PROPERTYSECTIONHEADER VAR_10;
    HRESULT VAR_11;
    ULONG VAR_12;
    LARGE_INTEGER VAR_13;
    DWORD VAR_14, VAR_15, VAR_16, VAR_17;
    PROPVARIANT VAR_18;

    FUNC_6(VAR_9);


    VAR_14 = 1;
    if (FUNC_10(VAR_9->name_to_propid))
        VAR_14++;
    if (VAR_9->locale != VAR_0)
        VAR_14++;
    if (VAR_9->grfFlags & VAR_4)
        VAR_14++;
    VAR_14 += FUNC_10(VAR_9->propid_to_prop);




    FUNC_4(0, VAR_14, &VAR_10);
    VAR_13.QuadPart = VAR_5;
    VAR_11 = FUNC_1(VAR_9->stm, VAR_13, VAR_6, ((void*)0));
    if (FUNC_0(VAR_11))
        goto end;
    VAR_11 = FUNC_2(VAR_9->stm, &VAR_10, sizeof(VAR_10), &VAR_12);
    if (FUNC_0(VAR_11))
        goto end;

    VAR_15 = 0;
    VAR_16 = sizeof(PROPERTYSECTIONHEADER) +
     VAR_14 * sizeof(PROPERTYIDOFFSET);

    if (FUNC_10(VAR_9->name_to_propid))
    {
        VAR_15++;
        VAR_11 = FUNC_5(VAR_9, &VAR_16);
        if (FUNC_0(VAR_11))
            goto end;
    }

    FUNC_3(&VAR_18);

    VAR_18.vt = VAR_7;
    VAR_18.u.iVal = VAR_9->codePage;
    VAR_11 = FUNC_8(VAR_9, VAR_15++, VAR_2,
     &VAR_18, &VAR_16);
    if (FUNC_0(VAR_11))
        goto end;

    if (VAR_9->locale != VAR_0)
    {
        VAR_18.vt = VAR_8;
        VAR_18.u.lVal = VAR_9->locale;
        VAR_11 = FUNC_8(VAR_9, VAR_15++, VAR_3,
         &VAR_18, &VAR_16);
        if (FUNC_0(VAR_11))
            goto end;
    }

    if (VAR_9->grfFlags & VAR_4)
    {
        VAR_18.vt = VAR_8;
        VAR_18.u.lVal = 1;
        VAR_11 = FUNC_8(VAR_9, VAR_15++, VAR_1,
         &VAR_18, &VAR_16);
        if (FUNC_0(VAR_11))
            goto end;
    }

    VAR_11 = FUNC_7(VAR_9, VAR_15, &VAR_16);
    if (FUNC_0(VAR_11))
        goto end;


    VAR_13.QuadPart = VAR_5;
    VAR_11 = FUNC_1(VAR_9->stm, VAR_13, VAR_6, ((void*)0));
    if (FUNC_0(VAR_11))
        goto end;
    FUNC_9((LPBYTE)&VAR_17, 0, VAR_16);
    VAR_11 = FUNC_2(VAR_9->stm, &VAR_17, sizeof(VAR_17), &VAR_12);

end:
    return VAR_11;
}
