
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * emh; } ;
typedef int HENHMETAFILE ;
typedef int ENHMETAHEADER ;
typedef TYPE_1__ ENHMETAFILEOBJ ;


 TYPE_1__* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ,TYPE_1__*) ;

__attribute__((used)) static ENHMETAHEADER *FUNC_3( HENHMETAFILE VAR_1 )
{
    ENHMETAHEADER *VAR_2 = ((void*)0);
    ENHMETAFILEOBJ *VAR_3 = FUNC_0( VAR_1, VAR_0 );
    FUNC_2("hmf %p -> enhmetaObj %p\n", VAR_1, VAR_3);
    if (VAR_3)
    {
        VAR_2 = VAR_3->emh;
        FUNC_1( VAR_1 );
    }
    return VAR_2;
}
