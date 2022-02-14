
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
typedef scalar_t__ uint16 ;
typedef scalar_t__ tmsize_t ;
struct TYPE_6__ {scalar_t__ td_nstrips; scalar_t__ td_rowsperstrip; scalar_t__ td_imagelength; } ;
struct TYPE_7__ {int tif_clientdata; TYPE_1__ tif_dir; } ;
typedef TYPE_1__ TIFFDirectory ;
typedef TYPE_2__ TIFF ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ,char const*,char*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static tmsize_t FUNC_4(TIFF* VAR_0, uint32 VAR_1, uint16* VAR_2)
{
 static const char VAR_3[] = "TIFFReadEncodedStrip";
 TIFFDirectory *VAR_4 = &VAR_0->tif_dir;
 uint32 VAR_5;
 uint32 VAR_6;
 uint32 VAR_7;
 uint32 VAR_8;
 tmsize_t VAR_9;
 if (!FUNC_0(VAR_0,0))
  return((tmsize_t)(-1));
 if (VAR_1>=VAR_4->td_nstrips)
 {
  FUNC_1(VAR_0->tif_clientdata,VAR_3,
      "%lu: Strip out of range, max %lu",(unsigned long)VAR_1,
      (unsigned long)VAR_4->td_nstrips);
  return((tmsize_t)(-1));
 }

 VAR_5=VAR_4->td_rowsperstrip;
 if (VAR_5>VAR_4->td_imagelength)
  VAR_5=VAR_4->td_imagelength;
 VAR_6= FUNC_3(VAR_4->td_imagelength, VAR_5);
 VAR_7=(VAR_1%VAR_6);
 if( VAR_2 ) *VAR_2=(uint16)(VAR_1/VAR_6);
 VAR_8=VAR_4->td_imagelength-VAR_7*VAR_5;
 if (VAR_8>VAR_5)
  VAR_8=VAR_5;
 VAR_9=FUNC_2(VAR_0,VAR_8);
 if (VAR_9==0)
  return((tmsize_t)(-1));
 return VAR_9;
}
