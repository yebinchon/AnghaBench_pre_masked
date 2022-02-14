
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int style; int hlocapp; int hloc32W; } ;
typedef int HLOCAL ;
typedef TYPE_1__ EDITSTATE ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static HLOCAL FUNC_3(EDITSTATE *VAR_2)
{
    if (!(VAR_2->style & VAR_0))
        return 0;

    FUNC_0(VAR_2, VAR_1);


    VAR_2->hlocapp = VAR_2->hloc32W;

    FUNC_2("Returning %p, LocalSize() = %ld\n", VAR_2->hlocapp, FUNC_1(VAR_2->hlocapp));
    return VAR_2->hlocapp;
}
