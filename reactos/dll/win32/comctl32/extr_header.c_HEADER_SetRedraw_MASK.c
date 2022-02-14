
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ WPARAM ;
struct TYPE_3__ {int hwndSelf; } ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef TYPE_1__ HEADER_INFO ;


 int FUNC_0 (int ,int ,scalar_t__,int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static LRESULT FUNC_2(HEADER_INFO *VAR_2, WPARAM VAR_3, LPARAM VAR_4)
{


    LRESULT VAR_5;

    VAR_5 = FUNC_0(VAR_2->hwndSelf, VAR_1, VAR_3, VAR_4);
    if (VAR_3)
        FUNC_1(VAR_2->hwndSelf, ((void*)0), VAR_0);
    return VAR_5;
}
