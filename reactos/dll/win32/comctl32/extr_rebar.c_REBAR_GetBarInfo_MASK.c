
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int cbSize; int fMask; scalar_t__ himl; } ;
struct TYPE_5__ {scalar_t__ himl; } ;
typedef TYPE_1__ REBAR_INFO ;
typedef int REBARINFO ;
typedef int LRESULT ;
typedef TYPE_2__* LPREBARINFO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;

__attribute__((used)) static LRESULT
FUNC_1 (const REBAR_INFO *VAR_3, LPREBARINFO VAR_4)
{
    if (!VAR_4 || VAR_4->cbSize < sizeof (REBARINFO))
 return VAR_0;

    FUNC_0("getting bar info!\n");

    if (VAR_3->himl) {
 VAR_4->himl = VAR_3->himl;
 VAR_4->fMask |= VAR_1;
    }

    return VAR_2;
}
