
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evlist {int bkw_mmap_state; int overwrite_mmap; } ;
typedef enum bkw_mmap_state { ____Placeholder_bkw_mmap_state } bkw_mmap_state ;






 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct evlist*) ;
 int FUNC_2 (struct evlist*) ;

void FUNC_3(struct evlist *VAR_0,
      enum bkw_mmap_state VAR_1)
{
 enum bkw_mmap_state VAR_2 = VAR_0->bkw_mmap_state;
 enum action {
  NONE,
  PAUSE,
  RESUME,
 } VAR_3 = NONE;

 if (!VAR_0->overwrite_mmap)
  return;

 switch (VAR_2) {
 case 129: {
  if (VAR_1 != 128)
   goto state_err;
  break;
 }
 case 128: {
  if (VAR_1 != 131)
   goto state_err;
  VAR_3 = PAUSE;
  break;
 }
 case 131: {
  if (VAR_1 != 130)
   goto state_err;
  break;
 }
 case 130: {
  if (VAR_1 != 128)
   goto state_err;
  VAR_3 = RESUME;
  break;
 }
 default:
  FUNC_0(1, "Shouldn't get there\n");
 }

 VAR_0->bkw_mmap_state = VAR_1;

 switch (VAR_3) {
 case PAUSE:
  FUNC_1(VAR_0);
  break;
 case RESUME:
  FUNC_2(VAR_0);
  break;
 case NONE:
 default:
  break;
 }

state_err:
 return;
}
