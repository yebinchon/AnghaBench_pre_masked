
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int rgn ;
struct TYPE_4__ {int dwSize; int nCount; int nRgnSize; int const rcBound; int iType; } ;
struct TYPE_5__ {TYPE_1__ rdh; scalar_t__ Buffer; } ;
typedef int RGNDATAHEADER ;
typedef TYPE_2__ RGNDATA ;
typedef int RECT ;
typedef int HRGN ;
typedef int DWORD ;


 int FUNC_0 (int const*,int const*) ;
 int FUNC_1 (int ,int,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int const*) ;
 int VAR_0 ;
 int FUNC_3 (int,char*,int,...) ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (int const*) ;

__attribute__((used)) static void FUNC_6(HRGN VAR_1, const RECT *VAR_2)
{
    union
    {
        RGNDATA data;
        char buf[sizeof(RGNDATAHEADER) + sizeof(RECT)];
    } VAR_3;
    const RECT *VAR_4;
    DWORD VAR_5;

    VAR_5 = FUNC_1(VAR_1, 0, ((void*)0));
    if (FUNC_2(VAR_2))
        FUNC_3(VAR_5 == sizeof(VAR_3.data.rdh), "expected sizeof(rdh), got %u\n", VAR_5);
    else
        FUNC_3(VAR_5 == sizeof(VAR_3.data.rdh) + sizeof(RECT), "expected sizeof(rgn), got %u\n", VAR_5);

    if (!VAR_5) return;

    VAR_5 = FUNC_1(VAR_1, sizeof(VAR_3), &VAR_3.data);
    if (FUNC_2(VAR_2))
        FUNC_3(VAR_5 == sizeof(VAR_3.data.rdh), "expected sizeof(rdh), got %u\n", VAR_5);
    else
        FUNC_3(VAR_5 == sizeof(VAR_3.data.rdh) + sizeof(RECT), "expected sizeof(rgn), got %u\n", VAR_5);

    FUNC_4("size %u, type %u, count %u, rgn size %u, bound %s\n",
          VAR_3.data.rdh.dwSize, VAR_3.data.rdh.iType,
          VAR_3.data.rdh.nCount, VAR_3.data.rdh.nRgnSize,
          FUNC_5(&VAR_3.data.rdh.rcBound));
    if (VAR_3.data.rdh.nCount != 0)
    {
        VAR_4 = (const RECT *)VAR_3.data.Buffer;
        FUNC_4("rect %s\n", FUNC_5(VAR_4));
        FUNC_3(FUNC_0(VAR_4, VAR_2), "expected %s, got %s\n",
           FUNC_5(VAR_2), FUNC_5(VAR_4));
    }

    FUNC_3(VAR_3.data.rdh.dwSize == sizeof(VAR_3.data.rdh), "expected sizeof(rdh), got %u\n", VAR_3.data.rdh.dwSize);
    FUNC_3(VAR_3.data.rdh.iType == VAR_0, "expected RDH_RECTANGLES, got %u\n", VAR_3.data.rdh.iType);
    if (FUNC_2(VAR_2))
    {
        FUNC_3(VAR_3.data.rdh.nCount == 0, "expected 0, got %u\n", VAR_3.data.rdh.nCount);
        FUNC_3(VAR_3.data.rdh.nRgnSize == 0, "expected 0, got %u\n", VAR_3.data.rdh.nRgnSize);
    }
    else
    {
        FUNC_3(VAR_3.data.rdh.nCount == 1, "expected 1, got %u\n", VAR_3.data.rdh.nCount);
        FUNC_3(VAR_3.data.rdh.nRgnSize == sizeof(RECT), "expected sizeof(RECT), got %u\n", VAR_3.data.rdh.nRgnSize);
    }
    FUNC_3(FUNC_0(&VAR_3.data.rdh.rcBound, VAR_2), "expected %s, got %s\n",
       FUNC_5(VAR_2), FUNC_5(&VAR_3.data.rdh.rcBound));
}
