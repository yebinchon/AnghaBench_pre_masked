
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd7930_map {void* gr; void* ger; void* stgr; void* gx; } ;
struct snd_amd7930 {size_t rgain; size_t mgain; int pgain; struct amd7930_map map; } ;


 int FUNC_0 (void**) ;
 int FUNC_1 (struct snd_amd7930*) ;
 void** VAR_0 ;
 void** VAR_1 ;

__attribute__((used)) static void FUNC_2(struct snd_amd7930 *VAR_2)
{
 struct amd7930_map *VAR_3 = &VAR_2->map;
 int VAR_4;

 VAR_3->gx = VAR_1[VAR_2->rgain];
 VAR_3->stgr = VAR_1[VAR_2->mgain];
 VAR_4 = (VAR_2->pgain * (256 + FUNC_0(VAR_0))) >> 8;
 if (VAR_4 >= 256) {
  VAR_3->ger = VAR_0[VAR_4 - 256];
  VAR_3->gr = VAR_1[255];
 } else {
  VAR_3->ger = VAR_0[0];
  VAR_3->gr = VAR_1[VAR_4];
 }
 FUNC_1(VAR_2);
}
