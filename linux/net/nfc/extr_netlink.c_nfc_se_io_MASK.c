
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nfc_se {scalar_t__ state; } ;
struct nfc_dev {int dev; TYPE_1__* ops; int dev_up; } ;
typedef int se_io_cb_t ;
struct TYPE_2__ {int (* se_io ) (struct nfc_dev*,int ,int *,size_t,int ,void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct nfc_se* FUNC_4 (struct nfc_dev*,int ) ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (struct nfc_dev*,int ,int *,size_t,int ,void*) ;

__attribute__((used)) static int FUNC_7(struct nfc_dev *VAR_4, u32 VAR_5,
       u8 *VAR_6, size_t VAR_7,
       se_io_cb_t VAR_8, void *VAR_9)
{
 struct nfc_se *VAR_10;
 int VAR_11;

 FUNC_5("%s se index %d\n", FUNC_0(&VAR_4->dev), VAR_5);

 FUNC_2(&VAR_4->dev);

 if (!FUNC_1(&VAR_4->dev)) {
  VAR_11 = -VAR_1;
  goto error;
 }

 if (!VAR_4->dev_up) {
  VAR_11 = -VAR_1;
  goto error;
 }

 if (!VAR_4->ops->se_io) {
  VAR_11 = -VAR_2;
  goto error;
 }

 VAR_10 = FUNC_4(VAR_4, VAR_5);
 if (!VAR_10) {
  VAR_11 = -VAR_0;
  goto error;
 }

 if (VAR_10->state != VAR_3) {
  VAR_11 = -VAR_1;
  goto error;
 }

 VAR_11 = VAR_4->ops->se_io(VAR_4, VAR_5, VAR_6,
   VAR_7, VAR_8, VAR_9);

error:
 FUNC_3(&VAR_4->dev);
 return VAR_11;
}
