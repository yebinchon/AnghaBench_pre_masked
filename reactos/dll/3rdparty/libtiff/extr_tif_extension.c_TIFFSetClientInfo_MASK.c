
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tmsize_t ;
struct TYPE_5__ {TYPE_1__* tif_clientinfo; } ;
struct TYPE_4__ {char* name; void* data; struct TYPE_4__* next; } ;
typedef TYPE_1__ TIFFClientInfoLink ;
typedef TYPE_2__ TIFF ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;

void FUNC_5( TIFF *VAR_0, void *VAR_1, const char *VAR_2 )

{
    TIFFClientInfoLink *VAR_3 = VAR_0->tif_clientinfo;





    while( VAR_3 != ((void*)0) && FUNC_2(VAR_3->name,VAR_2) != 0 )
        VAR_3 = VAR_3->next;

    if( VAR_3 != ((void*)0) )
    {
        VAR_3->data = VAR_1;
        return;
    }





    VAR_3 = (TIFFClientInfoLink *) FUNC_0(sizeof(TIFFClientInfoLink));
    FUNC_1 (VAR_3 != ((void*)0));
    VAR_3->next = VAR_0->tif_clientinfo;
    VAR_3->name = (char *) FUNC_0((tmsize_t)(FUNC_4(VAR_2)+1));
    FUNC_1 (VAR_3->name != ((void*)0));
    FUNC_3(VAR_3->name, VAR_2);
    VAR_3->data = VAR_1;

    VAR_0->tif_clientinfo = VAR_3;
}
