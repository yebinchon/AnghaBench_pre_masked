
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPDIRECTSOUNDNOTIFY ;
typedef int IDirectSoundNotifyImpl ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int *) ;

__attribute__((used)) static HRESULT FUNC_2(
    IDirectSoundNotifyImpl *VAR_1)
{
    FUNC_1("(%p)\n",VAR_1);

    while (FUNC_0((LPDIRECTSOUNDNOTIFY)VAR_1) > 0);

    return VAR_0;
}
