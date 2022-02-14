
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_8__ {scalar_t__ uNumTools; } ;
struct TYPE_7__ {scalar_t__ cbSize; } ;
typedef TYPE_1__ TTTOOLINFOW ;
typedef TYPE_2__ TOOLTIPS_INFO ;
typedef int LRESULT ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__ const*,scalar_t__,TYPE_1__*,int ) ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static LRESULT
FUNC_2 (const TOOLTIPS_INFO *VAR_3, UINT VAR_4, TTTOOLINFOW *VAR_5,
                     BOOL VAR_6)
{
    if (!VAR_5 || VAR_5->cbSize < VAR_2)
 return VAR_0;
    if (VAR_4 >= VAR_3->uNumTools)
 return VAR_0;

    FUNC_1("index=%u\n", VAR_4);

    FUNC_0 (VAR_3, VAR_4, VAR_5, VAR_6);

    return VAR_1;
}
