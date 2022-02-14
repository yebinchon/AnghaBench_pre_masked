
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32 ;
typedef int uint16 ;
typedef scalar_t__ tmsize_t ;
struct TYPE_9__ {scalar_t__ (* tif_decodestrip ) (TYPE_1__*,void*,scalar_t__,int ) ;int (* tif_postdecode ) (TYPE_1__*,void*,scalar_t__) ;int tif_clientdata; } ;
typedef TYPE_1__ TIFF ;


 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,void*,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,int *) ;
 void* FUNC_5 (scalar_t__) ;
 int FUNC_6 (void*,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (TYPE_1__*,void*,scalar_t__,int ) ;
 int FUNC_8 (TYPE_1__*,void*,scalar_t__) ;

tmsize_t
FUNC_9(TIFF* VAR_0, uint32 VAR_1,
                                    void **VAR_2, tmsize_t VAR_3,
                                    tmsize_t VAR_4)
{
    tmsize_t VAR_5;
    uint16 VAR_6;

    if( *VAR_2 != ((void*)0) )
    {
        return FUNC_3(VAR_0, VAR_1, *VAR_2, VAR_4);
    }

    VAR_5=FUNC_4(VAR_0, VAR_1, &VAR_6);
    if (VAR_5==((tmsize_t)(-1)))
            return((tmsize_t)(-1));

    if ((VAR_4!=(tmsize_t)(-1))&&(VAR_4<VAR_5))
            VAR_5=VAR_4;
    if (!FUNC_2(VAR_0,VAR_1))
            return((tmsize_t)(-1));

    *VAR_2 = FUNC_5(VAR_3);
    if (*VAR_2 == ((void*)0)) {
            FUNC_0(VAR_0->tif_clientdata, FUNC_1(VAR_0), "No space for strip buffer");
            return((tmsize_t)(-1));
    }
    FUNC_6(*VAR_2, 0, VAR_3);

    if ((*VAR_0->tif_decodestrip)(VAR_0,*VAR_2,VAR_5,VAR_6)<=0)
            return((tmsize_t)(-1));
    (*VAR_0->tif_postdecode)(VAR_0,*VAR_2,VAR_5);
    return(VAR_5);


}
