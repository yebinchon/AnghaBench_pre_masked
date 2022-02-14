
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mime_header_decoder_data {int * deco_filter; int * conv2_filter; int * conv1_filter; int const* encoding; int const* incode; int outdev; int const* outcode; scalar_t__ status; scalar_t__ cspos; int tmpdev; } ;
typedef int mbfl_encoding ;


 void* FUNC_0 (int const*,int const*,int ,int ,int *) ;
 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (struct mime_header_decoder_data*) ;

struct mime_header_decoder_data*
FUNC_4(const mbfl_encoding *VAR_5)
{
 struct mime_header_decoder_data *VAR_6;

 VAR_6 = (struct mime_header_decoder_data*)FUNC_1(sizeof(struct mime_header_decoder_data));
 if (VAR_6 == ((void*)0)) {
  return ((void*)0);
 }

 FUNC_2(&VAR_6->outdev, 0, 0);
 FUNC_2(&VAR_6->tmpdev, 0, 0);
 VAR_6->cspos = 0;
 VAR_6->status = 0;
 VAR_6->encoding = &VAR_0;
 VAR_6->incode = &VAR_1;
 VAR_6->outcode = VAR_5;

 VAR_6->conv2_filter = FUNC_0(&VAR_2, VAR_6->outcode, VAR_4, 0, &VAR_6->outdev);
 VAR_6->conv1_filter = FUNC_0(VAR_6->incode, &VAR_2, VAR_3, 0, VAR_6->conv2_filter);

 VAR_6->deco_filter = FUNC_0(VAR_6->encoding, &VAR_0, VAR_3, 0, VAR_6->conv1_filter);

 if (VAR_6->conv1_filter == ((void*)0) || VAR_6->conv2_filter == ((void*)0) || VAR_6->deco_filter == ((void*)0)) {
  FUNC_3(VAR_6);
  return ((void*)0);
 }

 return VAR_6;
}
