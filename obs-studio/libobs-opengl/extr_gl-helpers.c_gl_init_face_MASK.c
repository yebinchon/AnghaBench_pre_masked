
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int GLint ;
typedef int GLenum ;


 int FUNC_0 (int ,scalar_t__,int ,scalar_t__,scalar_t__,int ,scalar_t__,int const*) ;
 int FUNC_1 (int ,scalar_t__,int ,scalar_t__,scalar_t__,int ,int ,int ,int const*) ;
 int FUNC_2 (char*) ;

bool FUNC_3(GLenum VAR_0, GLenum VAR_1, uint32_t VAR_2,
    GLenum VAR_3, GLint VAR_4, bool VAR_5,
    uint32_t VAR_6, uint32_t VAR_7, uint32_t VAR_8,
    const uint8_t ***VAR_9)
{
 bool VAR_10 = 1;
 const uint8_t **VAR_11 = VAR_9 ? *VAR_9 : ((void*)0);
 uint32_t VAR_12;

 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
  if (VAR_5) {
   FUNC_0(VAR_0, VAR_12, VAR_4,
            VAR_6, VAR_7, 0, VAR_8,
            VAR_11 ? *VAR_11 : ((void*)0));
   if (!FUNC_2("glCompressedTexImage2D"))
    VAR_10 = 0;

  } else {
   FUNC_1(VAR_0, VAR_12, VAR_4, VAR_6, VAR_7,
         0, VAR_3, VAR_1, VAR_11 ? *VAR_11 : ((void*)0));
   if (!FUNC_2("glTexImage2D"))
    VAR_10 = 0;
  }

  if (VAR_11)
   VAR_11++;

  VAR_8 /= 4;
  VAR_6 /= 2;
  VAR_7 /= 2;

  if (VAR_6 == 0)
   VAR_6 = 1;
  if (VAR_7 == 0)
   VAR_7 = 1;
 }

 if (VAR_11)
  *VAR_9 = VAR_11;
 return VAR_10;
}
