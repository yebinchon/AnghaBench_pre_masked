
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int code; int idFrom; int hwndFrom; } ;
struct TYPE_4__ {scalar_t__ simple; int Self; int Notify; } ;
typedef TYPE_1__ STATUS_INFO ;
typedef TYPE_2__ NMHDR ;
typedef int LPARAM ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (char*,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static BOOL
FUNC_4 (STATUS_INFO *VAR_5, BOOL VAR_6)
{
    NMHDR VAR_7;

    FUNC_3("(simple=%d)\n", VAR_6);
    if (VAR_5->simple == VAR_6)
 return VAR_3;

    VAR_5->simple = VAR_6;


    VAR_7.hwndFrom = VAR_5->Self;
    VAR_7.idFrom = FUNC_0 (VAR_5->Self, VAR_1);
    VAR_7.code = VAR_2;
    FUNC_2 (VAR_5->Notify, VAR_4, 0, (LPARAM)&VAR_7);
    FUNC_1(VAR_5->Self, ((void*)0), VAR_0);
    return VAR_3;
}
