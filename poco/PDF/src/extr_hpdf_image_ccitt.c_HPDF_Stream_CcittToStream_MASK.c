
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tidata_t ;
struct _HPDF_CCITT_Data {int tif_rawdatasize; scalar_t__ tif_rawdata; scalar_t__ tif_rawcp; scalar_t__ tif_rawcc; int dst; } ;
typedef int HPDF_UINT ;
typedef int HPDF_Stream ;
typedef int HPDF_STATUS ;
typedef int HPDF_Encrypt ;
typedef int HPDF_BYTE ;
typedef scalar_t__ HPDF_BOOL ;


 scalar_t__ FUNC_0 (struct _HPDF_CCITT_Data*) ;
 scalar_t__ FUNC_1 (struct _HPDF_CCITT_Data*,int,int,int) ;
 int FUNC_2 (struct _HPDF_CCITT_Data*,scalar_t__,int) ;
 int FUNC_3 (struct _HPDF_CCITT_Data*) ;
 int FUNC_4 (struct _HPDF_CCITT_Data*) ;
 scalar_t__ FUNC_5 (struct _HPDF_CCITT_Data*) ;
 scalar_t__ VAR_0 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct _HPDF_CCITT_Data*,int ,int) ;

HPDF_STATUS
FUNC_9( const HPDF_BYTE *VAR_1,
                            HPDF_Stream VAR_2,
       HPDF_Encrypt VAR_3,
       HPDF_UINT VAR_4,
       HPDF_UINT VAR_5,
       HPDF_UINT VAR_6,
       HPDF_BOOL VAR_7)
{
 const HPDF_BYTE *VAR_8;
 const HPDF_BYTE *VAR_9;
 int VAR_10;
 struct _HPDF_CCITT_Data VAR_11;

 FUNC_6 (VAR_3);

 if(VAR_5==0) return 1;
 if(VAR_7) {
  VAR_8 = VAR_1;
  VAR_9=VAR_1+(VAR_6*VAR_5);
  VAR_10 = VAR_6;
 } else {
  VAR_8 = VAR_1+(VAR_6*(VAR_5-1));
  VAR_9= VAR_1-VAR_6;
  VAR_10 = -((int)VAR_6);
 }

 FUNC_8(&VAR_11, 0, sizeof(struct _HPDF_CCITT_Data));
 VAR_11.dst = VAR_2;
 VAR_11.tif_rawdata = (tidata_t) FUNC_7( 16384 );
 VAR_11.tif_rawdatasize = 16384;
 VAR_11.tif_rawcc = 0;
 VAR_11.tif_rawcp = VAR_11.tif_rawdata;

 if(FUNC_5(&VAR_11)!=VAR_0)
  return 1;

 if(FUNC_1(&VAR_11, VAR_4, VAR_5, VAR_6)!=VAR_0)
 {
  FUNC_4(&VAR_11);
  return 1;
 }

 if(FUNC_0(&VAR_11)!=VAR_0)
 {
  FUNC_4(&VAR_11);
  return 1;
 }


 while(VAR_9!=VAR_8)
 {
  FUNC_2(&VAR_11, (tidata_t)VAR_8, VAR_6);
  VAR_8+=VAR_10;
 }

 FUNC_3(&VAR_11);

 FUNC_4(&VAR_11);

 return VAR_0;
}
