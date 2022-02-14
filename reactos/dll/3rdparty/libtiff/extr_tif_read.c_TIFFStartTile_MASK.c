
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint32 ;
typedef int uint16 ;
typedef scalar_t__ tmsize_t ;
struct TYPE_7__ {size_t td_tilewidth; size_t td_tilelength; size_t td_stripsperimage; scalar_t__* td_stripbytecount; int td_imagelength; int td_imagewidth; } ;
struct TYPE_8__ {int tif_flags; size_t tif_curtile; size_t tif_row; size_t tif_col; scalar_t__ tif_rawcc; scalar_t__ tif_rawdataloaded; int (* tif_predecode ) (TYPE_2__*,int ) ;int * tif_rawdata; int * tif_rawcp; int tif_clientdata; int (* tif_setupdecode ) (TYPE_2__*) ;TYPE_1__ tif_dir; } ;
typedef TYPE_1__ TIFFDirectory ;
typedef TYPE_2__ TIFF ;


 int FUNC_0 (int ,char const*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_1 (int ,size_t) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_5(TIFF* VAR_3, uint32 VAR_4)
{
        static const char VAR_5[] = "TIFFStartTile";
 TIFFDirectory *VAR_6 = &VAR_3->tif_dir;
        uint32 VAR_7;

        if (!FUNC_2( VAR_3 ) || !VAR_3->tif_dir.td_stripbytecount)
                return 0;

 if ((VAR_3->tif_flags & VAR_1) == 0) {
  if (!(*VAR_3->tif_setupdecode)(VAR_3))
   return (0);
  VAR_3->tif_flags |= VAR_1;
 }
 VAR_3->tif_curtile = VAR_4;
        VAR_7=FUNC_1(VAR_6->td_imagewidth, VAR_6->td_tilewidth);
        if (VAR_7 == 0) {
                 FUNC_0(VAR_3->tif_clientdata,VAR_5,"Zero tiles");
                return 0;
        }
 VAR_3->tif_row = (VAR_4 % VAR_7) * VAR_6->td_tilelength;
        VAR_7=FUNC_1(VAR_6->td_imagelength, VAR_6->td_tilelength);
        if (VAR_7 == 0) {
                FUNC_0(VAR_3->tif_clientdata,VAR_5,"Zero tiles");
                return 0;
        }
 VAR_3->tif_col = (VAR_4 % VAR_7) * VAR_6->td_tilewidth;
        VAR_3->tif_flags &= ~VAR_0;
 if (VAR_3->tif_flags&VAR_2)
 {
  VAR_3->tif_rawcp = ((void*)0);
  VAR_3->tif_rawcc = 0;
 }
 else
 {
  VAR_3->tif_rawcp = VAR_3->tif_rawdata;
  if( VAR_3->tif_rawdataloaded > 0 )
   VAR_3->tif_rawcc = VAR_3->tif_rawdataloaded;
  else
   VAR_3->tif_rawcc = (tmsize_t)VAR_6->td_stripbytecount[VAR_4];
 }
 return ((*VAR_3->tif_predecode)(VAR_3,
   (uint16)(VAR_4/VAR_6->td_stripsperimage)));
}
