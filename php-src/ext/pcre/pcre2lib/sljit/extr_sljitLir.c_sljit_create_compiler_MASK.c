
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sljit_memory_fragment {int scratches; int saveds; int fscratches; int fsaveds; int local_size; int args; int cpool_diff; void* delay_slot; int * cpool; int * cpool_unique; struct sljit_memory_fragment* abuf; struct sljit_memory_fragment* buf; scalar_t__ used_size; int * next; void* allocator_data; int error; } ;
struct sljit_compiler {int scratches; int saveds; int fscratches; int fsaveds; int local_size; int args; int cpool_diff; void* delay_slot; int * cpool; int * cpool_unique; struct sljit_compiler* abuf; struct sljit_compiler* buf; scalar_t__ used_size; int * next; void* allocator_data; int error; } ;
typedef int sljit_uw ;
typedef int sljit_u8 ;
typedef int sljit_u32 ;
typedef int sljit_u16 ;
typedef int sljit_sw ;
typedef int sljit_s8 ;
typedef int sljit_s32 ;
typedef int sljit_s16 ;
typedef int sljit_p ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct sljit_memory_fragment*,void*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int,void*) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct sljit_memory_fragment*,int) ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 () ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

struct sljit_compiler* FUNC_5(void *VAR_17)
{
 struct sljit_compiler *VAR_18 = (struct sljit_compiler*)FUNC_2(sizeof(struct sljit_compiler), VAR_17);
 if (!VAR_18)
  return ((void*)0);
 FUNC_3(VAR_18, sizeof(struct sljit_compiler));

 FUNC_0(
  sizeof(sljit_s8) == 1 && sizeof(sljit_u8) == 1
  && sizeof(sljit_s16) == 2 && sizeof(sljit_u16) == 2
  && sizeof(sljit_s32) == 4 && sizeof(sljit_u32) == 4
  && (sizeof(sljit_p) == 4 || sizeof(sljit_p) == 8)
  && sizeof(sljit_p) <= sizeof(sljit_sw)
  && (sizeof(sljit_sw) == 4 || sizeof(sljit_sw) == 8)
  && (sizeof(sljit_uw) == 4 || sizeof(sljit_uw) == 8),
  VAR_15);
 FUNC_0(VAR_6 == VAR_5,
  VAR_14);
 FUNC_0(VAR_9 != VAR_5,
  VAR_16);
 FUNC_0(!(VAR_3 & 0x1) && !(VAR_8 & 0x1) && !(VAR_4 & 0x1) && !(VAR_7 & 0x1),
  VAR_13);


 VAR_18->error = VAR_10;

 VAR_18->allocator_data = VAR_17;
 VAR_18->buf = (struct sljit_memory_fragment*)FUNC_2(VAR_1, VAR_17);
 VAR_18->abuf = (struct sljit_memory_fragment*)FUNC_2(VAR_0, VAR_17);

 if (!VAR_18->buf || !VAR_18->abuf) {
  if (VAR_18->buf)
   FUNC_1(VAR_18->buf, VAR_17);
  if (VAR_18->abuf)
   FUNC_1(VAR_18->abuf, VAR_17);
  FUNC_1(VAR_18, VAR_17);
  return ((void*)0);
 }

 VAR_18->buf->next = ((void*)0);
 VAR_18->buf->used_size = 0;
 VAR_18->abuf->next = ((void*)0);
 VAR_18->abuf->used_size = 0;

 VAR_18->scratches = -1;
 VAR_18->saveds = -1;
 VAR_18->fscratches = -1;
 VAR_18->fsaveds = -1;
 VAR_18->local_size = -1;
 return VAR_18;
}
