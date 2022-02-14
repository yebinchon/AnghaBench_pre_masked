
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwFlags; } ;
typedef int MMRESULT ;
typedef int MIDIHDR ;
typedef TYPE_1__* LPMIDIHDR ;
typedef int HMIDISTRM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_1__*,int) ;

__attribute__((used)) static MMRESULT FUNC_2(HMIDISTRM VAR_2, LPMIDIHDR VAR_3)
{
    MMRESULT VAR_4 = FUNC_1(VAR_2, VAR_3, sizeof(MIDIHDR));


    if (!VAR_4) while (!(VAR_3->dwFlags & VAR_0) || (VAR_3->dwFlags & VAR_1)) { FUNC_0(100); }
    return VAR_4;
}
