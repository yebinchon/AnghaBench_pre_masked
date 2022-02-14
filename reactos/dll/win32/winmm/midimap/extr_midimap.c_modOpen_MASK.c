
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* self; } ;
typedef TYPE_1__ MIDIMAPDATA ;
typedef int LPMIDIOPENDESC ;
typedef scalar_t__ DWORD_PTR ;
typedef int DWORD ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,scalar_t__*,int ,int ) ;

__attribute__((used)) static DWORD FUNC_5(DWORD_PTR *VAR_3, LPMIDIOPENDESC VAR_4, DWORD VAR_5)
{
    MIDIMAPDATA* VAR_6 = FUNC_1(FUNC_0(), 0, sizeof(MIDIMAPDATA));

    FUNC_4("(%p %p %08lx)\n", VAR_3, VAR_4, VAR_5);

    if (!VAR_6) return VAR_2;

    if (FUNC_3(VAR_6))
    {
 *VAR_3 = (DWORD_PTR)VAR_6;
 VAR_6->self = VAR_6;

 return VAR_1;
    }
    FUNC_2(FUNC_0(), 0, VAR_6);
    return VAR_0;
}
