
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int backend_file; int backend; int backend_size; int backend_addr; } ;
struct mic_info {TYPE_1__ mic_virtblk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct mic_info *VAR_0)
{
 FUNC_2(VAR_0->mic_virtblk.backend_addr, VAR_0->mic_virtblk.backend_size);
 FUNC_0(VAR_0->mic_virtblk.backend);
 FUNC_1(VAR_0->mic_virtblk.backend_file);
}
