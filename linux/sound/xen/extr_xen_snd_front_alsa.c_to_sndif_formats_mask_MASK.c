
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int sndif; int alsa; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static u64 FUNC_3(u64 VAR_1)
{
 u64 VAR_2;
 int VAR_3;

 VAR_2 = 0;
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
  if (FUNC_2(VAR_0[VAR_3].alsa) & VAR_1)
   VAR_2 |= FUNC_1(VAR_0[VAR_3].sndif);

 return VAR_2;
}
