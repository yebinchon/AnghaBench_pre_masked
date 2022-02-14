
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cygnus_audio {scalar_t__ audio; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cygnus_audio*) ;
 int FUNC_1 (struct cygnus_audio*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_6, void *VAR_7)
{
 u32 VAR_8;
 struct cygnus_audio *VAR_9 = VAR_7;
 VAR_8 = FUNC_2(VAR_9->audio + VAR_3);

 if (!(VAR_8 & (VAR_1 | VAR_0)))
  return VAR_5;


 if (VAR_1 & VAR_8) {
  FUNC_1(VAR_9);
  FUNC_3(VAR_1 & VAR_8,
   VAR_9->audio + VAR_2);
 }


 if (VAR_0 & VAR_8) {
  FUNC_0(VAR_9);
  FUNC_3(VAR_0 & VAR_8,
   VAR_9->audio + VAR_2);
 }

 return VAR_4;
}
