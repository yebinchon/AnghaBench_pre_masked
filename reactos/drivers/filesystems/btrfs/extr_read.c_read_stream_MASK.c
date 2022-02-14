
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_4__ {scalar_t__ Length; int Buffer; } ;
struct TYPE_5__ {TYPE_1__ adsdata; } ;
typedef TYPE_2__ fcb ;
typedef scalar_t__ ULONG ;
typedef int NTSTATUS ;


 int FUNC_0 (int *,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;

NTSTATUS FUNC_3(fcb* VAR_2, uint8_t* VAR_3, uint64_t VAR_4, ULONG VAR_5, ULONG* VAR_6) {
    ULONG VAR_7;

    FUNC_1("(%p, %p, %I64x, %I64x, %p)\n", VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

    if (VAR_6) *VAR_6 = 0;

    if (VAR_4 >= VAR_2->adsdata.Length) {
        FUNC_1("tried to read beyond end of stream\n");
        return VAR_0;
    }

    if (VAR_5 == 0) {
        FUNC_2("tried to read zero bytes\n");
        return VAR_1;
    }

    if (VAR_4 + VAR_5 < VAR_2->adsdata.Length)
        VAR_7 = VAR_5;
    else
        VAR_7 = VAR_2->adsdata.Length - (ULONG)VAR_4;

    if (VAR_7 > 0)
        FUNC_0(VAR_3 + VAR_4, VAR_2->adsdata.Buffer, VAR_7);

    if (VAR_6) *VAR_6 = VAR_7;

    return VAR_1;
}
