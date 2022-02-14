
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {double src_ratio; int input_frames; int output_frames; scalar_t__ output_frames_gen; scalar_t__ input_frames_used; int * data_in; int * data_out; } ;
struct TYPE_8__ {int (* vari_process ) (TYPE_1__*,TYPE_2__*) ;int (* const_process ) (TYPE_1__*,TYPE_2__*) ;scalar_t__ mode; int channels; double last_ratio; } ;
typedef int SRC_STATE ;
typedef TYPE_1__ SRC_PRIVATE ;
typedef TYPE_2__ SRC_DATA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 double VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (double) ;
 scalar_t__ FUNC_1 (double) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;

int
FUNC_4 (SRC_STATE *VAR_9, SRC_DATA *VAR_10)
{ SRC_PRIVATE *VAR_11 ;
 int VAR_12 ;

 VAR_11 = (SRC_PRIVATE*) VAR_9 ;

 if (VAR_11 == ((void*)0))
  return VAR_5 ;
 if (VAR_11->vari_process == ((void*)0) || VAR_11->const_process == ((void*)0))
  return VAR_3 ;

 if (VAR_11->mode != VAR_8)
  return VAR_2 ;


 if (VAR_10 == ((void*)0))
  return VAR_0 ;


 if (VAR_10->data_in == ((void*)0) || VAR_10->data_out == ((void*)0))
  return VAR_1 ;


 if (FUNC_1 (VAR_10->src_ratio))
  return VAR_4 ;

 if (VAR_10->input_frames < 0)
  VAR_10->input_frames = 0 ;
 if (VAR_10->output_frames < 0)
  VAR_10->output_frames = 0 ;

 if (VAR_10->data_in < VAR_10->data_out)
 { if (VAR_10->data_in + VAR_10->input_frames * VAR_11->channels > VAR_10->data_out)
  {

   return VAR_6 ;
   } ;
  }
 else if (VAR_10->data_out + VAR_10->output_frames * VAR_11->channels > VAR_10->data_in)
 {



  return VAR_6 ;
  } ;


 VAR_10->input_frames_used = 0 ;
 VAR_10->output_frames_gen = 0 ;


 if (VAR_11->last_ratio < (1.0 / VAR_7))
  VAR_11->last_ratio = VAR_10->src_ratio ;


 if (FUNC_0 (VAR_11->last_ratio - VAR_10->src_ratio) < 1e-15)
  VAR_12 = VAR_11->const_process (VAR_11, VAR_10) ;
 else
  VAR_12 = VAR_11->vari_process (VAR_11, VAR_10) ;

 return VAR_12 ;
}
