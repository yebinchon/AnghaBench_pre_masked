
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ id; scalar_t__ ch_in; scalar_t__ ch_out; } ;
struct TYPE_4__ {int fragment_size; int fragments; } ;
struct snd_compr_params {TYPE_1__ codec; TYPE_2__ buffer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct snd_compr_params *VAR_3)
{

 if (VAR_3->buffer.fragment_size == 0 ||
     VAR_3->buffer.fragments > VAR_2 / VAR_3->buffer.fragment_size ||
     VAR_3->buffer.fragments == 0)
  return -VAR_0;


 if (VAR_3->codec.id == 0 || VAR_3->codec.id > VAR_1)
  return -VAR_0;

 if (VAR_3->codec.ch_in == 0 || VAR_3->codec.ch_out == 0)
  return -VAR_0;

 return 0;
}
