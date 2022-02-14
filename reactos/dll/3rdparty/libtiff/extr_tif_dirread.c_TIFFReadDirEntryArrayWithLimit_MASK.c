
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
typedef int uint32 ;
typedef scalar_t__ tmsize_t ;
typedef enum TIFFReadDirEntryErr { ____Placeholder_TIFFReadDirEntryErr } TIFFReadDirEntryErr ;
struct TYPE_12__ {int toff_long; scalar_t__ toff_long8; } ;
struct TYPE_11__ {int tif_flags; scalar_t__ tif_size; } ;
struct TYPE_10__ {scalar_t__ tdir_count; TYPE_4__ tdir_offset; int tdir_type; } ;
typedef TYPE_1__ TIFFDirEntry ;
typedef TYPE_2__ TIFF ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,scalar_t__,scalar_t__,void*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,scalar_t__,void**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int*) ;
 int FUNC_4 (scalar_t__*) ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_5 (TYPE_2__*,int,int,char*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*,TYPE_4__*,int) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static enum TIFFReadDirEntryErr FUNC_10(
    TIFF* VAR_6, TIFFDirEntry* VAR_7, uint32* VAR_8, uint32 VAR_9,
    void** VAR_10, uint64 VAR_11)
{
 int VAR_12;
 uint32 VAR_13;
 void* VAR_14;
        uint64 VAR_15;
 VAR_12=FUNC_0(VAR_7->tdir_type);

        VAR_15 = (VAR_7->tdir_count > VAR_11) ?
                VAR_11 : VAR_7->tdir_count;

 if ((VAR_15==0)||(VAR_12==0))
 {
  *VAR_10=0;
  return(VAR_2);
 }
        (void) VAR_9;






 if ((uint64)(2147483647/VAR_12)<VAR_15)
  return(VAR_3);
 if ((uint64)(2147483647/VAR_9)<VAR_15)
  return(VAR_3);

 *VAR_8=(uint32)VAR_15;
 VAR_13=(*VAR_8)*VAR_12;
 FUNC_8((tmsize_t)VAR_13>0);

 if( FUNC_9(VAR_6) && VAR_13 > (uint32)VAR_6->tif_size )
  return VAR_1;

 if( !FUNC_9(VAR_6) &&
  (((VAR_6->tif_flags&VAR_4) && VAR_13 > 8) ||
  (!(VAR_6->tif_flags&VAR_4) && VAR_13 > 4)) )
 {
  VAR_14 = ((void*)0);
 }
 else
 {
  VAR_14=FUNC_5(VAR_6, *VAR_8, VAR_12, "ReadDirEntryArray");
  if (VAR_14==0)
   return(VAR_0);
 }
 if (!(VAR_6->tif_flags&VAR_4))
 {
  if (VAR_13<=4)
   FUNC_7(VAR_14,&VAR_7->tdir_offset,VAR_13);
  else
  {
   enum TIFFReadDirEntryErr VAR_16;
   uint32 VAR_17 = VAR_7->tdir_offset.toff_long;
   if (VAR_6->tif_flags&VAR_5)
    FUNC_3(&VAR_17);
   if( FUNC_9(VAR_6) )
    VAR_16=FUNC_1(VAR_6,(uint64)VAR_17,(tmsize_t)VAR_13,VAR_14);
   else
    VAR_16=FUNC_2(VAR_6,(uint64)VAR_17,(tmsize_t)VAR_13,&VAR_14);
   if (VAR_16!=VAR_2)
   {
    FUNC_6(VAR_14);
    return(VAR_16);
   }
  }
 }
 else
 {
  if (VAR_13<=8)
   FUNC_7(VAR_14,&VAR_7->tdir_offset,VAR_13);
  else
  {
   enum TIFFReadDirEntryErr VAR_18;
   uint64 VAR_19 = VAR_7->tdir_offset.toff_long8;
   if (VAR_6->tif_flags&VAR_5)
    FUNC_4(&VAR_19);
   if( FUNC_9(VAR_6) )
    VAR_18=FUNC_1(VAR_6,(uint64)VAR_19,(tmsize_t)VAR_13,VAR_14);
   else
    VAR_18=FUNC_2(VAR_6,(uint64)VAR_19,(tmsize_t)VAR_13,&VAR_14);
   if (VAR_18!=VAR_2)
   {
    FUNC_6(VAR_14);
    return(VAR_18);
   }
  }
 }
 *VAR_10=VAR_14;
 return(VAR_2);
}
