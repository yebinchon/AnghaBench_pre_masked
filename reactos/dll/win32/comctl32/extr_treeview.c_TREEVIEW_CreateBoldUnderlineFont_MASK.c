
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int font ;
struct TYPE_4__ {int lfUnderline; int lfWeight; } ;
typedef TYPE_1__ LOGFONTW ;
typedef int HFONT ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static HFONT
FUNC_2(HFONT VAR_2)
{
    LOGFONTW VAR_3;

    FUNC_1(VAR_2, sizeof(VAR_3), &VAR_3);
    VAR_3.lfWeight = VAR_0;
    VAR_3.lfUnderline = VAR_1;
    return FUNC_0(&VAR_3);
}
