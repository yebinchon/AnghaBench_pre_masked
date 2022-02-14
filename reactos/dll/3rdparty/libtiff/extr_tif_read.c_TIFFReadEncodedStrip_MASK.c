
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32 ;
typedef int uint16 ;
typedef scalar_t__ tmsize_t ;
struct TYPE_12__ {scalar_t__ td_compression; int td_fillorder; } ;
struct TYPE_13__ {int tif_flags; scalar_t__ (* tif_decodestrip ) (TYPE_2__*,void*,scalar_t__,int ) ;int (* tif_postdecode ) (TYPE_2__*,void*,scalar_t__) ;TYPE_1__ tif_dir; } ;
typedef TYPE_1__ TIFFDirectory ;
typedef TYPE_2__ TIFF ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ,int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,void*,scalar_t__,char const*) ;
 int FUNC_3 (void*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,void*,scalar_t__) ;
 scalar_t__ FUNC_7 (TYPE_2__*,void*,scalar_t__,int ) ;
 int FUNC_8 (TYPE_2__*,void*,scalar_t__) ;

tmsize_t
FUNC_9(TIFF* VAR_3, uint32 VAR_4, void* VAR_5, tmsize_t VAR_6)
{
 static const char VAR_7[] = "TIFFReadEncodedStrip";
 TIFFDirectory *VAR_8 = &VAR_3->tif_dir;
 tmsize_t VAR_9;
 uint16 VAR_10;

 VAR_9=FUNC_1(VAR_3, VAR_4, &VAR_10);
 if (VAR_9==((tmsize_t)(-1)))
  return((tmsize_t)(-1));


    if( VAR_8->td_compression == VAR_0 &&
        VAR_6!=(tmsize_t)(-1) && VAR_6 >= VAR_9 &&
        !FUNC_5(VAR_3) &&
        ((VAR_3->tif_flags&VAR_2)==0) )
    {
        if (FUNC_2(VAR_3, VAR_4, VAR_5, VAR_9, VAR_7) != VAR_9)
            return ((tmsize_t)(-1));

        if (!FUNC_4(VAR_3, VAR_8->td_fillorder) &&
            (VAR_3->tif_flags & VAR_1) == 0)
            FUNC_3(VAR_5,VAR_9);

        (*VAR_3->tif_postdecode)(VAR_3,VAR_5,VAR_9);
        return (VAR_9);
    }

 if ((VAR_6!=(tmsize_t)(-1))&&(VAR_6<VAR_9))
  VAR_9=VAR_6;
 if (!FUNC_0(VAR_3,VAR_4))
  return((tmsize_t)(-1));
 if ((*VAR_3->tif_decodestrip)(VAR_3,VAR_5,VAR_9,VAR_10)<=0)
  return((tmsize_t)(-1));
 (*VAR_3->tif_postdecode)(VAR_3,VAR_5,VAR_9);
 return(VAR_9);
}
