
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int stat ;
struct TYPE_10__ {scalar_t__ HighPart; int LowPart; } ;
typedef TYPE_2__ ULARGE_INTEGER ;
struct TYPE_12__ {scalar_t__ QuadPart; } ;
struct TYPE_9__ {scalar_t__ HighPart; int LowPart; } ;
struct TYPE_11__ {scalar_t__ type; scalar_t__ pwcsName; TYPE_1__ cbSize; int clsid; } ;
typedef TYPE_3__ STATSTG ;
typedef TYPE_4__ LARGE_INTEGER ;
typedef int IStream ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ HGLOBAL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,scalar_t__*) ;
 scalar_t__ FUNC_1 (int *,TYPE_4__,int ,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *,TYPE_3__*,int ) ;
 int FUNC_3 (int *,int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (TYPE_3__*,int,int) ;
 int FUNC_5 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(IStream *VAR_5, HGLOBAL *VAR_6, int *VAR_7, int *VAR_8)
{
    HRESULT VAR_9;
    STATSTG VAR_10;
    LARGE_INTEGER VAR_11;
    ULARGE_INTEGER VAR_12;

    *VAR_6 = 0;
    *VAR_7 = *VAR_8 = -1;

    VAR_9 = FUNC_0(VAR_5, VAR_6);
    FUNC_5(VAR_9 == VAR_4, "unexpected %#x\n", VAR_9);

    FUNC_4(&VAR_10, 0x55, sizeof(VAR_10));
    VAR_9 = FUNC_2(VAR_5, &VAR_10, VAR_1);
    FUNC_5(VAR_9 == VAR_4, "unexpected %#x\n", VAR_9);
    FUNC_5(VAR_10.type == VAR_2, "unexpected %#x\n", VAR_10.type);
    FUNC_5(!VAR_10.pwcsName, "unexpected %p\n", VAR_10.pwcsName);
    FUNC_5(FUNC_3(&VAR_10.clsid, &VAR_0), "unexpected %s\n", FUNC_6(&VAR_10.clsid));
    FUNC_5(!VAR_10.cbSize.HighPart, "unexpected %#x\n", VAR_10.cbSize.HighPart);
    *VAR_7 = VAR_10.cbSize.LowPart;

    VAR_11.QuadPart = 0;
    VAR_9 = FUNC_1(VAR_5, VAR_11, VAR_3, &VAR_12);
    FUNC_5(VAR_9 == VAR_4, "unexpected %#x\n", VAR_9);
    FUNC_5(!VAR_12.HighPart, "unexpected %#x\n", VAR_12.HighPart);
    *VAR_8 = VAR_12.LowPart;
}
