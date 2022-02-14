
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(void)
{
    unsigned VAR_2;

    if(!VAR_1)
        return;

    for(VAR_2=0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
        if(VAR_0[VAR_2])
            FUNC_1(VAR_0[VAR_2]);
    }

    FUNC_2(VAR_1);
}
