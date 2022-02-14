
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_7__ {scalar_t__ hwndSelf; } ;
struct TYPE_6__ {void* y; void* x; } ;
typedef TYPE_1__ POINT ;
typedef int LRESULT ;
typedef void* INT ;
typedef TYPE_2__ HEADER_INFO ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (void*,void*) ;
 int VAR_0 ;
 int FUNC_3 (scalar_t__,int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static LRESULT
FUNC_4 (HEADER_INFO *VAR_2, INT VAR_3, INT VAR_4)
{
    BOOL VAR_5;
    POINT VAR_6;

    VAR_6.x = VAR_3;
    VAR_6.y = VAR_4;


    VAR_5 = FUNC_1 (VAR_2, VAR_0);


    FUNC_0(VAR_2->hwndSelf, &VAR_6);


    FUNC_3( VAR_2->hwndSelf, VAR_1, (WPARAM) VAR_2->hwndSelf, FUNC_2(VAR_6.x, VAR_6.y));

    return VAR_5;
}
