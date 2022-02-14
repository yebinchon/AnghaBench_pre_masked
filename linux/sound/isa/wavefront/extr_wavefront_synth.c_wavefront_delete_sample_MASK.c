
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * sample_status; } ;
typedef TYPE_1__ snd_wavefront_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int *,unsigned char*) ;

__attribute__((used)) static int
FUNC_1 (snd_wavefront_t *VAR_2, int VAR_3)

{
 unsigned char VAR_4[2];
 int VAR_5;

 VAR_4[0] = VAR_3 & 0x7f;
 VAR_4[1] = VAR_3 >> 7;

 if ((VAR_5 = FUNC_0 (VAR_2, VAR_0, ((void*)0), VAR_4)) == 0) {
  VAR_2->sample_status[VAR_3] = VAR_1;
 }

 return VAR_5;
}
