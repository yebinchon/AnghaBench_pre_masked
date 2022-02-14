
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ protocol; int clsid; int cf; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int ,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(void)
{
    unsigned int VAR_2;

    for(VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++) {
        if(VAR_1[VAR_2].protocol)
            FUNC_1(VAR_1[VAR_2].cf, VAR_1[VAR_2].clsid,
                                      VAR_1[VAR_2].protocol, VAR_0);
    }
}
