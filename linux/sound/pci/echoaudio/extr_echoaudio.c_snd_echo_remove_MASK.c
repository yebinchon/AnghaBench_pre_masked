
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct echoaudio {int card; } ;


 struct echoaudio* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_0)
{
 struct echoaudio *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  FUNC_1(VAR_1->card);
}
