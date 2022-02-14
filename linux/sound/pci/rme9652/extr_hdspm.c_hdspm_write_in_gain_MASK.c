
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct hdspm {TYPE_2__* mixer; } ;
struct TYPE_4__ {TYPE_1__* ch; } ;
struct TYPE_3__ {unsigned short* in; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct hdspm*,scalar_t__,unsigned short) ;

__attribute__((used)) static int FUNC_1(struct hdspm *VAR_2, unsigned int VAR_3,
          unsigned int VAR_4, unsigned short VAR_5)
{
 if (VAR_3 >= VAR_1 || VAR_4 >= VAR_1)
  return -1;

 FUNC_0(VAR_2,
      VAR_0 +
      ((VAR_4 + 128 * VAR_3) * sizeof(u32)),
      (VAR_2->mixer->ch[VAR_3].in[VAR_4] = VAR_5 & 0xFFFF));
 return 0;
}
