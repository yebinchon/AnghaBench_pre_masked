
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct oxygen {int uart_input_count; char* uart_input; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int ,char*,int) ;

void FUNC_2(struct oxygen *VAR_1)
{
 if (VAR_1->uart_input_count >= 2 &&
     VAR_1->uart_input[VAR_1->uart_input_count - 2] == 'O' &&
     VAR_1->uart_input[VAR_1->uart_input_count - 1] == 'K') {
  FUNC_0(VAR_1->card->dev, "message from HDMI chip received:\n");
  FUNC_1("", VAR_0,
         VAR_1->uart_input, VAR_1->uart_input_count);
  VAR_1->uart_input_count = 0;
 }
}
