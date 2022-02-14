
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ GLint ;
typedef scalar_t__ GLenum ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int,int ,scalar_t__*) ;
 int FUNC_4 (scalar_t__,int,scalar_t__,scalar_t__,int ,scalar_t__,scalar_t__,int *) ;
 int FUNC_5 (scalar_t__,int,scalar_t__,scalar_t__,scalar_t__,int ,scalar_t__,scalar_t__,int *) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 double FUNC_7 (char const*,int *) ;

__attribute__((used)) static void FUNC_8(GLenum VAR_14, GLint VAR_15, GLint VAR_16,
         GLint VAR_17, GLenum VAR_18, GLenum VAR_19,
         GLint *VAR_20, GLint *VAR_21)
{

   if ( (FUNC_7((const char *)FUNC_2(VAR_13),((void*)0)) >= 1.1)
 ) {
      GLint VAR_22= FUNC_6(VAR_15);
      GLint VAR_23= FUNC_6(VAR_16);
      GLint VAR_24;

      do {

  GLint VAR_25= (VAR_22 > 1) ?
     VAR_22 >> 1 :
     VAR_22;
  GLint VAR_26= (VAR_23 > 1) ?
      VAR_23 >> 1 :
      VAR_23;
  GLenum VAR_27;
  FUNC_0(VAR_25 > 0); FUNC_0(VAR_26 > 0);


  if (VAR_14 == VAR_5 || VAR_14 == VAR_2) {
     VAR_27 = VAR_2;
     FUNC_5(VAR_27, 1,
    VAR_17,
    VAR_25,VAR_26,0,VAR_18,VAR_19,((void*)0));
  } else
  {
     FUNC_0(VAR_14 == VAR_4 || VAR_14 == VAR_1);
     VAR_27 = VAR_1;
     FUNC_4(VAR_27, 1,
    VAR_17,VAR_25,0,VAR_18,VAR_19,((void*)0));
  }
  FUNC_3(VAR_27, 1,VAR_12,&VAR_24);

  if (VAR_24 == 0) {
     if (VAR_22 == 1 && VAR_23 == 1) {






        goto noProxyTextures;
     }
     VAR_22= VAR_25;
     VAR_23= VAR_26;
  }

      } while (VAR_24 == 0);



      *VAR_20= VAR_22;
      *VAR_21= VAR_23;

   }
   else {
      GLint VAR_28;

noProxyTextures:

      FUNC_1(VAR_0, &VAR_28);

      *VAR_20 = FUNC_6(VAR_15);
      if (*VAR_20 > VAR_28) *VAR_20 = VAR_28;
      *VAR_21 = FUNC_6(VAR_16);
      if (*VAR_21 > VAR_28) *VAR_21 = VAR_28;

   }
}
