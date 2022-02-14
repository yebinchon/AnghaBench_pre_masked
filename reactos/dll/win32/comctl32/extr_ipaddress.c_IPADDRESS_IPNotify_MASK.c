
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int Notify; int Self; } ;
struct TYPE_5__ {int idFrom; int code; int hwndFrom; } ;
struct TYPE_6__ {void* iValue; TYPE_1__ hdr; void* iField; } ;
typedef TYPE_2__ NMIPADDRESS ;
typedef int LPARAM ;
typedef TYPE_3__ IPADDRESS_INFO ;
typedef void* INT ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (char*,void*,...) ;
 int VAR_2 ;

__attribute__((used)) static INT FUNC_3 (const IPADDRESS_INFO *VAR_3, INT VAR_4, INT VAR_5)
{
    NMIPADDRESS VAR_6;

    FUNC_2("(field=%x, value=%d)\n", VAR_4, VAR_5);

    VAR_6.hdr.hwndFrom = VAR_3->Self;
    VAR_6.hdr.idFrom = FUNC_0 (VAR_3->Self, VAR_0);
    VAR_6.hdr.code = VAR_1;

    VAR_6.iField = VAR_4;
    VAR_6.iValue = VAR_5;

    FUNC_1 (VAR_3->Notify, VAR_2, VAR_6.hdr.idFrom, (LPARAM)&VAR_6);

    FUNC_2("<-- %d\n", VAR_6.iValue);

    return VAR_6.iValue;
}
