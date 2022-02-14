
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card_als4000 {int pci; int iobase; } ;
struct snd_card {struct snd_card_als4000* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_card_als4000*) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4( struct snd_card *VAR_1 )
{
 struct snd_card_als4000 *VAR_2 = VAR_1->private_data;


 FUNC_3(VAR_2->iobase, VAR_0, 0);

 FUNC_2(VAR_2);
 FUNC_1(VAR_2->pci);
 FUNC_0(VAR_2->pci);
}
