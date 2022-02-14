
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_korg1212 {size_t clkSrcRate; size_t cardState; scalar_t__ totalerrorcnt; scalar_t__ irqcount; scalar_t__ cmdRetryCount; scalar_t__ idleMonitorOn; TYPE_2__* sharedBufferPtr; scalar_t__ rightADCInSens; scalar_t__ leftADCInSens; TYPE_1__* card; } ;
struct snd_info_entry {struct snd_korg1212* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct TYPE_4__ {size_t* routeData; scalar_t__ AdatTimeCode; int * volumeData; } ;
struct TYPE_3__ {scalar_t__ number; int longname; } ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 scalar_t__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_info_buffer*,char*,...) ;
 scalar_t__* VAR_4 ;

__attribute__((used)) static void FUNC_1(struct snd_info_entry *VAR_5,
       struct snd_info_buffer *VAR_6)
{
 int VAR_7;
 struct snd_korg1212 *VAR_8 = VAR_5->private_data;

 FUNC_0(VAR_6, VAR_8->card->longname);
 FUNC_0(VAR_6, " (index #%d)\n", VAR_8->card->number + 1);
 FUNC_0(VAR_6, "\nGeneral settings\n");
 FUNC_0(VAR_6, "    period size: %zd bytes\n", VAR_0);
 FUNC_0(VAR_6, "     clock mode: %s\n", VAR_2[VAR_8->clkSrcRate] );
 FUNC_0(VAR_6, "  left ADC Sens: %d\n", VAR_8->leftADCInSens );
 FUNC_0(VAR_6, " right ADC Sens: %d\n", VAR_8->rightADCInSens );
        FUNC_0(VAR_6, "    Volume Info:\n");
        for (VAR_7=0; VAR_7<VAR_3; VAR_7++)
                FUNC_0(VAR_6, " Channel %d: %s -> %s [%d]\n", VAR_7,
                                    VAR_1[VAR_7],
                                    VAR_1[VAR_8->sharedBufferPtr->routeData[VAR_7]],
                                    VAR_8->sharedBufferPtr->volumeData[VAR_7]);
 FUNC_0(VAR_6, "\nGeneral status\n");
        FUNC_0(VAR_6, " ADAT Time Code: %d\n", VAR_8->sharedBufferPtr->AdatTimeCode);
        FUNC_0(VAR_6, "     Card State: %s\n", VAR_4[VAR_8->cardState]);
        FUNC_0(VAR_6, "Idle mon. State: %d\n", VAR_8->idleMonitorOn);
        FUNC_0(VAR_6, "Cmd retry count: %d\n", VAR_8->cmdRetryCount);
        FUNC_0(VAR_6, "      Irq count: %ld\n", VAR_8->irqcount);
        FUNC_0(VAR_6, "    Error count: %ld\n", VAR_8->totalerrorcnt);
}
