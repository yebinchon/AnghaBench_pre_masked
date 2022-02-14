
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int feature; int package; } ;
typedef TYPE_1__ _ilfs ;
typedef int UINT ;
struct TYPE_8__ {int Enabled; } ;
typedef int MSIRECORD ;
typedef TYPE_2__ MSICOMPONENT ;
typedef TYPE_1__* LPVOID ;
typedef int LPCWSTR ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (int ,int ) ;

__attribute__((used)) static UINT FUNC_5(MSIRECORD *VAR_2, LPVOID VAR_3)
{
    _ilfs* VAR_4 = VAR_3;
    LPCWSTR VAR_5;
    MSICOMPONENT *VAR_6;

    VAR_5 = FUNC_0(VAR_2,1);


    VAR_6 = FUNC_4( VAR_4->package, VAR_5 );
    if (!VAR_6)
    {
        FUNC_1("ignoring unknown component %s\n", FUNC_3(VAR_5));
        return VAR_0;
    }
    FUNC_2( VAR_4->feature, VAR_6 );
    VAR_6->Enabled = VAR_1;

    return VAR_0;
}
