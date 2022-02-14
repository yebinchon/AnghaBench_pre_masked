
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uLongf ;
typedef scalar_t__ uLong ;
typedef int fz_context ;
typedef int fz_buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,scalar_t__*,unsigned char const*,scalar_t__) ;
 size_t FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int *) ;
 unsigned char* FUNC_3 (int *,size_t) ;
 int * FUNC_4 (int *,unsigned char*,size_t) ;
 int FUNC_5 (int *,int *,scalar_t__) ;
 int FUNC_6 (int *,int ,char*) ;

__attribute__((used)) static fz_buffer *FUNC_7(fz_context *VAR_2, const unsigned char *VAR_3, size_t VAR_4)
{
 fz_buffer *VAR_5;
 uLongf VAR_6;
 int VAR_7;
 uLong VAR_8 = (uLong)VAR_4;
 unsigned char *VAR_9;
 size_t VAR_10;

 if (VAR_4 != (size_t)VAR_8)
  FUNC_6(VAR_2, VAR_0, "Buffer too large to deflate");

 VAR_10 = FUNC_1(VAR_8);
 VAR_9 = FUNC_3(VAR_2, VAR_10);
 VAR_5 = FUNC_4(VAR_2, VAR_9, VAR_10);
 VAR_6 = (uLongf)VAR_10;
 VAR_7 = FUNC_0(VAR_9, &VAR_6, VAR_3, VAR_8);
 if (VAR_7 != VAR_1)
 {
  FUNC_2(VAR_2, VAR_5);
  FUNC_6(VAR_2, VAR_0, "cannot deflate buffer");
 }
 FUNC_5(VAR_2, VAR_5, VAR_6);
 return VAR_5;
}
