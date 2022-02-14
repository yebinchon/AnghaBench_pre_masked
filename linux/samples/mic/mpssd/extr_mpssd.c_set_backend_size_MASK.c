
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int backend_size; int backend_file; int backend; } ;
struct mic_info {TYPE_2__ mic_virtblk; int name; } ;
struct TYPE_4__ {int capacity; } ;
struct TYPE_6__ {TYPE_1__ blk_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char*,int ,int ) ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static bool
FUNC_3(struct mic_info *VAR_3)
{
 VAR_3->mic_virtblk.backend_size = FUNC_1(VAR_3->mic_virtblk.backend, 0,
  VAR_1);
 if (VAR_3->mic_virtblk.backend_size < 0) {
  FUNC_2("%s: can't seek: %s\n",
   VAR_3->name, VAR_3->mic_virtblk.backend_file);
  return 0;
 }
 VAR_2.blk_config.capacity =
  VAR_3->mic_virtblk.backend_size / VAR_0;
 if ((VAR_3->mic_virtblk.backend_size % VAR_0) != 0)
  VAR_2.blk_config.capacity++;

 VAR_2.blk_config.capacity =
  FUNC_0(VAR_2.blk_config.capacity);

 return 1;
}
