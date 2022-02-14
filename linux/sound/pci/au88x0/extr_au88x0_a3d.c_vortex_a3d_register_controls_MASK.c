
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int card; int * a3d; } ;
typedef TYPE_2__ vortex_t ;
struct TYPE_4__ {int numid; } ;
struct snd_kcontrol {int put; int info; TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_1 (int *,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_2(vortex_t *VAR_15)
{
 struct snd_kcontrol *VAR_16;
 int VAR_17, VAR_18;

 for (VAR_18 = 0; VAR_18 < VAR_5; VAR_18++) {
  if ((VAR_16 =
       FUNC_1(&VAR_14, &VAR_15->a3d[VAR_18])) == ((void*)0))
   return -VAR_4;
  VAR_16->id.numid = VAR_2;
  VAR_16->info = VAR_8;
  VAR_16->put = VAR_9;
  if ((VAR_17 = FUNC_0(VAR_15->card, VAR_16)) < 0)
   return VAR_17;
 }

 for (VAR_18 = 0; VAR_18 < VAR_5; VAR_18++) {
  if ((VAR_16 =
       FUNC_1(&VAR_14, &VAR_15->a3d[VAR_18])) == ((void*)0))
   return -VAR_4;
  VAR_16->id.numid = VAR_3;
  VAR_16->info = VAR_12;
  VAR_16->put = VAR_13;
  if ((VAR_17 = FUNC_0(VAR_15->card, VAR_16)) < 0)
   return VAR_17;
 }

 for (VAR_18 = 0; VAR_18 < VAR_5; VAR_18++) {
  if ((VAR_16 =
       FUNC_1(&VAR_14, &VAR_15->a3d[VAR_18])) == ((void*)0))
   return -VAR_4;
  VAR_16->id.numid = VAR_1;
  VAR_16->info = VAR_10;
  VAR_16->put = VAR_11;
  if ((VAR_17 = FUNC_0(VAR_15->card, VAR_16)) < 0)
   return VAR_17;
 }

 for (VAR_18 = 0; VAR_18 < VAR_5; VAR_18++) {
  if ((VAR_16 =
       FUNC_1(&VAR_14, &VAR_15->a3d[VAR_18])) == ((void*)0))
   return -VAR_4;
  VAR_16->id.numid = VAR_0;
  VAR_16->info = VAR_6;
  VAR_16->put = VAR_7;
  if ((VAR_17 = FUNC_0(VAR_15->card, VAR_16)) < 0)
   return VAR_17;
 }
 return 0;
}
