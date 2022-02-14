
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_2__ {void* Bottom; void* Top; void* Right; void* Left; } ;
typedef int SHORT ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 void* FUNC_0 (void*,int ) ;
 void* FUNC_1 (void*,int ) ;

__attribute__((used)) static inline VOID FUNC_2(SHORT VAR_5, SHORT VAR_6)
{

    if (!VAR_2)
    {
        VAR_4.Left = VAR_4.Top = VAR_0;
        VAR_4.Right = VAR_4.Bottom = VAR_1;
    }


    VAR_4.Left = FUNC_1(VAR_4.Left, VAR_6);
    VAR_4.Right = FUNC_0(VAR_4.Right, VAR_6);
    VAR_4.Top = FUNC_1(VAR_4.Top, VAR_5);
    VAR_4.Bottom = FUNC_0(VAR_4.Bottom, VAR_5);


    VAR_2 = VAR_3;
}
