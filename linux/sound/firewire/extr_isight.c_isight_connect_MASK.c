
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int generation; } ;
struct isight {TYPE_2__ resources; scalar_t__ audio_base; int unit; TYPE_1__* device; } ;
struct audio_payload {int dummy; } ;
typedef int __be32 ;
struct TYPE_4__ {int max_speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ,scalar_t__,int *,int,int) ;

__attribute__((used)) static int FUNC_4(struct isight *VAR_5)
{
 int VAR_6, VAR_7;
 __be32 VAR_8;

retry_after_bus_reset:
 VAR_6 = FUNC_1(&VAR_5->resources,
           sizeof(struct audio_payload),
           VAR_5->device->max_speed);
 if (VAR_6 < 0) {
  VAR_7 = VAR_6;
  goto error;
 }

 VAR_8 = FUNC_0(VAR_6 | (VAR_5->device->max_speed << VAR_3));
 VAR_7 = FUNC_3(VAR_5->unit, VAR_4,
     VAR_5->audio_base + VAR_2,
     &VAR_8, 4, VAR_1 |
     VAR_5->resources.generation);
 if (VAR_7 == -VAR_0) {
  FUNC_2(&VAR_5->resources);
  goto retry_after_bus_reset;
 } else if (VAR_7 < 0) {
  goto err_resources;
 }

 return 0;

err_resources:
 FUNC_2(&VAR_5->resources);
error:
 return VAR_7;
}
