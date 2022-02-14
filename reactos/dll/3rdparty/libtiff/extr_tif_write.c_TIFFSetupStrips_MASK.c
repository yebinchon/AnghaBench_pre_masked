
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_10__ {int td_stripsperimage; int td_samplesperpixel; int td_nstrips; scalar_t__ td_planarconfig; int * td_stripbytecount; int * td_stripoffset; } ;
struct TYPE_11__ {TYPE_1__ tif_dir; } ;
typedef TYPE_1__ TIFFDirectory ;
typedef TYPE_2__ TIFF ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int,int,char*) ;
 int FUNC_4 (int *,int ,int) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ) ;

int
FUNC_7(TIFF* VAR_5)
{
 TIFFDirectory* VAR_6 = &VAR_5->tif_dir;

 if (FUNC_5(VAR_5))
  VAR_6->td_stripsperimage =
      FUNC_6(VAR_5, VAR_3) ?
   VAR_6->td_samplesperpixel : FUNC_1(VAR_5);
 else
  VAR_6->td_stripsperimage =
      FUNC_6(VAR_5, VAR_0) ?
   VAR_6->td_samplesperpixel : FUNC_0(VAR_5);
 VAR_6->td_nstrips = VAR_6->td_stripsperimage;
 if (VAR_6->td_planarconfig == VAR_4)
  VAR_6->td_stripsperimage /= VAR_6->td_samplesperpixel;
 VAR_6->td_stripoffset = (uint64 *)
            FUNC_3(VAR_5, VAR_6->td_nstrips, sizeof (uint64),
                             "for \"StripOffsets\" array");
 VAR_6->td_stripbytecount = (uint64 *)
            FUNC_3(VAR_5, VAR_6->td_nstrips, sizeof (uint64),
                             "for \"StripByteCounts\" array");
 if (VAR_6->td_stripoffset == ((void*)0) || VAR_6->td_stripbytecount == ((void*)0))
  return (0);




 FUNC_4(VAR_6->td_stripoffset, 0, VAR_6->td_nstrips*sizeof (uint64));
 FUNC_4(VAR_6->td_stripbytecount, 0, VAR_6->td_nstrips*sizeof (uint64));
 FUNC_2(VAR_5, VAR_2);
 FUNC_2(VAR_5, VAR_1);
 return (1);
}
