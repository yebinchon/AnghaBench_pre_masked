
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdsp {int io_type; char* card_name; void* ds_out_channels; void* ds_in_channels; void* ss_out_channels; void* ss_in_channels; int qs_out_channels; int qs_in_channels; } ;


 void* VAR_0 ;
 void* VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;


 void* VAR_12 ;
 int FUNC_0 (struct hdsp*,int ) ;

__attribute__((used)) static void FUNC_1(struct hdsp *VAR_13)
{
 int VAR_14, VAR_15, VAR_16;

 switch (VAR_13->io_type) {
 case 132:
  VAR_13->card_name = "RME Hammerfall DSP + Digiface";
  VAR_13->ss_in_channels = VAR_13->ss_out_channels = VAR_1;
  VAR_13->ds_in_channels = VAR_13->ds_out_channels = VAR_0;
  break;

 case 130:
  VAR_13->card_name = "RME Hammerfall HDSP 9652";
  VAR_13->ss_in_channels = VAR_13->ss_out_channels = VAR_6;
  VAR_13->ds_in_channels = VAR_13->ds_out_channels = VAR_5;
  break;

 case 131:
  VAR_14 = FUNC_0(VAR_13, VAR_9);

  VAR_15 = (VAR_14 & VAR_7) ? 0 : 4;
  VAR_16 = (VAR_14 & VAR_8) ? 0 : 4;
  VAR_13->card_name = "RME Hammerfall HDSP 9632";
  VAR_13->ss_in_channels = VAR_4+VAR_15;
  VAR_13->ds_in_channels = VAR_2+VAR_15;
  VAR_13->qs_in_channels = VAR_3+VAR_15;
  VAR_13->ss_out_channels = VAR_4+VAR_16;
  VAR_13->ds_out_channels = VAR_2+VAR_16;
  VAR_13->qs_out_channels = VAR_3+VAR_16;
  break;

 case 129:
  VAR_13->card_name = "RME Hammerfall DSP + Multiface";
  VAR_13->ss_in_channels = VAR_13->ss_out_channels = VAR_11;
  VAR_13->ds_in_channels = VAR_13->ds_out_channels = VAR_10;
  break;

 case 128:
  VAR_13->card_name = "RME Hammerfall DSP + RPM";
  VAR_13->ss_in_channels = VAR_12-1;
  VAR_13->ss_out_channels = VAR_12;
  VAR_13->ds_in_channels = VAR_12-1;
  VAR_13->ds_out_channels = VAR_12;
  break;

 default:

  break;
 }
}
