
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct special_entry {int size; short feature; scalar_t__ new; scalar_t__ group; scalar_t__ orig; scalar_t__ new_len; scalar_t__ orig_len; int jump_or_nop; } ;
struct special_alt {unsigned char orig_len; unsigned char new_len; int skip_orig; int skip_alt; unsigned int new_off; int new_sec; scalar_t__ orig_off; int orig_sec; scalar_t__ group; int jump_or_nop; } ;
struct section {TYPE_1__* data; } ;
struct rela {scalar_t__ addend; TYPE_2__* sym; } ;
struct elf {int dummy; } ;
struct TYPE_4__ {scalar_t__ type; int sec; int name; } ;
struct TYPE_3__ {scalar_t__ d_buf; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct section*,scalar_t__,...) ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 struct rela* FUNC_1 (struct section*,scalar_t__) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_2(struct elf *VAR_4, struct special_entry *VAR_5,
    struct section *VAR_6, int VAR_7,
    struct special_alt *VAR_8)
{
 struct rela *VAR_9, *VAR_10;
 unsigned long VAR_11;

 VAR_11 = VAR_7 * VAR_5->size;

 VAR_8->group = VAR_5->group;
 VAR_8->jump_or_nop = VAR_5->jump_or_nop;

 if (VAR_8->group) {
  VAR_8->orig_len = *(unsigned char *)(VAR_6->data->d_buf + VAR_11 +
         VAR_5->orig_len);
  VAR_8->new_len = *(unsigned char *)(VAR_6->data->d_buf + VAR_11 +
        VAR_5->new_len);
 }

 if (VAR_5->feature) {
  unsigned short VAR_12;

  VAR_12 = *(unsigned short *)(VAR_6->data->d_buf + VAR_11 +
           VAR_5->feature);






  if (VAR_12 == VAR_1)
   VAR_8->skip_orig = 1;
  if (VAR_12 == VAR_2) {
   if (VAR_3)
    VAR_8->skip_orig = 1;
   else
    VAR_8->skip_alt = 1;
  }
 }

 VAR_9 = FUNC_1(VAR_6, VAR_11 + VAR_5->orig);
 if (!VAR_9) {
  FUNC_0("can't find orig rela", VAR_6, VAR_11 + VAR_5->orig);
  return -1;
 }
 if (VAR_9->sym->type != VAR_0) {
  FUNC_0("don't know how to handle non-section rela symbol %s",
      VAR_6, VAR_11 + VAR_5->orig, VAR_9->sym->name);
  return -1;
 }

 VAR_8->orig_sec = VAR_9->sym->sec;
 VAR_8->orig_off = VAR_9->addend;

 if (!VAR_5->group || VAR_8->new_len) {
  VAR_10 = FUNC_1(VAR_6, VAR_11 + VAR_5->new);
  if (!VAR_10) {
   FUNC_0("can't find new rela",
      VAR_6, VAR_11 + VAR_5->new);
   return -1;
  }

  VAR_8->new_sec = VAR_10->sym->sec;
  VAR_8->new_off = (unsigned int)VAR_10->addend;


  if (VAR_8->new_off >= 0x7ffffff0)
   VAR_8->new_off -= 0x7ffffff0;
 }

 return 0;
}
