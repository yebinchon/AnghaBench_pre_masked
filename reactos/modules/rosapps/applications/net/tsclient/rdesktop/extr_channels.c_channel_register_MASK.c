
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_8__ {void (* process ) (TYPE_1__*,VAR_0) ;int flags; int name; scalar_t__ mcs_id; } ;
typedef TYPE_2__ VCHANNEL ;
struct TYPE_7__ {size_t num_channels; TYPE_2__* channels; int use_rdp5; } ;
typedef TYPE_1__ RDPCLIENT ;


 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int) ;

VCHANNEL *
FUNC_2(RDPCLIENT * VAR_3, char *VAR_4, uint32 VAR_5, void (*VAR_6) (RDPCLIENT *, VAR_7))
{
 VCHANNEL *VAR_8;

 if (!VAR_3->use_rdp5)
  return ((void*)0);

 if (VAR_3->num_channels >= VAR_1)
 {
  FUNC_0("Channel table full, increase MAX_CHANNELS\n");
  return ((void*)0);
 }

 VAR_8 = &VAR_3->channels[VAR_3->num_channels];
 VAR_8->mcs_id = VAR_2 + 1 + VAR_3->num_channels;
 FUNC_1(VAR_8->name, VAR_4, 8);
 VAR_8->flags = VAR_5;
 VAR_8->process = VAR_6;
 VAR_3->num_channels++;
 return VAR_8;
}
