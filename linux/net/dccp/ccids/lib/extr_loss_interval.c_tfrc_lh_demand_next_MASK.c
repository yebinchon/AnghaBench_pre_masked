
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tfrc_loss_interval {int dummy; } ;
struct tfrc_loss_hist {int counter; struct tfrc_loss_interval** ring; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 struct tfrc_loss_interval* FUNC_1 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static struct tfrc_loss_interval *FUNC_2(struct tfrc_loss_hist *VAR_2)
{
 if (VAR_2->ring[FUNC_0(VAR_2->counter)] == ((void*)0))
  VAR_2->ring[FUNC_0(VAR_2->counter)] = FUNC_1(VAR_1,
            VAR_0);
 return VAR_2->ring[FUNC_0(VAR_2->counter)];
}
