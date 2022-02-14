
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int Notify; scalar_t__ Self; } ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef TYPE_1__ IPADDRESS_INFO ;
typedef scalar_t__ HWND ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (char*,int ) ;
 int VAR_1 ;

__attribute__((used)) static LRESULT FUNC_4 (const IPADDRESS_INFO *VAR_2, UINT VAR_3)
{
    HWND VAR_4 = VAR_2->Self;

    FUNC_3("(command=%x)\n", VAR_3);

    return FUNC_2 (VAR_2->Notify, VAR_1,
             FUNC_1 (FUNC_0 (VAR_4, VAR_0), VAR_3), (LPARAM)VAR_4);
}
