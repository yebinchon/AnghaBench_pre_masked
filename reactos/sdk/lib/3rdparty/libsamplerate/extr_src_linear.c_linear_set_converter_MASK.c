
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int channels; int linear_magic_marker; } ;
struct TYPE_7__ {int channels; int (* reset ) (TYPE_1__*) ;void* vari_process; void* const_process; TYPE_2__* private_data; } ;
typedef TYPE_1__ SRC_PRIVATE ;
typedef TYPE_2__ LINEAR_DATA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;
 void* VAR_5 ;

int
FUNC_3 (SRC_PRIVATE *VAR_6, int VAR_7)
{ LINEAR_DATA *VAR_8 = ((void*)0) ;

 if (VAR_7 != VAR_4)
  return VAR_1 ;

 if (VAR_6->private_data != ((void*)0))
 { FUNC_1 (VAR_6->private_data) ;
  VAR_6->private_data = ((void*)0) ;
  } ;

 if (VAR_6->private_data == ((void*)0))
 { VAR_8 = FUNC_0 (1, sizeof (*VAR_8) + VAR_6->channels * sizeof (float)) ;
  VAR_6->private_data = VAR_8 ;
  } ;

 if (VAR_8 == ((void*)0))
  return VAR_2 ;

 VAR_8->linear_magic_marker = VAR_0 ;
 VAR_8->channels = VAR_6->channels ;

 VAR_6->const_process = VAR_5 ;
 VAR_6->vari_process = VAR_5 ;
 VAR_6->reset = FUNC_2 ;

 FUNC_2 (VAR_6) ;

 return VAR_3 ;
}
