
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enc_encoder {int packet_buffer; scalar_t__ aframe; scalar_t__ context; scalar_t__* samples; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct enc_encoder*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_0)
{
 struct enc_encoder *VAR_1 = VAR_0;

 if (VAR_1->samples[0])
  FUNC_1(&VAR_1->samples[0]);
 if (VAR_1->context)
  FUNC_2(VAR_1->context);
 if (VAR_1->aframe)
  FUNC_0(&VAR_1->aframe);

 FUNC_4(VAR_1->packet_buffer);
 FUNC_3(VAR_1);
}
