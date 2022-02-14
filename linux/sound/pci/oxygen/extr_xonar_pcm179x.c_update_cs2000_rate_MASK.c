
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xonar_pcm179x {scalar_t__ h6; } ;
struct oxygen {struct xonar_pcm179x* model_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct oxygen*,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct oxygen*,int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct oxygen *VAR_11, unsigned int VAR_12)
{
 struct xonar_pcm179x *VAR_13 = VAR_11->model_data;
 u8 VAR_14, VAR_15;

 switch (VAR_12) {
 case 32000:
 case 64000:
  VAR_14 = VAR_8;
  break;
 case 44100:
 case 88200:
 case 176400:
  VAR_14 = VAR_9;
  break;
 default:
 case 48000:
 case 96000:
 case 192000:
  VAR_14 = VAR_10;
  break;
 }

 if (VAR_12 <= 96000 && (VAR_12 > 48000 || VAR_13->h6)) {
  VAR_14 |= FUNC_0(VAR_3);
  VAR_15 = VAR_1;
 } else {
  VAR_14 |= FUNC_0(VAR_4);
  VAR_15 = VAR_2;
 }

 FUNC_3(VAR_11, VAR_5, VAR_14,
         VAR_7 | VAR_6);
 FUNC_1(VAR_11, VAR_0, VAR_15);
 FUNC_2(3);
}
