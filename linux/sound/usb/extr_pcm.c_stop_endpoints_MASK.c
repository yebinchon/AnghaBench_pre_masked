
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_substream {int data_endpoint; int sync_endpoint; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct snd_usb_substream *VAR_2, bool VAR_3)
{
 if (FUNC_2(VAR_1, &VAR_2->flags))
  FUNC_0(VAR_2->sync_endpoint);

 if (FUNC_2(VAR_0, &VAR_2->flags))
  FUNC_0(VAR_2->data_endpoint);

 if (VAR_3) {
  FUNC_1(VAR_2->sync_endpoint);
  FUNC_1(VAR_2->data_endpoint);
 }
}
