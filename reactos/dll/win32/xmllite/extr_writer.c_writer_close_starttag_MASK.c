
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ starttagopen; int output; } ;
typedef TYPE_1__ xmlwriter ;
typedef int HRESULT ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static HRESULT FUNC_2(xmlwriter *VAR_3)
{
    HRESULT VAR_4;

    if (!VAR_3->starttagopen) return VAR_1;
    VAR_4 = FUNC_1(VAR_3->output, VAR_2, FUNC_0(VAR_2));
    VAR_3->starttagopen = VAR_0;
    return VAR_4;
}
