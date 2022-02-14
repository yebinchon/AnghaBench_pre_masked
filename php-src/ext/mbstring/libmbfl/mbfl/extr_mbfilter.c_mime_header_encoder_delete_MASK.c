
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mime_header_encoder_data {int tmpdev; int outdev; int encod_filter_backup; int encod_filter; int conv2_filter_backup; int conv2_filter; int block_filter; int conv1_filter; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct mime_header_encoder_data *VAR_0)
{
 if (VAR_0) {
  FUNC_0(VAR_0->conv1_filter);
  FUNC_0(VAR_0->block_filter);
  FUNC_0(VAR_0->conv2_filter);
  FUNC_0(VAR_0->conv2_filter_backup);
  FUNC_0(VAR_0->encod_filter);
  FUNC_0(VAR_0->encod_filter_backup);
  FUNC_2(&VAR_0->outdev);
  FUNC_2(&VAR_0->tmpdev);
  FUNC_1((void*)VAR_0);
 }
}
