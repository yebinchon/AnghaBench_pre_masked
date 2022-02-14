
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct path {int dummy; } ;
struct TYPE_2__ {int ** data; } ;
struct key_preparsed_payload {size_t datalen; int quotalen; int data; TYPE_1__ payload; } ;
struct file {struct path f_path; } ;
struct big_key_buf {void* virt; } ;
typedef size_t ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*) ;
 struct big_key_buf* FUNC_2 (size_t) ;
 int FUNC_3 (int ,struct big_key_buf*,size_t,int *) ;
 size_t VAR_7 ;
 int FUNC_4 (struct big_key_buf*) ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_5 (struct file*) ;
 int FUNC_6 (int *,size_t) ;
 size_t FUNC_7 (struct file*,void*,size_t,int *) ;
 void* FUNC_8 (size_t,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (void*,int ,size_t) ;
 int FUNC_11 (struct path*) ;
 struct file* FUNC_12 (char*,size_t,int ) ;
 scalar_t__ FUNC_13 (int) ;

int FUNC_14(struct key_preparsed_payload *VAR_10)
{
 struct big_key_buf *VAR_11;
 struct path *VAR_12 = (struct path *)&VAR_10->payload.data[VAR_9];
 struct file *VAR_13;
 u8 *VAR_14;
 ssize_t VAR_15;
 size_t VAR_16 = VAR_10->datalen, VAR_17 = VAR_16 + VAR_3;
 int VAR_18;

 if (VAR_16 <= 0 || VAR_16 > 1024 * 1024 || !VAR_10->data)
  return -VAR_2;


 VAR_10->quotalen = 16;

 VAR_10->payload.data[VAR_8] = (void *)(unsigned long)VAR_16;

 if (VAR_16 > VAR_1) {





  loff_t VAR_19 = 0;

  VAR_11 = FUNC_2(VAR_17);
  if (!VAR_11)
   return -VAR_5;
  FUNC_10(VAR_11->virt, VAR_10->data, VAR_16);


  VAR_14 = FUNC_8(VAR_4, VAR_6);
  if (!VAR_14) {
   VAR_18 = -VAR_5;
   goto error;
  }
  VAR_18 = FUNC_6(VAR_14, VAR_4);
  if (FUNC_13(VAR_18))
   goto err_enckey;


  VAR_18 = FUNC_3(VAR_0, VAR_11, VAR_16, VAR_14);
  if (VAR_18)
   goto err_enckey;


  VAR_13 = FUNC_12("", VAR_17, 0);
  if (FUNC_0(VAR_13)) {
   VAR_18 = FUNC_1(VAR_13);
   goto err_enckey;
  }

  VAR_15 = FUNC_7(VAR_13, VAR_11->virt, VAR_17, &VAR_19);
  if (VAR_15 != VAR_17) {
   VAR_18 = VAR_15;
   if (VAR_15 >= 0)
    VAR_18 = -VAR_5;
   goto err_fput;
  }




  VAR_10->payload.data[VAR_7] = VAR_14;
  *VAR_12 = VAR_13->f_path;
  FUNC_11(VAR_12);
  FUNC_5(VAR_13);
  FUNC_4(VAR_11);
 } else {

  void *VAR_20 = FUNC_8(VAR_16, VAR_6);

  if (!VAR_20)
   return -VAR_5;

  VAR_10->payload.data[VAR_7] = VAR_20;
  FUNC_10(VAR_20, VAR_10->data, VAR_10->datalen);
 }
 return 0;

err_fput:
 FUNC_5(VAR_13);
err_enckey:
 FUNC_9(VAR_14);
error:
 FUNC_4(VAR_11);
 return VAR_18;
}
