
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32 ;
struct _HPDF_CCITT_Data {int dummy; } ;
typedef int int32 ;
typedef int HPDF_STATUS ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (unsigned char*,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_2 (unsigned char*,scalar_t__,scalar_t__,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct _HPDF_CCITT_Data*,int *) ;
 int FUNC_4 (struct _HPDF_CCITT_Data*,scalar_t__,int ) ;
 int * VAR_5 ;

__attribute__((used)) static HPDF_STATUS
FUNC_5(struct _HPDF_CCITT_Data *VAR_6, unsigned char* VAR_7, unsigned char* VAR_8, uint32 VAR_9)
{

        uint32 VAR_10 = 0;
 uint32 VAR_11 = (((((VAR_7)[(0)>>3]) >> (7-((0)&7))) & 1) != 0 ? 0 : FUNC_1(VAR_7, 0, VAR_9, 0));
 uint32 VAR_12 = (((((VAR_8)[(0)>>3]) >> (7-((0)&7))) & 1) != 0 ? 0 : FUNC_1(VAR_8, 0, VAR_9, 0));
 uint32 VAR_13, VAR_14;

 for (;;) {
  VAR_14 = FUNC_2(VAR_8, VAR_12, VAR_9, ((((VAR_8)[(VAR_12)>>3]) >> (7-((VAR_12)&7))) & 1));
  if (VAR_14 >= VAR_11) {
   int32 VAR_15 = VAR_12 - VAR_11;
   if (!(-3 <= VAR_15 && VAR_15 <= 3)) {
    VAR_13 = FUNC_2(VAR_7, VAR_11, VAR_9, ((((VAR_7)[(VAR_11)>>3]) >> (7-((VAR_11)&7))) & 1));
    FUNC_3(VAR_6, &VAR_3);
    if (VAR_10+VAR_11 == 0 || ((((VAR_7)[(VAR_10)>>3]) >> (7-((VAR_10)&7))) & 1) == 0) {
     FUNC_4(VAR_6, VAR_11-VAR_10, VAR_2);
     FUNC_4(VAR_6, VAR_13-VAR_11, VAR_1);
    } else {
     FUNC_4(VAR_6, VAR_11-VAR_10, VAR_1);
     FUNC_4(VAR_6, VAR_13-VAR_11, VAR_2);
    }
    VAR_10 = VAR_13;
   } else {
    FUNC_3(VAR_6, &VAR_5[VAR_15+3]);
    VAR_10 = VAR_11;
   }
  } else {
   FUNC_3(VAR_6, &VAR_4);
   VAR_10 = VAR_14;
  }
  if (VAR_10 >= VAR_9)
   break;
  VAR_11 = FUNC_1(VAR_7, VAR_10, VAR_9, ((((VAR_7)[(VAR_10)>>3]) >> (7-((VAR_10)&7))) & 1));
  VAR_12 = FUNC_1(VAR_8, VAR_10, VAR_9, !((((VAR_7)[(VAR_10)>>3]) >> (7-((VAR_10)&7))) & 1));
  VAR_12 = FUNC_1(VAR_8, VAR_12, VAR_9, ((((VAR_7)[(VAR_10)>>3]) >> (7-((VAR_10)&7))) & 1));
 }
 return VAR_0;

}
