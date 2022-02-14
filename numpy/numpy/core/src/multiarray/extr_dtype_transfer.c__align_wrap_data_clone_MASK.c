
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int npy_intp ;
struct TYPE_4__ {int src_itemsize; int dst_itemsize; char* bufferin; char* bufferout; int * todata; int * wrappeddata; int * fromdata; } ;
typedef TYPE_1__ _align_wrap_data ;
typedef int NpyAuxData ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int *,int) ;

__attribute__((used)) static NpyAuxData *FUNC_5(NpyAuxData *VAR_1)
{
    _align_wrap_data *VAR_2 = (_align_wrap_data *)VAR_1;
    _align_wrap_data *VAR_3;
    npy_intp VAR_4, VAR_5;


    VAR_4 = (sizeof(_align_wrap_data)+15)&(-0x10);

    VAR_5 = VAR_4 +
                VAR_0*VAR_2->src_itemsize +
                VAR_0*VAR_2->dst_itemsize;


    VAR_3 = (_align_wrap_data *)FUNC_3(VAR_5);
    if (VAR_3 == ((void*)0)) {
        return ((void*)0);
    }
    FUNC_4(VAR_3, VAR_1, VAR_4);
    VAR_3->bufferin = (char *)VAR_3 + VAR_4;
    VAR_3->bufferout = VAR_3->bufferin +
                VAR_0*VAR_3->src_itemsize;
    if (VAR_3->wrappeddata != ((void*)0)) {
        VAR_3->wrappeddata = FUNC_0(VAR_2->wrappeddata);
        if (VAR_3->wrappeddata == ((void*)0)) {
            FUNC_2(VAR_3);
            return ((void*)0);
        }
    }
    if (VAR_3->todata != ((void*)0)) {
        VAR_3->todata = FUNC_0(VAR_2->todata);
        if (VAR_3->todata == ((void*)0)) {
            FUNC_1(VAR_3->wrappeddata);
            FUNC_2(VAR_3);
            return ((void*)0);
        }
    }
    if (VAR_3->fromdata != ((void*)0)) {
        VAR_3->fromdata = FUNC_0(VAR_2->fromdata);
        if (VAR_3->fromdata == ((void*)0)) {
            FUNC_1(VAR_3->wrappeddata);
            FUNC_1(VAR_3->todata);
            FUNC_2(VAR_3);
            return ((void*)0);
        }
    }

    return (NpyAuxData *)VAR_3;
}
