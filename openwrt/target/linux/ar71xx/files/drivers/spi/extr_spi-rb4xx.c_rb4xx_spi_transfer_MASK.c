
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_message {TYPE_1__* spi; int queue; int status; scalar_t__ actual_length; } ;
struct spi_device {int master; } ;
struct rb4xx_spi {scalar_t__ cs_wait; int lock; scalar_t__ busy; int queue; } ;
struct TYPE_2__ {scalar_t__ chip_select; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct rb4xx_spi*,unsigned long*) ;
 struct rb4xx_spi* FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_1,
         struct spi_message *VAR_2)
{
 struct rb4xx_spi *VAR_3 = FUNC_2(VAR_1->master);
 unsigned long VAR_4;

 VAR_2->actual_length = 0;
 VAR_2->status = -VAR_0;

 FUNC_3(&VAR_3->lock, VAR_4);
 FUNC_0(&VAR_2->queue, &VAR_3->queue);
 if (VAR_3->busy ||
     (VAR_3->cs_wait >= 0 && VAR_3->cs_wait != VAR_2->spi->chip_select)) {

  FUNC_4(&VAR_3->lock, VAR_4);
  return 0;
 }


 FUNC_1(VAR_3, &VAR_4);
 FUNC_4(&VAR_3->lock, VAR_4);

 return 0;
}
