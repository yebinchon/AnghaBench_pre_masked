
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int regno; } ;
struct TYPE_8__ {TYPE_2__ offset; } ;
struct TYPE_6__ {int kind; } ;
struct TYPE_9__ {TYPE_3__ addr; TYPE_1__ shifter; } ;
typedef TYPE_4__ aarch64_opnd_info ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 char const* FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static inline const char *
FUNC_2 (const aarch64_opnd_info *VAR_2)
{
  switch (VAR_2->shifter.kind)
    {
    case 128:
    case 130:
      return FUNC_1 (VAR_2->addr.offset.regno, VAR_0, 0);

    case 131:
    case 129:
      return FUNC_1 (VAR_2->addr.offset.regno, VAR_1, 0);

    default:
      FUNC_0 ();
    }
}
