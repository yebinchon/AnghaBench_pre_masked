
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdspm {int period_bytes; void* playback_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct hdspm *VAR_2)
{
 int VAR_3;
 int VAR_4 = VAR_2->period_bytes;
 void *VAR_5 = VAR_2->playback_buffer;

 if (!VAR_5)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  FUNC_0(VAR_5, 0, VAR_4);
  VAR_5 += VAR_0;
 }
}
