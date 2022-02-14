
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct snd_oxfw {int unit; struct fw_scs1x* spec; } ;
struct TYPE_2__ {int offset; } ;
struct fw_scs1x {TYPE_1__ hss_handler; } ;
typedef int data ;
typedef int __be64 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int *,int,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_oxfw *VAR_3)
{
 struct fw_scs1x *VAR_4 = VAR_3->spec;
 __be64 VAR_5;

 VAR_5 = FUNC_0(((u64)VAR_1 << 56) |
       VAR_4->hss_handler.offset);
 return FUNC_1(VAR_3->unit, VAR_2,
      VAR_0, &VAR_5, sizeof(VAR_5), 0);
}
