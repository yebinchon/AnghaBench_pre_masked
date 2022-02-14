
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct urb {int transfer_dma; int transfer_flags; } ;
struct panda_dev_priv {int dev; int udev; int rx_submitted; int * interfaces; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int * FUNC_2 (int ,int ,int ,int *) ;
 struct urb* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct urb*,int *) ;
 int FUNC_5 (struct urb*,int ,int ,int *,int ,int ,struct panda_dev_priv*,int) ;
 int FUNC_6 (int ,int ,int *,int ) ;
 int FUNC_7 (struct urb*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (struct urb*,int ) ;
 int FUNC_11 (struct urb*) ;

__attribute__((used)) static int FUNC_12(struct panda_dev_priv *VAR_6)
{
  int VAR_7;
  struct urb *VAR_8 = ((void*)0);
  u8 *VAR_9;
  int VAR_10;

  for(VAR_10 = 0; VAR_10 < VAR_2; VAR_10++)
    FUNC_1(VAR_6->interfaces[VAR_10]);

  VAR_7 = FUNC_9(VAR_6->udev, 0, 1);
  if (VAR_7) {
    FUNC_0(VAR_6->dev, "Can not set alternate setting to 1, error: %i", VAR_7);
    return VAR_7;
  }


  VAR_8 = FUNC_3(0, VAR_1);
  if (!VAR_8) {
    return -VAR_0;
  }

  VAR_9 = FUNC_2(VAR_6->udev, VAR_3,
      VAR_1, &VAR_8->transfer_dma);
  if (!VAR_9) {
    FUNC_0(VAR_6->dev, "No memory left for USB buffer\n");
    FUNC_7(VAR_8);
    return -VAR_0;
  }

  FUNC_5(VAR_8, VAR_6->udev,
                   FUNC_8(VAR_6->udev, 1),
                   VAR_9, VAR_3,
                   VAR_5, VAR_6, 5);
  VAR_8->transfer_flags |= VAR_4;

  FUNC_4(VAR_8, &VAR_6->rx_submitted);

  VAR_7 = FUNC_10(VAR_8, VAR_1);
  if (VAR_7) {
  FUNC_11(VAR_8);
    FUNC_6(VAR_6->udev, VAR_3,
        VAR_9, VAR_8->transfer_dma);
    FUNC_7(VAR_8);
    FUNC_0(VAR_6->dev, "Failed in start, while submitting urb.\n");
    return VAR_7;
  }


  FUNC_7(VAR_8);


  return 0;
}
