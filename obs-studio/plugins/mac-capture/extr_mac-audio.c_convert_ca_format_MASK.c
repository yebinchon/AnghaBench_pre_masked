
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum audio_format { ____Placeholder_audio_format } audio_format ;
typedef int UInt32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static inline enum audio_format FUNC_0(UInt32 VAR_12,
        UInt32 VAR_13)
{
 bool VAR_14 = (VAR_12 & VAR_10) != 0;

 if (VAR_12 & VAR_9)
  return VAR_14 ? VAR_5 : VAR_4;

 if (!(VAR_12 & VAR_11) && VAR_13 == 8)
  return VAR_14 ? VAR_7 : VAR_6;


 if ((VAR_12 & VAR_11) == 0)
  return VAR_8;

 if (VAR_13 == 16)
  return VAR_14 ? VAR_1 : VAR_0;
 else if (VAR_13 == 32)
  return VAR_14 ? VAR_3 : VAR_2;

 return VAR_8;
}
