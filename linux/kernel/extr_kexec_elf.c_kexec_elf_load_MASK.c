
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kimage {int dummy; } ;
struct kexec_elf_info {scalar_t__ buffer; struct elf_phdr* proghdrs; } ;
struct kexec_buf {size_t bufsz; size_t memsz; unsigned long mem; int buf_min; int buf_align; void* buffer; } ;
struct elfhdr {size_t e_phnum; } ;
struct elf_phdr {scalar_t__ p_type; size_t p_filesz; size_t p_memsz; int p_offset; int p_paddr; int p_align; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct kexec_buf*) ;

int FUNC_1(struct kimage *VAR_3, struct elfhdr *VAR_4,
    struct kexec_elf_info *VAR_5,
    struct kexec_buf *VAR_6,
    unsigned long *VAR_7)
{
 unsigned long VAR_8 = VAR_2;
 int VAR_9;
 size_t VAR_10;


 for (VAR_10 = 0; VAR_10 < VAR_4->e_phnum; VAR_10++) {
  unsigned long VAR_11;
  size_t VAR_12;
  const struct elf_phdr *VAR_13;

  VAR_13 = &VAR_5->proghdrs[VAR_10];
  if (VAR_13->p_type != VAR_1)
   continue;

  VAR_12 = VAR_13->p_filesz;
  if (VAR_12 > VAR_13->p_memsz)
   VAR_12 = VAR_13->p_memsz;

  VAR_6->buffer = (void *) VAR_5->buffer + VAR_13->p_offset;
  VAR_6->bufsz = VAR_12;
  VAR_6->memsz = VAR_13->p_memsz;
  VAR_6->buf_align = VAR_13->p_align;
  VAR_6->buf_min = VAR_13->p_paddr;
  VAR_6->mem = VAR_0;
  VAR_9 = FUNC_0(VAR_6);
  if (VAR_9)
   goto out;
  VAR_11 = VAR_6->mem;

  if (VAR_11 < VAR_8)
   VAR_8 = VAR_11;
 }

 *VAR_7 = VAR_8;
 VAR_9 = 0;
 out:
 return VAR_9;
}
