
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int font ;
struct TYPE_4__ {int lfUnderline; } ;
typedef TYPE_1__ LOGFONTW ;
typedef int HFONT ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int,TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static HFONT
FUNC_2(HFONT VAR_1)
{
    LOGFONTW VAR_2;

    FUNC_1(VAR_1, sizeof(VAR_2), &VAR_2);
    VAR_2.lfUnderline = VAR_0;
    return FUNC_0(&VAR_2);
}
