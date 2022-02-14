
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct vt_h264_encoder {int dummy; } ;
struct darray {size_t num; int const* array; } ;
typedef int OSStatus ;
typedef int CMFormatDescriptionRef ;


 int FUNC_0 (int ,size_t,int const**,size_t*,int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct vt_h264_encoder*,char*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct darray*,int const*,size_t) ;
 int FUNC_3 (struct darray*,int) ;

__attribute__((used)) static bool FUNC_4(struct vt_h264_encoder *VAR_2,
       CMFormatDescriptionRef VAR_3,
       size_t VAR_4, struct darray *VAR_5,
       struct darray *VAR_6)
{
 OSStatus VAR_7;
 const uint8_t *VAR_8;
 size_t VAR_9;

 for (size_t VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  VAR_7 = FUNC_0(
   VAR_3, VAR_10, &VAR_8, &VAR_9, ((void*)0), ((void*)0));
  if (VAR_7 != VAR_1) {
   FUNC_1(VAR_0, VAR_2,
         "getting NAL parameter "
         "at index",
         VAR_7);
   return 0;
  }

  FUNC_3(VAR_5, 4);
  FUNC_2(VAR_5, VAR_8, VAR_9);
 }



 if (VAR_6 != ((void*)0))
  FUNC_2(VAR_6, VAR_5->array, VAR_5->num);

 return 1;
}
